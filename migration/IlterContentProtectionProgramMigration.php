<?php
/**
* @file
* Definition of IlterContentProtectionProgramMigration
*/
class IlterContentProtectionProgramMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'protection_program',
      'destination_type' => 'protection_program',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    $this->addUnmigratedSources(array(
       'revision',
       'log',
       'revision_uid',
       'upload',
       'upload:description',
       'upload:list',
       'upload:weight',
       'field_networkweb:attributes',
    ));

    $this->addFieldMapping('field_url','field_networkweb');
    $this->addFieldMapping('field_url:title','field_networkweb:title');
    $this->addFieldMapping('field_description','field_networkdesc');
    $this->addFieldMapping('field_program_scope','field_networkscope');

    $this->addUnmigratedDestinations(array(
      'field_url:attributes',
      'field_description:language',
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
