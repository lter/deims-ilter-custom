<?php
/**
* @file
* Definition of IlterContentCommitteeMigration
*/
class IlterContentCommitteeMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  // remove field mapping body, etc

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'committee',
      'destination_type' => 'committee',
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
    ));

    $this->addUnmigratedDestinations(array(
      'field_committee_purpose:language',
      'field_files:language',
      'field_files',
      'field_files:file_class',
      'field_files:preserve_files',
      'field_files:destination_dir',
      'field_files:destination_file',
      'field_files:file_replace',
      'field_files:source_dir',
      'field_files:urlencode',
      'field_files:description',
      'field_files:display',
    ));

    //  this may be trickier.... it refs to a member that refs to paerson
    // field_committee_member    would have to be a Handler...

    $this->addFieldMapping('field_committee_chair_ref','field_committee_chair')
     ->sourceMigration('DeimsContentPerson');

//    $this->addFieldMapping('field_committee_members_ref','');
    $this->addFieldMapping('field_email','field_person_email');
    $this->addFieldMapping('field_committee_purpose','field_committee_purpose');

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
