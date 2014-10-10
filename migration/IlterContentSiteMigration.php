<?php
/**
* @file
* Definition of IlterContentSiteMigration
*/
class IlterContentSiteMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  // remove field mapping body, etc

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'research_site',
      'destination_type' => 'site',
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
//       'field_dataset_md_date'  (range, to)
    ));

    $this->addUnmigratedDestinations(array(
      'field_site_sitelong:language',
      'field__site_sitecode:language',
      'field_site_description:language',
      'field_site_ecostype1:language',
      'field_site_ecosytype2:language',
      'field_site_ecostype3:language',
      'field_short_name:language',
      'field_networks_term_ref:create_term',
      'field_networks_term_ref:ignore_case',
      'field_date:rrule',
      'field_date:to',
      'field_purpose:language',
      'field_images:destination_dir',
      'field_images:destination_file',
      'field_images:file_replace',
      'field_protection_prog_notes:language',
      'field_site_mgmnt_res_percent:language',
      'field_site_mgtres_notes:language',
      'field_site_inf_perm_power_prod:language',
      'field_site_inf_data_transm_type:language',
      'field_site_inf_notes:language',
      'field_site_inf_dat_trans_fro_typ:language',
      'field_site_dataccadmin:language',
      'field_site_datapolpubl:language',
      'field_site_dataacced:language',
      'field_site_dataccres:language',
      'field_site_datacstadmin:language',
      'field_site_datacstpub:language',
      'field_site_datacosted:language',
      'field_site_datacostres:language',
      'field_site_data_notes:language',
      'field_site_datareq:language',
      'field_site_datastorloc:language',
      'field_site_ops_cost:language',
      'field_site_ops_notes:language',
      'field_site_eu_notes:language',
      'field_site_eu_environ_zone_econ:language',
      'field_site_eu_infobase_sitecode:language',
      'field_ilter_network_url:language',
      'field_date:timezone',
    ));

    $this->addFieldMapping('field__site_sitecode','field_research_site_sitecode');
    $this->addFieldMapping('field_site_sitelong','field_research_site_sitelong');

    $this->addFieldMapping('field_ilter_national_network_nam','field_ilter_research_site_ilter')
     ->sourceMigration('IlterContentILTERNationalNetwork');

    $this->addFieldMapping('field_site_description','field_research_site_description');
    $this->addFieldMapping('field_site_size','field_research_site_size');
    // this the fields res. site
    // $this->addFieldMapping('field_site_resch_site_ref,'

    $this->addFieldMapping('field_coordinates','field_research_site_lat')
     ->description('Handled in prepare()');

    $this->addFieldMapping('field_temperature_average_annual','field_research_site_temp_ann');
    $this->addFieldMapping('field_precipitation_annual_ilter','field_research_site_precip_ann');
    $this->addFieldMapping('field_site_temp_max','field_research_site_temp_max');
    $this->addFieldMapping('field_site_temp_min','field_research_site_temp_min');
    $this->addFieldMapping('field_site_precip_max','field_research_site_precip_max');
    $this->addFieldMapping('field_site_precip_min','field_research_site_precip_min');

    $this->addFieldMapping('field_site_biomeplus','field_research_site_biomeplus');
    $this->addFieldMapping('field_site_ecostype1','field_research_site_ecostype1');
    $this->addFieldMapping('field_site_ecosytype2','field_research_site_ecostype2');
    $this->addFieldMapping('field_site_ecostype3','field_research_site_ecostype3');

    $this->addFieldMapping('field_person_contact','field_research_site_contact')
      ->sourceMigration('DeimsContentPerson');
    // watch this one, it is a trickey list.
    $this->addFieldMapping('field_ilter_network_country','field_ilter_network_country');
    $this->addFieldMapping('field_ilter_network_url','field_ilter_network_url');
    $this->addFieldMapping('field_ilter_network_url:title','field_ilter_network_url:title');
    $this->addFieldMapping('field_ilter_network_url:attributes','field_ilter_network_url:attributes');
    $this->addFieldMapping('field_short_name','field_dataset_short_name');
    //  self ref - watch chicken'n'egg
    $this->addFieldMapping('field_site_parentsite_ref','field_research_site_parentsiteco');
    // another self ref.
    $this->addFieldMapping('field_site_subsite_code_ref','field_research_site_subcode');
    $this->addFieldMapping('field_networks_term_ref','field_research_site_network')
      ->sourceMigration('IlterTaxonomyNetwork');
    $this->addFieldMapping('field_networks_term_ref:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_person_metadata_provider','field_dataset_mdprovider_ref')
      ->sourceMigration('DeimsContentPerson');
     
    $this->addFieldMapping('field_date','field_dataset_md_date');

     // this source may be missing the destination field
    //  field_research_site_resrchtopic

    $this->addFieldMapping('field_site_params','field_research_site_params');
    $this->addFieldMapping('field_year','field_research_site_estab');
    $this->addFieldMapping('field_site_status','field_research_site_status');
    $this->addFieldMapping('field_year_closed','field_research_site_siteclosed');
    $this->addFieldMapping('field_purpose','field_research_site_purpose');
    $this->addFieldMapping('field_images','field_research_site_image')
     ->sourceMigration('DeimsFile');
