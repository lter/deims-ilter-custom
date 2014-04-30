<?php
/**
* @file
* Definition of IlterContentForumMigration
*/
class IlterContentForumMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'forum',
      'destination_type' => 'forum',
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
      'taxonomy_forums:ignore_case',
      'taxonomy_forums:create_term',
    ));

    $this->addFieldMapping('taxonomy_forums','7')
     ->sourceMigration('IlterTaxonomyForum');
    $this->addFieldMapping('taxonomy_forums:source_type')
     ->defaultValue('tid');

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
