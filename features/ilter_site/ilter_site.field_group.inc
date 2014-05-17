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
    'weight' => '10',
    'children' => array(
      0 => 'field_collected_datasets_ref',
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
    'weight' => '3',
    'children' => array(
      0 => 'group_site_coreinfo',
      1 => 'group_purpose',
      2 => 'group_site_otherdetail',
      3 => 'group_site_infrstrctr_group',
      4 => 'group_site_ops',
      5 => 'group_data_mgmnt',
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
  $field_group->identifier = 'group_geographic|node|site|form';
  $field_group->group_name = 'group_geographic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Geo Reference',
    'weight' => '40',
    'children' => array(
      0 => 'field_site_resch_site_ref',
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
    'weight' => '44',
    'children' => array(
      0 => 'field_person_contact',
      1 => 'field_ilter_network_country',
      2 => 'field_ilter_network_url',
      3 => 'field_short_name',
      4 => 'field_site_parentsite_ref',
      5 => 'field_site_subsite_code_ref',
      6 => 'field_networks_term_ref',
      7 => 'field_date',
      8 => 'field_person_metadata_provider',
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
      0 => 'field_site_protprgcover',
      1 => 'field_site_protection_prog_ref',
      2 => 'field_protection_prog_notes',
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
      0 => 'field_site_params',
      1 => 'field_year',
      2 => 'field_site_status',
      3 => 'field_year_closed',
      4 => 'field_purpose',
      5 => 'field_images',
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
      0 => 'field_site_mgtres',
      1 => 'field_site_mgmnt_res_percent',
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
      3 => 'group_site_temp',
      4 => 'group_site_precip',
      5 => 'group_site_ecosystem',
      6 => 'group_geographic',
      7 => 'group_networks',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_site_eu_declaration_status',
      1 => 'field_site_eu__status_accred',
      2 => 'field_site_eu_site_type',
      3 => 'field_site_eu_classification',
      4 => 'field_site_eu_docume_status',
      5 => 'field_site_eu_notes',
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
    'weight' => '87',
    'children' => array(
      0 => 'field_site_eu_design_scale',
      1 => 'field_site_eu_design_observ',
      2 => 'field_site_eu_experiment_scale',
      3 => 'field_site_eu_design_experiments',
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
    'weight' => '43',
    'children' => array(
      0 => 'field_site_biomeplus',
      1 => 'field_site_ecostype1',
      2 => 'field_site_ecosytype2',
      3 => 'field_site_ecostype3',
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
    'weight' => '9',
    'children' => array(
      0 => 'field_site_eu_biogeo_region',
      1 => 'field_site_eu_enviro_zone',
      2 => 'field_site_eu_economic_density',
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
    'weight' => '11',
    'children' => array(
      0 => 'field_site_expeer_netmem',
      1 => 'field_site_expeer_sitename',
      2 => 'field_site_expeer_classif',
      3 => 'field_site_expeer_corine_class',
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
  $field_group->identifier = 'group_site_geobon|node|site|form';
  $field_group->group_name = 'group_site_geobon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_europe_specific';
  $field_group->data = array(
    'label' => 'GEO-BON',
    'weight' => '10',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_site_inf_val',
      1 => 'field_site_access_allyear',
      2 => 'field_site_allparts_access',
      3 => 'field_site_access_type',
      4 => 'field_site_infr_snow_clearng',
      5 => 'field_site_snow_clrng_freq',
      6 => 'field_site_inf_perm_powersup',
      7 => 'field_site_inf_perm_power_prod',
      8 => 'field_perm_power_loc',
      9 => 'field_site_inf_data_transm_type',
      10 => 'field_site_inf_dat_trans_fro_typ',
      11 => 'field_site_inf_temp_control_cont',
      12 => 'field_site_inf_meas_towr_loc',
      13 => 'field_site_inf_marine_platfm',
      14 => 'field_site_inf_staff_room',
      15 => 'field_site_inf_lodging',
      16 => 'field_site_inf_numbr_of_beds',
      17 => 'field_site_inf_notes',
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
    'weight' => '9',
    'children' => array(
      0 => 'field_site_ops_cost',
      1 => 'field_site_ops_ispermanent',
      2 => 'field_site_ops_sampling_intr',
      3 => 'field_site_ops_maint_freq',
      4 => 'field_site_ops_notes',
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
    'weight' => '42',
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
    'weight' => '41',
    'children' => array(
      0 => 'field_temperature_average_annual',
      1 => 'field_site_temp_max',
      2 => 'field_site_temp_min',
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
