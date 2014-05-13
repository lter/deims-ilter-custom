<?php

/**
 * @file
 * Definition of IlterEntitySamplingMigration.
 */

class IlterEntitySamplingMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->connection = Database::getConnection('default', 'drupal6');

    // Build the query for where this data is coming from.
    $query = $this->connection->select('content_type_dataset', 'ctd');
    $query->fields('ctd', array('nid','field_dataset_samp_freq_value','field_dataset_sam_area_txt_value'));
    $query->condition('ctd.field_dataset_sam_area_txt_value', '', '<>');

    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationEntityAPI('sampling_description','sampling_description');

    // Tell Migrate where the IDs for this migration live, and
    // where they should go.
    $source_key_schema = array(
      'nid' => array(
        'type' => 'int',
        'length' => 10,
        'not null' => TRUE,
        'alias' => 'ctd',
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema());

    $this->addFieldMapping('field_sampdesc_description', 'field_dataset_sam_area_txt_value');
    $this->addFieldMapping('field_sampdesc_timespan', 'field_dataset_samp_freq_value');

    $this->addUnmigratedDestinations(array(
      'path',
    ));
  }
}
