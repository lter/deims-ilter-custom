<?php

/**
 * @file
 * Definition of IlterEntityFreeKeywordMigration.
 */

class IlterEntityFreeKeywordMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->connection = Database::getConnection('default', 'drupal6');

    // Build the query for where this data is coming from.
    $query = $this->connection->select('content_field_dataset_keyw', 'cfk');
    $query->fields('cfk', array('nid','field_dataset_keyw_value',));
    $query->join('content_field_dataset_keyw_voca', 'cfkv', 'cfk.vid = cfkv.vid');
    $query->fields('cfkv', array('field_dataset_keyw_voca_value'));
    // keyword  must not be empty.
    $query->condition('cfk.field_dataset_keyw_value', '', '<>');

    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationEntityAPI('free_keyword','free_keyword');

    // Tell Migrate where the IDs for this migration live, and
    // where they should go.
    $source_key_schema = array(
      'nid' => array(
        'type' => 'int',
        'length' => 10,
        'not null' => TRUE,
        'alias' => 'cfk',
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema());

    $this->addFieldMapping('field_free_keyword', 'field_dataset_keyw_value');
    $this->addFieldMapping('field_free_vocab_id', 'field_dataset_keyw_voca_value');

    $this->addUnmigratedDestinations(array(
      'path',
    ));
  }
}
