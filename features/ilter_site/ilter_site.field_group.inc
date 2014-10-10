<?php
/**
 * @file
 * ilter_site.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilter_site_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_mgmnt|node|site|form';
  $field_group->group_name = 'group_data_mgmnt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_detailinfo';
  $field_group->data = array(
    'label' => 'Data Management',
    'weight' => '13',
    'children' => array(
      0 => 'field_collected_datasets_ref',
      1 => 'field_site_dataccadmin',
      2 => 'field_site_datapolpubl',
      3 => 'field_site_dataacced',
      4 => 'field_site_dataccres',
      5 => 'field_site_datacstadmin',
      6 => 'field_site_datacstpub',
      7 => 'field_site_datacosted',
      8 => 'field_site_datacostres',
      9 => 'field_site_data_notes',
      10 => 'field_site_datareq',
      11 => 'field_site_dataformat',
      12 => 'field_site_dataservi',
      13 => 'field_site_datastorloc',
      14 => 'field_site_datastornum',
      15 => 'field_associated_dataset',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_data_mgmnt|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|site|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '8',
    'children' => array(
      0 => 'group_site_detailinfo',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_elevation_range|node|site|form';
  $field_group->group_name = 'group_elevation_range';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Elevation Range',
    'weight' => '142',
    'children' => array(
      0 => 'field_elevation_average',
      1 => 'field_elevation_maximum_',
      2 => 'field_elevation_lowest',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-elevation-range field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_elevation_range|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_europe_specific|node|site|form';
  $field_group->group_name = 'group_europe_specific';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'LTER-Europe Specific',
    'weight' => '4',
    'children' => array(
      0 => 'group_site_design_status',
      1 => 'group_site_eu_class',
      2 => 'group_site_geobon',
      3 => 'group_site_expeer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-europe-specific field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_europe_specific|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geobon_tab_grp|node|site|form';
  $field_group->group_name = 'group_geobon_tab_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_geobon';
  $field_group->data = array(
    'label' => 'Geobon',
    'weight' => '148',
    'children' => array(
      0 => 'field_site_geobon_biome',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-geobon-tab-grp field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_geobon_tab_grp|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geographic|node|site|form';
  $field_group->group_name = 'group_geographic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_geographic';
  $field_group->data = array(
    'label' => 'Geo Reference',
    'weight' => '143',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_geographic|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_networks|node|site|form';
  $field_group->group_name = 'group_networks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Networks and Contacts',
    'weight' => '145',
    'children' => array(
      0 => 'field_date',
      1 => 'field_ilter_network_country',
      2 => 'field_ilter_network_url',
      3 => 'field_networks_term_ref',
      4 => 'field_person_contact',
      5 => 'field_person_metadata_provider',
      6 => 'field_short_name',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_networks|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_protection_status|node|site|form';
  $field_group->group_name = 'group_protection_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_protectmgt_grp';
  $field_group->data = array(
    'label' => 'Protection Status',
    'weight' => '46',
    'children' => array(
      0 => 'field_protection_prog_notes',
      1 => 'field_site_protection_prog_ref',
      2 => 'field_site_protprgcover',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_protection_status|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_purpose|node|site|form';
  $field_group->group_name = 'group_purpose';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Purpose, History, Research Topics	',
    'weight' => '146',
    'children' => array(
      0 => 'field_images',
      1 => 'field_purpose',
      2 => 'field_site_params',
      3 => 'field_site_status',
      4 => 'field_year',
      5 => 'field_year_closed',
      6 => 'field_research_topics',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_purpose|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_res_site_redmex|node|site|form';
  $field_group->group_name = 'group_res_site_redmex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'OLD Site Info: Don\'t Delete',
    'weight' => '144',
    'children' => array(
      0 => 'field_eunis_habitat',
      1 => 'field_site_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-res-site-redmex field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_res_site_redmex|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource_mgmnt|node|site|form';
  $field_group->group_name = 'group_resource_mgmnt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_protectmgt_grp';
  $field_group->data = array(
    'label' => 'Resource Management',
    'weight' => '47',
    'children' => array(
      0 => 'field_site_mgmnt_res_percent',
      1 => 'field_site_mgtres',
      2 => 'field_site_mgtres_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resource_mgmnt|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_coreinfo|node|site|form';
  $field_group->group_name = 'group_site_coreinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core ILTER Information',
    'weight' => '7',
    'children' => array(
      0 => 'group_networks',
      1 => 'group_purpose',
      2 => 'group_site_ecosystem',
      3 => 'group_site_precip',
      4 => 'group_site_temp',
      5 => 'group_site_geographic',
      6 => 'group_elevation_range',
      7 => 'group_res_site_redmex',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_site_coreinfo|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_design_status|node|site|form';
  $field_group->group_name = 'group_site_design_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site Design, Status, Classifictions, ExpeER',
    'weight' => '9',
    'children' => array(
      0 => 'group_site_design',
      1 => 'group_site_eu_class',
      2 => 'group_site_expeer',
      3 => 'group_site_status',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Site Design, Status, Classifictions, ExpeER',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_site_design_status|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_design|node|site|form';
  $field_group->group_name = 'group_site_design';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_design_status';
  $field_group->data = array(
    'label' => 'Site Design',
    'weight' => '95',
    'children' => array(
      0 => 'field_site_eu__status_accred',
      1 => 'field_site_eu_design_experiments',
      2 => 'field_site_eu_design_observ',
      3 => 'field_site_eu_design_scale',
      4 => 'field_site_eu_experiment_scale',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_design|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_detailinfo|node|site|form';
  $field_group->group_name = 'group_site_detailinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Detailed Information',
    'weight' => '42',
    'children' => array(
      0 => 'group_data_mgmnt',
      1 => 'group_site_infrstrctr_group',
      2 => 'group_site_ops',
      3 => 'group_site_protectmgt_grp',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-site-detailinfo field-group-htabs',
      ),
    ),
  );
  $export['group_site_detailinfo|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_ecosystem|node|site|form';
  $field_group->group_name = 'group_site_ecosystem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Ecosystem and Habitat',
    'weight' => '143',
    'children' => array(
      0 => 'field_site_biomeplus',
      1 => 'field_site_ecostype1',
      2 => 'field_site_ecostype3',
      3 => 'field_site_ecosytype2',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_ecosystem|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_eu_class|node|site|form';
  $field_group->group_name = 'group_site_eu_class';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_design_status';
  $field_group->data = array(
    'label' => 'Europe Specific Classifications',
    'weight' => '96',
    'children' => array(
      0 => 'field_site_eu_biogeo_region',
      1 => 'field_site_eu_enviro_zone',
      2 => 'field_site_eu_infobase_sitecode',
      3 => 'field_site_expeer_classif',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_eu_class|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_expeer|node|site|form';
  $field_group->group_name = 'group_site_expeer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_design_status';
  $field_group->data = array(
    'label' => 'ExpeER Specific',
    'weight' => '97',
    'children' => array(
      0 => 'field_site_expeer_corine_class',
      1 => 'field_site_expeer_netmem',
      2 => 'field_site_expeer_sitename',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_expeer|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_geo_coordinates|node|site|form';
  $field_group->group_name = 'group_site_geo_coordinates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_geographic';
  $field_group->data = array(
    'label' => 'Site Geographic Coordinates',
    'weight' => '144',
    'children' => array(
      0 => 'field_site_size',
      1 => 'field_geo_bounding_box',
      2 => 'field_upload_shapefile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-geo-coordinates field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_site_geo_coordinates|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_geobon|node|site|form';
  $field_group->group_name = 'group_site_geobon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GEO-BON',
    'weight' => '11',
    'children' => array(
      0 => 'group_geobon_tab_grp',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_site_geobon|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_geographic|node|site|form';
  $field_group->group_name = 'group_site_geographic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Geographic',
    'weight' => '139',
    'children' => array(
      0 => 'field_coordinates',
      1 => 'group_geographic',
      2 => 'group_site_geo_coordinates',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-geographic field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_geographic|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_infrstrctr_group|node|site|form';
  $field_group->group_name = 'group_site_infrstrctr_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_detailinfo';
  $field_group->data = array(
    'label' => 'Infrastructure',
    'weight' => '12',
    'children' => array(
      0 => 'field_perm_power_loc',
      1 => 'field_site_access_allyear',
      2 => 'field_site_access_type',
      3 => 'field_site_allparts_access',
      4 => 'field_site_inf_dat_trans_fro_typ',
      5 => 'field_site_inf_data_transm_type',
      6 => 'field_site_inf_lodging',
      7 => 'field_site_inf_marine_platfm',
      8 => 'field_site_inf_meas_towr_loc',
      9 => 'field_site_inf_notes',
      10 => 'field_site_inf_numbr_of_beds',
      11 => 'field_site_inf_perm_power_prod',
      12 => 'field_site_inf_perm_powersup',
      13 => 'field_site_inf_staff_room',
      14 => 'field_site_inf_temp_control_cont',
      15 => 'field_site_inf_val',
      16 => 'field_site_infr_snow_clearng',
      17 => 'field_site_snow_clrng_freq',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_infrstrctr_group|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_ops|node|site|form';
  $field_group->group_name = 'group_site_ops';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_detailinfo';
  $field_group->data = array(
    'label' => 'Operations',
    'weight' => '11',
    'children' => array(
      0 => 'field_site_ops_cost',
      1 => 'field_site_ops_ispermanent',
      2 => 'field_site_ops_maint_freq',
      3 => 'field_site_ops_notes',
      4 => 'field_site_ops_sampling_intr',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_ops|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_otherdetail|node|site|form';
  $field_group->group_name = 'group_site_otherdetail';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Detailed Categories (Europe required, others optional)',
    'weight' => '7',
    'children' => array(
      0 => 'group_protection_status',
      1 => 'group_resource_mgmnt',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_site_otherdetail|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_precip|node|site|form';
  $field_group->group_name = 'group_site_precip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Precipitation',
    'weight' => '141',
    'children' => array(
      0 => 'field_precipitation_annual_ilter',
      1 => 'field_site_precip_max',
      2 => 'field_site_precip_min',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_precip|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_protectmgt_grp|node|site|form';
  $field_group->group_name = 'group_site_protectmgt_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_detailinfo';
  $field_group->data = array(
    'label' => 'Protection and Management',
    'weight' => '14',
    'children' => array(
      0 => 'group_protection_status',
      1 => 'group_resource_mgmnt',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-protectmgt-grp field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_protectmgt_grp|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_status|node|site|form';
  $field_group->group_name = 'group_site_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_design_status';
  $field_group->data = array(
    'label' => 'Site Status',
    'weight' => '94',
    'children' => array(
      0 => 'field_site_eu_classification',
      1 => 'field_site_eu_declaration_status',
      2 => 'field_site_eu_docume_status',
      3 => 'field_site_eu_notes',
      4 => 'field_site_eu_site_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_status|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_temp|node|site|form';
  $field_group->group_name = 'group_site_temp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Temperature',
    'weight' => '140',
    'children' => array(
      0 => 'field_temperature_average_annual',
      1 => 'group_temperature_rng',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_site_temp|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_temperature_rng|node|site|form';
  $field_group->group_name = 'group_temperature_rng';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_temp';
  $field_group->data = array(
    'label' => 'Temperature Range',
    'weight' => '166',
    'children' => array(
      0 => 'field_site_temp_max',
      1 => 'field_site_temp_min',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-temperature-rng field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_temperature_rng|node|site|form'] = $field_group;

  return $export;
}
