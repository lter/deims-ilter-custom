<?php

/**
 * @file
 * Definition of IlterEntityTaxaMigration.
 */

class IlterEntityTaxaMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->connection = Database::getConnection('default', 'drupal6');

    // Build the query for where this data is coming from.
    $query = $this->connection->select('content_field_dataset_taxa_common', 'cfc');
    $query->fields('cfc', array('nid','field_dataset_taxa_common_value',));
    $query->join('content_field_dataset_taxa_rankname', 'cfr', 'cfc.vid = cfr.vid');
    $query->fields('cfr', array('field_dataset_taxa_rankname_value'));
    $query->join('content_field_dataset_taxa_scientific', 'cfs', 'cfc.vid = cfs.vid');
    $query->fields('cfs', array('field_dataset_taxa_scientific_value'));
    // Title of the common name must not be empty.
    $query->condition('cfc.field_dataset_taxa_common_value', '', '<>');

    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationEntityAPI('taxa','taxa');

    // Tell Migrate where the IDs for this migration live, and
    // where they should go.
    $source_key_schema = array(
      'nid' => array(
        'type' => 'int',
        'length' => 10,
        'not null' => TRUE,
        'alias' => 'cfc',
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema());

    $this->addFieldMapping('field_taxa_rankname', 'field_dataset_taxa_rankname_value');
    $this->addFieldMapping('field_taxa_common', 'field_dataset_taxa_common_value');
    $this->addFieldMapping('field_taxa_scientific', 'field_dataset_taxa_scientific_value');

    $this->addUnmigratedDestinations(array(
      'field_taxa_authority',
      'field_taxa_internal_id',
      'field_taxa_authority:title',
      'field_taxa_authority:attributes',
      'field_taxa_id',
      'field_taxa_id:language',
      'field_taxa_internal_id:language',
      'path',
      'field_taxa_common:language',	
      'field_taxa_scientific:language',	
    ));
  }
}