/**   review 
$this->addFieldMapping('field_images:file_class,'
$this->addFieldMapping('field_images:language,'
$this->addFieldMapping('field_images:preserve_files,'
$this->addFieldMapping('field_images:source_dir,'
$this->addFieldMapping('field_images:urlencode,'
$this->addFieldMapping('field_images:alt,'
$this->addFieldMapping('field_images:title,'
**/
    $this->addFieldMapping('field_site_protprgcover','field_research_site_protprgcover');
    $this->addFieldMapping('field_site_protection_prog_ref','field_research_site_protprg')
     ->sourceMigration('IlterContentProtectionProgram');
    $this->addFieldMapping('field_protection_prog_notes','field_research_site_protprgnotes');
    $this->addFieldMapping('field_site_mgtres','field_research_site_mgtres');
    $this->addFieldMapping('field_site_mgmnt_res_percent','field_research_site_mgtprcnt');
    $this->addFieldMapping('field_site_mgtres_notes','field_research_site_mgtnotes');
    $this->addFieldMapping('field_site_inf_val','field_research_site_infvalue');

    $this->addFieldMapping('field_site_access_allyear','field_research_site_accyr')
     ->description('Tweaked in prepareRow()');

    $this->addFieldMapping('field_site_allparts_access','field_research_site_accparts')
     ->description('Tweaked in prepareRow()');
   
    $this->addFieldMapping('field_site_access_type','field_research_site_acctype');
    $this->addFieldMapping('field_site_infr_snow_clearng','field_research_site_snowclr')
     ->description('Tweaked in prepareRow()');
    $this->addFieldMapping('field_site_snow_clrng_freq','field_research_site_snowclrfr');
    $this->addFieldMapping('field_site_inf_perm_powersup','field_research_site_power')
     ->description('Tweaked in prepareRow()');
    $this->addFieldMapping('field_site_inf_perm_power_prod','field_research_site_poweramt');
    $this->addFieldMapping('field_perm_power_loc','field_research_site_powerloc');
    $this->addFieldMapping('field_site_inf_data_transm_type','field_research_site_datatrtype');
    $this->addFieldMapping('field_site_inf_dat_trans_fro_typ','field_research_site_datatrfrtp');
    $this->addFieldMapping('field_site_inf_temp_control_cont','field_research_site_container')
     ->description('Tweaked in prepareRow()');
    $this->addFieldMapping('field_site_inf_meas_towr_loc','field_research_site_meastowloc');
    $this->addFieldMapping('field_site_inf_marine_platfm','field_research_site_marineplt')
     ->description('Tweaked in prepareRow()');

    $this->addFieldMapping('field_eunis_habitat','field_research_site_habitat');

    $this->addFieldMapping('field_elevation_lowest','field_research_site_elemin');
    $this->addFieldMapping('field_elevation_maximum_','field_research_site_elemax');
    $this->addFieldMapping('field_elevation_average','field_research_site_elevavg');

    $this->addFieldMapping('field_upload_shapefile','field_research_site_upshp')
     ->sourceMigration('DeimsFile');

    $this->addFieldMapping('field_research_topics','field_research_site_resrchtopic');

    $this->addFieldMapping('field_associated_dataset','field_research_site_dataset')
     ->sourceMigration('IlterContentDataSet');

    $this->addFieldMapping('field_site_inf_staff_room','field_research_site_staffrm')
     ->description('Tweaked in prepareRow()');

    $this->addFieldMapping('field_site_inf_lodging','field_research_site_lodging')
     ->description('Tweaked in prepareRow()');

    $this->addFieldMapping('field_site_inf_numbr_of_beds','field_research_site_lodgnum');
    $this->addFieldMapping('field_site_inf_notes','field_research_site_infranote');
    $this->addFieldMapping('field_site_dataccadmin','field_research_site_dataccadmin');
    $this->addFieldMapping('field_site_datapolpubl','field_research_site_datapolpub');
    $this->addFieldMapping('field_site_dataacced','field_research_site_dataacced');
    $this->addFieldMapping('field_site_dataccres','field_research_site_dataccres');
    $this->addFieldMapping('field_site_datacstadmin','field_research_site_datacstadmin');
    $this->addFieldMapping('field_site_datacstpub','field_research_site_datacostpub');
    $this->addFieldMapping('field_site_datacosted','field_research_site_datacosted');
    $this->addFieldMapping('field_site_datacostres','field_research_site_datacostres');
    $this->addFieldMapping('field_site_data_notes','field_research_site_datanotes');
    $this->addFieldMapping('field_site_datareq','field_research_site_datareq');
    $this->addFieldMapping('field_site_dataformat','field_research_site_dataformat');
    $this->addFieldMapping('field_site_dataservi','field_research_site_dataserv');
    $this->addFieldMapping('field_site_datastorloc','field_research_site_datastorloc');
    $this->addFieldMapping('field_site_datastornum','field_research_site_datastrnum');
    $this->addFieldMapping('field_site_ops_cost','field_research_site_budget');
    $this->addFieldMapping('field_site_ops_ispermanent','field_research_site_operation')
     ->description('Boolean tweaked');

    $this->addFieldMapping('field_site_ops_sampling_intr','field_research_site_samplingdays');
    $this->addFieldMapping('field_site_ops_maint_freq','field_research_site_maintenadays');
    $this->addFieldMapping('field_site_ops_notes','field_research_site_opernotes');

