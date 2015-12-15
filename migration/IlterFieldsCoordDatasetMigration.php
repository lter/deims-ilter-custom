<?php

/**
 * @file
 * Definition of IlterFieldsCoordDatasetMigration.
 */

class IlterFieldsCoordDataSetMigration extends DrupalNode6Migration {
  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'dataset',
      'destination_type' => 'research_site',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    // This content type does not have a body field.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:language');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');
    $this->addUnmigratedSources(array('teaser'));

//   bring the title of the correspondonding Site.
//   this may be a chicken-n-egg situation

    $this->removeFieldMapping('title');

    $this->addFieldMapping('title', 'field_dataset_site_name')
     ->description('let us do this manually in prepare()');

    $this->addFieldMapping('field_description:format', 'format')
      ->description('in prepare()');

//  is this really OK?
    $this->addFieldMapping('field_site_id', 'field_dataset_id')
      ->description('in prepareRow')
      ->defaultValue(NULL);

    $this->addFieldMapping('field_elevation', 'field_dataset_altit_max');

//  create this field!
    $this->addFieldMapping('field_elevation_min', 'field_dataset_altit_min');

      $this->addFieldMapping('field_coordinates','geo')
        ->description('in Prep');
      $this->addFieldMapping('field_coordinates:geom','geo')
        ->description('in Prep');
      $this->addFieldMapping('field_coordinates:geo_type')->defaultValue('polygon');

    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'field_dataset_keyw_env_voca',
      'field_dataset_keyw_env_voca:title',
      'field_dataset_keyw_env_voca:attributes',
      'field_dataset_md_date',
      'field_dataset_publication_date',
      'field_dataset_lang',
      'field_dataset_abstract',
      'field_dataset_abstract:format',
      'field_dataset_rights',
      'field_dataset_online_locator',
      'field_dataset_online_locator:title',
      'field_dataset_online_locator:attributes',
      'field_dataset_online_function',
      'field_beg_end_date',
      'field_beg_end_date:value2',
      'field_dataset_taxa_rankname',
      'field_dataset_taxa_common',
      'field_dataset_taxa_scientific',
      'field_dataset_access_use',
      'field_dataset_keyw',
      'field_instrumentation',
      'field_dataset_legal',
      'field_dataset_samp_freq',
      'field_dataset_keyw_voca',
      'field_dataset_sam_area_txt',
      'field_dataset_method_title_url',
      'field_dataset_method_title_url:title',
      'field_dataset_method_title_url:attributes',
      'field_methods',
      'field_dataset_keyw_env',
      'field_dataset_uuid',
      'field_dataset_uploaddata',
      'field_dataset_uploaddata:list',
      'field_dataset_owner_ref',
      'field_dataset_contact_ref',
      'field_dataset_mdprovider_ref',
      '1',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
    ));

    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:destination_dir',
      'field_images:destination_file',
      'field_images:file_replace',
      'field_images:source_dir',
      'field_description:language',
      'field_coordinates:geohash',
      'field_core_areas',
      'field_core_areas:source_type',
      'field_core_areas:create_term',
      'field_core_areas:ignore_case',    
      'field_images',
      'field_images:file_class',
      'field_images:preserve_files',
      'field_site_details',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    if (! is_int($row->field_dataset_id)){
      $row->field_dataset_id = NULL;
    }
 
    if(!empty($row->field_dataset_bbox_wc[0])) { 
       $row->geo = 'POLYGON((' . 
       $row->field_dataset_bbox_wc[0] . ' ' . $row->field_dataset_bbox_nc[0]. ',' .
       $row->field_dataset_bbox_ec[0] . ' ' . $row->field_dataset_bbox_nc[0]. ',' .
       $row->field_dataset_bbox_ec[0] . ' ' . $row->field_dataset_bbox_sc[0]. ',' .
       $row->field_dataset_bbox_wc[0] . ' ' . $row->field_dataset_bbox_sc[0]. ',' .
       $row->field_dataset_bbox_wc[0] . ' ' . $row->field_dataset_bbox_nc[0]. '))'; 
    }

  }

  public function prepare($node, $row) {

//  Grab the title from the D6RS cct. body too.
//
    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->condition('n.type', 'research_site');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title', 'body', 'format'));
    $query->condition('n.nid', $row->field_dataset_site_name);

    if ($result = $query->execute()->fetch()) {
      if (!empty($result->title)) {
//      but query already migrated res. site nodes.

        $equery = new EntityFieldQuery();
        $equery->entityCondition('entity_type', 'node');
        $equery->entityCondition('bundle', 'research_site');
        $equery->propertyCondition('title', $result->title);
        $eresults = $equery->execute();
        if (!empty($eresults['node'])) {   // is already present
          return FALSE;
        } else {
          $node->title = $result->title .':'.$row->title;
        }
      }

      if (!empty($result->body)) {
        $node->field_description[LANGUAGE_NONE][0] = $result->body;
        $row->format = $result->format;
      }
    }

    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);

  }

}
