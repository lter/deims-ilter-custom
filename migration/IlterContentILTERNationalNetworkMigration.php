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

// No body.

// Network Name (title)
// Author
// Region (field_ilter_network_region)
// Country (field_ilter_network_country)
// Network ID (field_ilter_network_netid)
// Web address (field_ilter_network_url)
// Status (field_ilter_network_status)
// Network Coordinator (field_ilter_network_coordinator) *person ref*
// Information Manager (field_ilter_im)  *person ref*
// Number Of Members (field_ilter_network_num_mbrs)
// Email List Received (field_ilter_network_listrec)

//   File Upload looks like was not used, but verify

/*    $this->addFieldMapping('field_protocol_file', 'upload')
 *    ->sourceMigration('DeimsFile')
 *     ->arguments(array(
 *         'file_class' => 'MigrateFileFid',
 *         'preserve_files' => TRUE,
 *     ));
 */

// migrate term relationships. there might be another family, Tags. check

    $this->addFieldMapping('field_protocol_lter_keywords', '4')
       ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_protocol_lter_keywords:source_type')  
            ->defaultValue('tid');

    $this->addFieldMapping('field_protocol_ntl_keywords', '5')
       ->sourceMigration('NtlTaxonomyNtlKeywords');
      $this->addFieldMapping('field_protocol_ntl_keywords:source_type')  
            ->defaultValue('tid');

// 3 fields are named the same in Ntl D6 than D7.

    $this->addSimpleMappings(array('field_protocol_id','field_protocol_type','field_protocol_format','field_protocol_beg_end_date'));

// date  one is exactly, but end date differs.
    $this->addFieldMapping('field_beg_end_date_range:to', 'field_beg_end_date:value2');

// entity reference field_protocol_owner_ref

    $this->addFieldMapping('field_protocol_owner_ref', 'field_protocol_owner_ref')
      ->sourceMigration('DeimsContentPerson');

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