//  Do not create a stub, there'll be a ref in the DS as well.
//    $this->addFieldMapping('field_collected_datasets_ref','field_research_site_dataset')
//     ->sourceMigration('IlterContentDataSet');

    $this->addFieldMapping('field_site_eu_declaration_status','field_research_site_declarations');
    $this->addFieldMapping('field_site_eu__status_accred','field_research_site_ltereur_acrd');
    $this->addFieldMapping('field_site_eu_design_scale','field_research_site_scale');
    $this->addFieldMapping('field_site_eu_design_observ','field_research_site_desobs');
    $this->addFieldMapping('field_site_eu_experiment_scale','field_research_site_expscale');
    $this->addFieldMapping('field_site_eu_design_experiments','field_research_site_desexp');
    $this->addFieldMapping('field_site_eu_site_type','field_research_site_type');
    $this->addFieldMapping('field_site_eu_classification','field_research_site_siteclass');
    $this->addFieldMapping('field_site_eu_docume_status','field_research_site_eu_docst');
    $this->addFieldMapping('field_site_eu_notes','field_research_site_eu_notes');
    $this->addFieldMapping('field_site_eu_biogeo_region','field_research_site_biogeo');
    $this->addFieldMapping('field_site_eu_enviro_zone','field_research_site_euenvzone');
    $this->addFieldMapping('field_site_eu_economic_density','field_research_site_metzecodens');
    $this->addFieldMapping('field_site_eu_environ_zone_econ','field_research_site_metzenzeco');
    $this->addFieldMapping('field_site_eu_infobase_sitecode','field_research_site_infcode');
    $this->addFieldMapping('field_site_geobon_biome','field_research_site_biome');
    $this->addFieldMapping('field_site_expeer_netmem','field_research_site_expeersite')
      ->description('Tweaked in prepareRow()');
    $this->addFieldMapping('field_site_expeer_sitename','field_ressearch_site_expeer_name');
    $this->addFieldMapping('field_site_expeer_classif','field_research_site_expeer');
    $this->addFieldMapping('field_site_expeer_corine_class','field_research_site_corine');

  }
  public function prepareRow($row) {
    parent::prepareRow($row);

    //Convert Yes and No to integers 1 and 0
    switch ($row->field_research_site_expeersite) {
      case 'Yes':
        $row->field_research_site_expeersite = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_expeersite = 0;
        break;
    }

    switch ($row->field_research_site_accyr) {
      case 'Yes':
        $row->field_research_site_accyr = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_accyr = 0;
        break;
    }

    switch ($row->field_research_site_accparts) {
      case 'Yes':
        $row->field_research_site_accparts = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_accparts = 0;
        break;
    }

    switch ($row->field_research_site_lodging) {
      case 'Yes':
        $row->field_research_site_lodging = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_lodging = 0;
        break;
    }

    switch ($row->field_research_site_power) {
      case 'Yes':
        $row->field_research_site_power = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_power = 0;
        break;
    }

    switch ($row->field_research_site_mgtres) {
      case 'Yes':
        $row->field_research_site_mgtres = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_mgtres = 0;
        break;
    }

    switch ($row->field_research_site_snowclr) {
      case 'Yes':
        $row->field_research_site_snowclr = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_snowclr = 0;
        break;
    }

    switch ($row->field_research_site_container) {
      case 'Yes':
        $row->field_research_site_container = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_container = 0;
        break;
    }

    switch ($row->field_research_site_marineplt) {
      case 'Yes':
        $row->field_research_site_marineplt = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_marineplt = 0;
        break;
    }

    switch ($row->field_research_site_staffrm) {
      case 'Yes':
        $row->field_research_site_staffrm = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_staffrm = 0;
        break;
    }

    switch ($row->field_research_site_opearation) {
      case 'Yes':
        $row->field_research_site_operation = 1;
        break;
      case 'No':
      default:
        $row->field_research_site_operation = 0;
        break;
    }

  }
  public function prepare($node, $row) {

    $node->field_coordinates[LANGUAGE_NONE] = $this->getLatLong($node, $row);
    
    $node->field_geo_bounding_box[LANGUAGE_NONE] = $this->getCoordinates($node, $row);

    $node->field_site_details[LANGUAGE_NONE] = $this->getSiteDetails($node, $row);

    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }

  public function getLatLong($node, $row) {
    $field_values = array();

   if (!empty($row->field_research_site_lat[0]) and !empty($row->field_research_site_long[0]) ){
 
     $lat = $row->field_research_site_lat[0];
     $long = $row->field_research_site_long[0];
     
     $wkt = "POINT($long $lat)";

    // Force the geo module to accept our field value as they come
      $field_values[] = array(
       'geo_type' => 'point',
       'wkt' => $wkt,
       'master_column' => 'wkt',
      );
   }

    return $field_values;
  }

   public function getCoordinates($node, $row) {
    $field_values = array();

   if (!empty($row->field_research_site_boundary[0])){
 
     $wkt= $row->field_research_site_boundary; 
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
      'landform' => 'Landform',
      'geology' => 'Geology',
      'soils' => 'Soils',
      'hydrology' => 'Hydrology',
      'vegetation' => 'Vegetation',
      'climate' => 'Climate',
      'history' => 'History',
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
