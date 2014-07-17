<?php
/**
* @file
* Definition of IlterContentILTERNationalNetworkMigration
*/
class IlterContentILTERNationalNetworkMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'ilter_national_network',
      'destination_type' => 'ilter_national_network',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    // This content type does not have a body field.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:language');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');

    $this->addUnmigratedSources(array(
       'body', 
       'teaser', 
       'format',
       'revision',
       'log',
       'revision_uid',
       'upload',
       'upload:description',
       'upload:list',
       'upload:weight',
    ));

    $this->addUnmigratedDestinations(array(
       'field_ilter_network_netid:language',
       'field_ilter_network_url:language',
    ));

    $this->addSimpleMappings(array(
      'field_ilter_network_region',
      'field_ilter_network_country',
      'field_ilter_network_netid',
      'field_ilter_network_url',
      'field_ilter_network_url:attributes',
      'field_ilter_network_url:title',
      'field_ilter_network_status',
      'field_ilter_network_num_mbrs',
    ));

/**
  The content for these is messed up at source.
// Network Coordinator NRef 
    $this->AddFieldMapping('field_ilter_network_coordinator','field_ilter_network_coordinator')
      ->sourceMigration('DeimsContentPerson');

// Information Manager (field_ilter_im)  *person ref*
    $this->AddFieldMapping('field_ilter_network_im','field_ilter_im')
      ->sourceMigration('DeimsContentPerson');
*/
    $this->AddFieldMapping('field_ilter_network_listrec','field_ilter_network_listrec')
      ->description('Tweaked in prepareRow');

  }
  public function prepareRow($row) {
    parent::prepareRow($row);

    //Convert Yes and No to integers 1 and 0
    switch ($row->field_ilter_network_listrec) {
      case 'Yes':
        $row->field_ilter_network_listrec = 1;
        break;
      case 'No':
      default:
        $row->field_ilter_network_listrec = 0;
        break;
    }

  }
  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
   
}
