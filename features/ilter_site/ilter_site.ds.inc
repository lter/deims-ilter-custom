<?php
/**
 * @file
 * ilter_site.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ilter_site_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|site|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'site';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'display_suite_node_field' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => 'Coordinates',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:5:"title";s:9:"formatter";s:15:"geofield_latlon";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:7:{s:11:"leaflet_map";s:10:"OSM Mapnik";s:6:"height";s:3:"400";s:5:"popup";a:2:{s:4:"show";i:0;s:4:"text";s:0:"";}s:4:"zoom";a:4:{s:11:"initialZoom";s:2:"-1";s:7:"minZoom";s:1:"1";s:7:"maxZoom";s:2:"-1";s:15:"scrollWheelZoom";i:1;}s:4:"data";s:4:"full";s:6:"format";s:15:"decimal_degrees";s:6:"labels";i:1;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:22:"node:field_coordinates";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['node|site|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ilter_site_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|site|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'site';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_site_sitelong',
        1 => 'field__site_sitecode',
        2 => 'field_site_description',
        3 => 'field_images',
        4 => 'field_site_parentsite_ref',
        5 => 'field_site_subsite_code_ref',
        6 => 'field_ilter_network_country',
        7 => 'field_ilter_network_url',
        8 => 'field_person_contact',
        9 => 'field_person_metadata_provider',
        10 => 'field_date',
        11 => 'field_site_status',
        12 => 'field_year',
        13 => 'field_year_closed',
        14 => 'field_site_size',
        15 => 'field_purpose',
        16 => 'field_site_details',
        17 => 'field_research_topics',
        18 => 'field_site_params',
        19 => 'field_geo_bounding_box',
        20 => 'field_coordinates',
        21 => 'display_suite_node_field',
        22 => 'field_upload_shapefile',
        23 => 'field_elevation_lowest',
        24 => 'field_elevation_maximum_',
        25 => 'field_elevation_average',
        26 => 'field_site_temp_min',
        27 => 'field_site_temp_max',
        28 => 'field_temperature_average_annual',
        29 => 'field_site_precip_min',
        30 => 'field_precipitation_annual_ilter',
        31 => 'field_site_precip_max',
        32 => 'field_site_biomeplus',
        33 => 'field_site_geobon_biome',
        34 => 'field_site_ecostype1',
        35 => 'field_site_ecosytype2',
        36 => 'field_site_ecostype3',
        37 => 'field_eunis_habitat',
        38 => 'field_site_eu_biogeo_region',
        39 => 'field_site_eu_enviro_zone',
        40 => 'field_ilter_national_network_nam',
        41 => 'field_site_eu_declaration_status',
        42 => 'field_site_eu__status_accred',
        43 => 'field_site_eu_site_type',
        44 => 'field_site_eu_classification',
        45 => 'field_site_expeer_classif',
        46 => 'field_networks_term_ref',
        47 => 'field_short_name',
        48 => 'field_site_protection_prog_ref',
        49 => 'field_site_protprgcover',
        50 => 'field_protection_prog_notes',
        51 => 'field_site_mgtres',
        52 => 'field_site_mgmnt_res_percent',
        53 => 'field_site_mgtres_notes',
        54 => 'field_site_eu_design_scale',
        55 => 'field_site_eu_design_observ',
        56 => 'field_site_eu_experiment_scale',
        57 => 'field_site_eu_design_experiments',
        58 => 'field_site_inf_val',
        59 => 'field_site_inf_notes',
        60 => 'field_site_access_allyear',
        61 => 'field_site_allparts_access',
        62 => 'field_site_access_type',
        63 => 'field_site_infr_snow_clearng',
        64 => 'field_site_inf_temp_control_cont',
        65 => 'field_site_inf_meas_towr_loc',
        66 => 'field_site_inf_marine_platfm',
        67 => 'field_site_inf_staff_room',
        68 => 'field_site_inf_lodging',
        69 => 'field_site_inf_numbr_of_beds',
        70 => 'field_site_inf_perm_powersup',
        71 => 'field_site_inf_perm_power_prod',
        72 => 'field_perm_power_loc',
        73 => 'field_site_inf_data_transm_type',
        74 => 'field_site_inf_dat_trans_fro_typ',
        75 => 'field_site_ops_cost',
        76 => 'field_site_ops_notes',
        77 => 'field_site_ops_sampling_intr',
        78 => 'field_site_ops_ispermanent',
        79 => 'field_site_ops_maint_freq',
        80 => 'field_site_datastorloc',
        81 => 'field_site_datastornum',
        82 => 'field_site_dataformat',
        83 => 'field_site_dataservi',
        84 => 'field_site_dataccadmin',
        85 => 'field_site_datapolpubl',
        86 => 'field_site_dataacced',
        87 => 'field_site_dataccres',
        88 => 'field_site_datacstadmin',
        89 => 'field_site_datacstpub',
        90 => 'field_site_datacosted',
        91 => 'field_site_datacostres',
        92 => 'field_site_datareq',
        93 => 'field_site_data_notes',
        94 => 'field_collected_datasets_ref',
        95 => 'field_site_eu_docume_status',
        96 => 'field_site_eu_notes',
        97 => 'field_site_eu_infobase_sitecode',
        98 => 'field_site_expeer_netmem',
        99 => 'field_site_expeer_sitename',
        100 => 'field_site_expeer_corine_class',
        101 => 'field_declaration_status_accredi',
      ),
    ),
    'fields' => array(
      'field_site_sitelong' => 'ds_content',
      'field__site_sitecode' => 'ds_content',
      'field_site_description' => 'ds_content',
      'field_images' => 'ds_content',
      'field_site_parentsite_ref' => 'ds_content',
      'field_site_subsite_code_ref' => 'ds_content',
      'field_ilter_network_country' => 'ds_content',
      'field_ilter_network_url' => 'ds_content',
      'field_person_contact' => 'ds_content',
      'field_person_metadata_provider' => 'ds_content',
      'field_date' => 'ds_content',
      'field_site_status' => 'ds_content',
      'field_year' => 'ds_content',
      'field_year_closed' => 'ds_content',
      'field_site_size' => 'ds_content',
      'field_purpose' => 'ds_content',
      'field_site_details' => 'ds_content',
      'field_research_topics' => 'ds_content',
      'field_site_params' => 'ds_content',
      'field_geo_bounding_box' => 'ds_content',
      'field_coordinates' => 'ds_content',
      'display_suite_node_field' => 'ds_content',
      'field_upload_shapefile' => 'ds_content',
      'field_elevation_lowest' => 'ds_content',
      'field_elevation_maximum_' => 'ds_content',
      'field_elevation_average' => 'ds_content',
      'field_site_temp_min' => 'ds_content',
      'field_site_temp_max' => 'ds_content',
      'field_temperature_average_annual' => 'ds_content',
      'field_site_precip_min' => 'ds_content',
      'field_precipitation_annual_ilter' => 'ds_content',
      'field_site_precip_max' => 'ds_content',
      'field_site_biomeplus' => 'ds_content',
      'field_site_geobon_biome' => 'ds_content',
      'field_site_ecostype1' => 'ds_content',
      'field_site_ecosytype2' => 'ds_content',
      'field_site_ecostype3' => 'ds_content',
      'field_eunis_habitat' => 'ds_content',
      'field_site_eu_biogeo_region' => 'ds_content',
      'field_site_eu_enviro_zone' => 'ds_content',
      'field_ilter_national_network_nam' => 'ds_content',
      'field_site_eu_declaration_status' => 'ds_content',
      'field_site_eu__status_accred' => 'ds_content',
      'field_site_eu_site_type' => 'ds_content',
      'field_site_eu_classification' => 'ds_content',
      'field_site_expeer_classif' => 'ds_content',
      'field_networks_term_ref' => 'ds_content',
      'field_short_name' => 'ds_content',
      'field_site_protection_prog_ref' => 'ds_content',
      'field_site_protprgcover' => 'ds_content',
      'field_protection_prog_notes' => 'ds_content',
      'field_site_mgtres' => 'ds_content',
      'field_site_mgmnt_res_percent' => 'ds_content',
      'field_site_mgtres_notes' => 'ds_content',
      'field_site_eu_design_scale' => 'ds_content',
      'field_site_eu_design_observ' => 'ds_content',
      'field_site_eu_experiment_scale' => 'ds_content',
      'field_site_eu_design_experiments' => 'ds_content',
      'field_site_inf_val' => 'ds_content',
      'field_site_inf_notes' => 'ds_content',
      'field_site_access_allyear' => 'ds_content',
      'field_site_allparts_access' => 'ds_content',
      'field_site_access_type' => 'ds_content',
      'field_site_infr_snow_clearng' => 'ds_content',
      'field_site_inf_temp_control_cont' => 'ds_content',
      'field_site_inf_meas_towr_loc' => 'ds_content',
      'field_site_inf_marine_platfm' => 'ds_content',
      'field_site_inf_staff_room' => 'ds_content',
      'field_site_inf_lodging' => 'ds_content',
      'field_site_inf_numbr_of_beds' => 'ds_content',
      'field_site_inf_perm_powersup' => 'ds_content',
      'field_site_inf_perm_power_prod' => 'ds_content',
      'field_perm_power_loc' => 'ds_content',
      'field_site_inf_data_transm_type' => 'ds_content',
      'field_site_inf_dat_trans_fro_typ' => 'ds_content',
      'field_site_ops_cost' => 'ds_content',
      'field_site_ops_notes' => 'ds_content',
      'field_site_ops_sampling_intr' => 'ds_content',
      'field_site_ops_ispermanent' => 'ds_content',
      'field_site_ops_maint_freq' => 'ds_content',
      'field_site_datastorloc' => 'ds_content',
      'field_site_datastornum' => 'ds_content',
      'field_site_dataformat' => 'ds_content',
      'field_site_dataservi' => 'ds_content',
      'field_site_dataccadmin' => 'ds_content',
      'field_site_datapolpubl' => 'ds_content',
      'field_site_dataacced' => 'ds_content',
      'field_site_dataccres' => 'ds_content',
      'field_site_datacstadmin' => 'ds_content',
      'field_site_datacstpub' => 'ds_content',
      'field_site_datacosted' => 'ds_content',
      'field_site_datacostres' => 'ds_content',
      'field_site_datareq' => 'ds_content',
      'field_site_data_notes' => 'ds_content',
      'field_collected_datasets_ref' => 'ds_content',
      'field_site_eu_docume_status' => 'ds_content',
      'field_site_eu_notes' => 'ds_content',
      'field_site_eu_infobase_sitecode' => 'ds_content',
      'field_site_expeer_netmem' => 'ds_content',
      'field_site_expeer_sitename' => 'ds_content',
      'field_site_expeer_corine_class' => 'ds_content',
      'field_declaration_status_accredi' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|site|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|site|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'site';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_site_eu_site_type',
        1 => 'field_site_sitelong',
        2 => 'field_coordinates',
        3 => 'field_site_description',
        4 => 'field_site_params',
        5 => 'field_site_status',
        6 => 'field_ilter_network_country',
      ),
    ),
    'fields' => array(
      'field_site_eu_site_type' => 'ds_content',
      'field_site_sitelong' => 'ds_content',
      'field_coordinates' => 'ds_content',
      'field_site_description' => 'ds_content',
      'field_site_params' => 'ds_content',
      'field_site_status' => 'ds_content',
      'field_ilter_network_country' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|site|teaser'] = $ds_layout;

  return $export;
}
