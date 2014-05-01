<?php

/**
 * @file
 * Definition of IlterContentPageMigration.
 */

class IlterContentPageMigration extends DeimsContentPageMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);
 
    // files attached
    $this->addFieldMapping('field_files','field_attachment')
     ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_files:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_files:preserve_files')->defaultValue(TRUE);

    $this->addUnmigratedSources(array(
      'revision',
      'revision_uid',
      'log',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
      'field_attachment:list',
    ));

    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:alt',
      'field_images:title',
      'field_images',
      'field_images:file_class',
      'field_images:preserve_files',
      'field_images:destination_dir',
      'field_images:destination_file',
      'field_images:file_replace',
      'field_images:source_dir',
      'field_images:urlencode',
      'field_files:description',
      'field_files:display',
      'field_files:language',
    ));

  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }

}
