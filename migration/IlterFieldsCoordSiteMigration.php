<?php

/**
 * @file
 * Definition of IlterFieldsCoordSiteMigration.
 */

class IlterFieldsCoordSiteMigration extends DrupalNode6Migration {
  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'research_site',
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

//  should we also re-map the title?

//field_research_site_shapefile
//field_research_site_upshp

    $this->addFieldMapping('field_description','field_research_site_description');

    $this->addFieldMapping('field_site_id')
      ->defaultValue(NULL);

    $this->addFieldMapping('field_elevation', 'field_research_site_elemax');

//  create this field!
    $this->addFieldMapping('field_elevation_min', 'field_research_site_elemin');

    $this->addFieldMapping('field_images','field_research_site_image')
      ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);  

    $this->addFieldMapping('field_site_details')
      ->description('Handled in prepare().');

    $this->addFieldMapping('field_coordinates')
      ->description('Handled in prepare().');

    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'field_research_site_expeersite',
      'field_dataset_md_date',
      'field_research_site_contact',
      'field_ilter_research_site_ilter',
      'field_dataset_short_name',
      'field_research_site_subcode',
      'field_research_site_purpose',
      'field_research_site_dataccadmin',
      'field_research_site_datacstadmin',
      'field_research_site_image:list',
      'field_research_site_estab',
      'field_research_site_status',
      'field_research_site_siteclosed',
      'field_research_site_size',
      'field_research_site_bbox_ec',
      'field_research_site_datareq',
      'field_ilter_network_url',
      'field_ilter_network_url:title',
      'field_ilter_network_url:attributes',
      'field_research_site_lat',
      'field_research_site_long',
      'field_research_site_temp_max',
      'field_research_site_temp_ann',
      'field_research_site_temp_min',
      'field_research_site_precip_ann',
      'field_research_site_precip_max',
      'field_research_site_precip_min',
      'field_research_site_elevavg',
      'field_research_site_biomeplus',
      'field_research_site_biome',
      'field_research_site_ecostype1',
      'field_research_site_ecostype2',
      'field_research_site_ecostype3',
      'field_research_site_geology',
      'field_research_site_soils',
      'field_research_site_history',
      'field_research_site_hydrology',
      'field_research_site_vegetation',
      'field_research_site_habitat',
      'field_research_site_type',
      'field_research_site_site_class',
      'field_research_site_expeer',
      'field_research_site_eu_docst',
      'field_research_site_eu_notes',
      'field_research_site_scale',
      'field_research_site_desobs',
      'field_research_site_desexp',
      'field_research_site_expscale',
      'field_research_site_biogeo',
      'field_research_site_euenvzone',
      'field_research_site_metzecodens',
      'field_research_site_metzenzeco',
      'field_research_site_mgtres',
      'field_research_site_mgtprcnt',
      'field_research_site_mgtnotes',
      'field_ressearch_site_expeer_name',
      'field_research_site_corine',
      'field_research_site_infvalue',
      'field_research_site_accyr',
      'field_research_site_accparts',
      'field_research_site_acctype',
      'field_research_site_snowclr',
      'field_research_site_snowclrfr',
      'field_research_site_power',
      'field_research_site_poweramt',
      'field_research_site_powerloc',
      'field_research_site_datatrans',
      'field_research_site_datatrtype',
      'field_research_site_datatrfrom',
      'field_research_site_datatrfrtp',
      'field_research_site_container',
      'field_research_site_meastower',
      'field_research_site_meastowloc',
      'field_research_site_marineplt',
      'field_research_site_staffrm',
      'field_research_site_lodging',
      'field_research_site_lodgnum',
      'field_research_site_infranote',
      'field_research_site_budget',
      'field_research_site_operation',
      'field_research_site_opernotes',
      'field_research_site_dataset',
      'field_research_site_dataformat',
      'field_research_site_dataserv',
      'field_research_site_datastorloc',
      'field_research_site_datastrnum',
      'field_research_site_shapefile',
      'field_research_site_datapolpub',
      'field_research_site_dataacced',
      'field_research_site_dataccres',
      'field_research_site_datacostpub',
      'field_research_site_datacosted',
      'field_research_site_datacostres',
      'field_research_site_datanotes',
      'field_research_site_sitelong',
      'field_research_site_sitecode',
      'field_research_site_infcode',
      'field_research_site_protprgnotes',
      'field_research_site_protprg',
      'field_research_site_network',
      'field_research_site_parentsiteco',
      'field_research_site_protprgcover',
      'field_research_site_bbox_wc',
      'field_research_site_upshp:list',
      'field_research_site_upshp:description',
      'field_research_site_ltereur_acrd',
      'field_research_site_bbox_sc',
      'field_research_site_bbox_nc',
      'field_research_site_declarations',
      'field_research_site_params',
      'field_research_site_ecosys',
      'field_research_site_samplingdays',
      'field_research_site_maintenadays',
      'field_ilter_network_country',
      'field_research_site_resrchtopic',
      'field_dataset_mdprovider_ref',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
      'field_research_site_image_data',
      'field_research_site_upshp_data',
    ));


    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:alt',
      'field_images:title',
      'field_description:language',
      'field_description:format',
      'field_coordinates:srid',
      'field_coordinates:accuracy',
      'field_coordinates:source',
      'field_core_areas',
      'field_core_areas:source_type',
      'field_core_areas:create_term',
      'field_core_areas:ignore_case',    
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
    if (! is_int($row->field_dataset_id)){
      $row->field_dataset_id = NULL;
    }
  }

  public function prepare($node, $row) {
   
    $node->title = 'From Dataset: ' . $row->title;
    $node->field_site_details[LANGUAGE_NONE] = $this->getSiteDetails($node, $row);
    $node->field_coordinates[LANGUAGE_NONE] = $this->getCoordinates($node, $row);

    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }


  public function getCoordinates($node, $row) {
    $field_values = array();

   if (!empty($row->field_research_site_boundary)){

     $wkt = $row->field_research_site_boundary;

    // Force the geo module to accept our field value as they come
      $field_values[] = array(
       'geo_type' => 'geometrycollection',
       'wkt' => $wkt,
       'master_column' => 'wkt',
      );
    }

    return $field_values;
  }

   public function getSiteDetails($node, $row) {
    $details = array(
      'geology' => 'Geology',
      'soils' => 'Soils',
      'hydrology' => 'Hydrology',
      'vegetation' => 'Vegetation',
      'history' => 'History',
      'habitat' => 'Habitat',
    );

    $field_values = array();

    foreach ($details as $detail => $label) {
      $detail_value = trim($row->{'field_research_site_' . $detail});
      if (!empty($detail_value)) {
        $entity = entity_create('site_details', array('type' => 'site_details', 'language' => $node->language));
        $wrapper = entity_metadata_wrapper('site_details', $entity);
        $wrapper->field_label = $label;
        $wrapper->field_description->value = $detail_value;
        entity_save('site_details', $entity);
        $field_values[] = array('target_id' => $entity->id);
      }
    }

    return $field_values;
  }

}
