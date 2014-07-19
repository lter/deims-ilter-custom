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
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Data Management',
    'weight' => '11',
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
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-data-mgmnt field-group-fieldset',
        'required_fields' => 1,
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
    'weight' => '4',
    'children' => array(
      0 => 'group_data_mgmnt',
      1 => 'group_purpose',
      2 => 'group_site_coreinfo',
      3 => 'group_site_infrstrctr_group',
      4 => 'group_site_ops',
      5 => 'group_site_otherdetail',
      6 => 'group_site_geo_coordinates',
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
  $field_group->identifier = 'group_europe_specific|node|site|form';
  $field_group->group_name = 'group_europe_specific';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'LTER-Europe Specific',
    'weight' => '5',
    'children' => array(
      0 => 'group_site_design_status',
      1 => 'group_site_eu_class',
      2 => 'group_site_expeer',
      3 => 'group_site_geobon',
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
  $field_group->identifier = 'group_geographic|node|site|form';
  $field_group->group_name = 'group_geographic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Geo Reference',
    'weight' => '41',
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
    'weight' => '45',
    'children' => array(
      0 => 'field_date',
      1 => 'field_ilter_network_country',
      2 => 'field_ilter_network_url',
      3 => 'field_networks_term_ref',
      4 => 'field_person_contact',
      5 => 'field_person_metadata_provider',
      6 => 'field_short_name',
      7 => 'field_site_parentsite_ref',
      8 => 'field_site_subsite_code_ref',
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
  $export['group_networks|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_protection_status|node|site|form';
  $field_group->group_name = 'group_protection_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_otherdetail';
  $field_group->data = array(
    'label' => 'Protection Status',
    'weight' => '28',
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
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Purpose, History, Research Topics	',
    'weight' => '6',
    'children' => array(
      0 => 'field_images',
      1 => 'field_purpose',
      2 => 'field_site_params',
      3 => 'field_site_status',
      4 => 'field_year',
      5 => 'field_year_closed',
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
  $export['group_purpose|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource_mgmnt|node|site|form';
  $field_group->group_name = 'group_resource_mgmnt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_otherdetail';
  $field_group->data = array(
    'label' => 'Resource Management',
    'weight' => '29',
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
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Core ILTER Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_ilter_national_network_nam',
      1 => 'field_site_description',
      2 => 'field_site_size',
      3 => 'field_coordinates',
      4 => 'group_geographic',
      5 => 'group_networks',
      6 => 'group_site_ecosystem',
      7 => 'group_site_precip',
      8 => 'group_site_temp',
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
  $export['group_site_coreinfo|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_design_status|node|site|form';
  $field_group->group_name = 'group_site_design_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_europe_specific';
  $field_group->data = array(
    'label' => 'Site Design and Status',
    'weight' => '95',
    'children' => array(
      0 => 'field_site_eu__status_accred',
      1 => 'field_site_eu_classification',
      2 => 'field_site_eu_declaration_status',
      3 => 'field_site_eu_docume_status',
      4 => 'field_site_eu_notes',
      5 => 'field_site_eu_site_type',
      6 => 'group_site_design',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-design-status field-group-fieldset',
        'required_fields' => 1,
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
    'weight' => '94',
    'children' => array(
      0 => 'field_site_eu_design_experiments',
      1 => 'field_site_eu_design_observ',
      2 => 'field_site_eu_design_scale',
      3 => 'field_site_eu_experiment_scale',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-design field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_site_design|node|site|form'] = $field_group;

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
    'weight' => '44',
    'children' => array(
      0 => 'field_site_biomeplus',
      1 => 'field_site_ecostype1',
      2 => 'field_site_ecostype3',
      3 => 'field_site_ecosytype2',
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
  $export['group_site_ecosystem|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_eu_class|node|site|form';
  $field_group->group_name = 'group_site_eu_class';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_europe_specific';
  $field_group->data = array(
    'label' => 'Europe Specific Classifications',
    'weight' => '96',
    'children' => array(
      0 => 'field_site_eu_biogeo_region',
      1 => 'field_site_eu_economic_density',
      2 => 'field_site_eu_enviro_zone',
      3 => 'field_site_eu_environ_zone_econ',
      4 => 'field_site_eu_infobase_sitecode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-eu-class field-group-fieldset',
        'required_fields' => 1,
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
  $field_group->parent_name = 'group_europe_specific';
  $field_group->data = array(
    'label' => 'ExpeER Specific',
    'weight' => '98',
    'children' => array(
      0 => 'field_site_expeer_classif',
      1 => 'field_site_expeer_corine_class',
      2 => 'field_site_expeer_netmem',
      3 => 'field_site_expeer_sitename',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-expeer field-group-fieldset',
        'required_fields' => 1,
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
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Site Geographic Coordinates',
    'weight' => '7',
    'children' => array(
      0 => 'field_geo_bounding_box',
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
  $field_group->parent_name = 'group_europe_specific';
  $field_group->data = array(
    'label' => 'GEO-BON',
    'weight' => '97',
    'children' => array(
      0 => 'field_site_geobon_biome',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-geobon field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_site_geobon|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_infrstrctr_group|node|site|form';
  $field_group->group_name = 'group_site_infrstrctr_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Infrastructure',
    'weight' => '9',
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
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-infrstrctr-group field-group-fieldset',
        'required_fields' => 1,
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
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Operations',
    'weight' => '10',
    'children' => array(
      0 => 'field_site_ops_cost',
      1 => 'field_site_ops_ispermanent',
      2 => 'field_site_ops_maint_freq',
      3 => 'field_site_ops_notes',
      4 => 'field_site_ops_sampling_intr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site-ops field-group-fieldset',
        'required_fields' => 1,
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
    'weight' => '8',
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
    'weight' => '43',
    'children' => array(
      0 => 'field_precipitation_annual_ilter',
      1 => 'field_site_precip_max',
      2 => 'field_site_precip_min',
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
  $export['group_site_precip|node|site|form'] = $field_group;

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
    'weight' => '42',
    'children' => array(
      0 => 'field_site_temp_max',
      1 => 'field_site_temp_min',
      2 => 'field_temperature_average_annual',
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
  $export['group_site_temp|node|site|form'] = $field_group;

  return $export;
}
