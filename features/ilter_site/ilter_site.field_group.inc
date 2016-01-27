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
  $field_group->identifier = 'group_abiotic|node|site|form';
  $field_group->group_name = 'group_abiotic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_ecosystem';
  $field_group->data = array(
    'label' => 'Abiotic Characteristics',
    'weight' => '227',
    'children' => array(
      0 => 'field_geology',
      1 => 'field_hydrology',
      2 => 'field_soils',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-abiotic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_abiotic|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_mgmnt|node|site|form';
  $field_group->group_name = 'group_data_mgmnt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Data Management',
    'weight' => '15',
    'children' => array(
      0 => 'field_collected_datasets_ref',
      1 => 'field_site_data_notes',
      2 => 'field_site_dataacced',
      3 => 'field_site_dataccadmin',
      4 => 'field_site_dataccres',
      5 => 'field_site_datacosted',
      6 => 'field_site_datacostres',
      7 => 'field_site_datacstadmin',
      8 => 'field_site_datacstpub',
      9 => 'field_site_dataformat',
      10 => 'field_site_datapolpubl',
      11 => 'field_site_datareq',
      12 => 'field_site_dataservi',
      13 => 'field_site_datastorloc',
      14 => 'field_site_datastornum',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
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
    'weight' => '2',
    'children' => array(),
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
  $field_group->identifier = 'group_ecosystem_characteristics|node|site|form';
  $field_group->group_name = 'group_ecosystem_characteristics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_geographic';
  $field_group->data = array(
    'label' => 'Ecosystem and Environmental Characteristics',
    'weight' => '175',
    'children' => array(
      0 => 'group_site_temp',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ecosystem-characteristics field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ecosystem_characteristics|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecosystemref|node|site|form';
  $field_group->group_name = 'group_ecosystemref';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_ecosystem';
  $field_group->data = array(
    'label' => 'Ecosystem Reference ',
    'weight' => '229',
    'children' => array(
      0 => 'field_site_biomeplus',
      1 => 'field_site_ecostype1',
      2 => 'field_site_ecostype3',
      3 => 'field_site_ecosytype2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ecosystemref field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ecosystemref|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_elevation_range|node|site|form';
  $field_group->group_name = 'group_elevation_range';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_geographic';
  $field_group->data = array(
    'label' => 'Elevation Range',
    'weight' => '173',
    'children' => array(
      0 => 'field_elevation_average',
      1 => 'field_elevation_lowest',
      2 => 'field_elevation_maximum_',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Geobon',
    'weight' => '18',
    'children' => array(
      0 => 'field_site_geobon_biome',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
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
  $field_group->identifier = 'group_metadata_provider|node|site|form';
  $field_group->group_name = 'group_metadata_provider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Metadata Provider',
    'weight' => '1',
    'children' => array(
      0 => 'field_metadata_provider',
      1 => 'field_metadata_update_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata-provider field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata_provider|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_description|node|site|form';
  $field_group->group_name = 'group_name_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Name And General Description',
    'weight' => '0',
    'children' => array(
      0 => 'field__site_sitecode',
      1 => 'field_ilter_national_network_nam',
      2 => 'field_site_description',
      3 => 'field_site_parentsite_ref',
      4 => 'field_site_sitelong',
      5 => 'field_site_subsite_code_ref',
      6 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-name-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_name_description|node|site|form'] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'field_date',
      1 => 'field_ilter_network_country',
      2 => 'field_ilter_network_url',
      3 => 'field_networks_term_ref',
      4 => 'field_person_contact',
      5 => 'field_short_name',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_images',
      1 => 'field_purpose',
      2 => 'field_research_topics',
      3 => 'field_site_params',
      4 => 'field_site_status',
      5 => 'field_year',
      6 => 'field_year_closed',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
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
  $field_group->identifier = 'group_res_site_redmex|node|site|form';
  $field_group->group_name = 'group_res_site_redmex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_detailinfo';
  $field_group->data = array(
    'label' => 'OLD Site Info: Don\'t Delete',
    'weight' => '17',
    'children' => array(),
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
    'weight' => '0',
    'children' => array(
      0 => 'group_data_mgmnt',
      1 => 'group_geobon_tab_grp',
      2 => 'group_networks',
      3 => 'group_purpose',
      4 => 'group_site_design_status',
      5 => 'group_site_design',
      6 => 'group_site_detailinfo',
      7 => 'group_site_eu_class',
      8 => 'group_site_expeer',
      9 => 'group_site_geobon',
      10 => 'group_site_geographic',
      11 => 'group_site_infrstrctr_group',
      12 => 'group_site_ops',
      13 => 'group_site_protectmgt_grp',
      14 => 'group_site_status',
      15 => 'group_name_description',
      16 => 'group_site_taxonomy',
      17 => 'group_metadata_provider',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Core ILTER Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
      ),
      'formatter' => '',
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Site Design, Status, Classifictions, ExpeER',
    'weight' => '22',
    'children' => array(),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Site Design',
    'weight' => '10',
    'children' => array(
      0 => 'field_site_eu_design_experiments',
      1 => 'field_site_eu_design_observ',
      2 => 'field_site_eu_design_scale',
      3 => 'field_site_eu_experiment_scale',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Detailed Information',
    'weight' => '21',
    'children' => array(
      0 => 'group_res_site_redmex',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
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
  $field_group->parent_name = 'group_site_geographic';
  $field_group->data = array(
    'label' => 'Ecosystem and Habitat',
    'weight' => '177',
    'children' => array(
      0 => 'field_eunis_habitat',
      1 => 'field_ecosystem_and_land_use',
      2 => 'group_abiotic',
      3 => 'group_ecosystemref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Europe Specific Classifications',
    'weight' => '11',
    'children' => array(
      0 => 'field_site_eu_biogeo_region',
      1 => 'field_site_eu_enviro_zone',
      2 => 'field_site_eu_infobase_sitecode',
      3 => 'field_site_expeer_classif',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'ExpeER Specific',
    'weight' => '17',
    'children' => array(
      0 => 'field_site_expeer_corine_class',
      1 => 'field_site_expeer_netmem',
      2 => 'field_site_expeer_sitename',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
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
  $field_group->parent_name = 'group_site_geographic';
  $field_group->data = array(
    'label' => 'Site Geographic Coordinates',
    'weight' => '174',
    'children' => array(
      0 => 'field_upload_shapefile',
      1 => 'field_geo_bounding_box',
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'GEO-BON',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_site_size',
      1 => 'field_coordinates',
      2 => 'group_elevation_range',
      3 => 'group_site_ecosystem',
      4 => 'group_site_geo_coordinates',
      5 => 'group_site_precip',
      6 => 'group_ecosystem_characteristics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Infrastructure',
    'weight' => '14',
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
      18 => 'field_infrastructure_tax',
      19 => 'field_infrastructure',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Operations',
    'weight' => '13',
    'children' => array(
      0 => 'field_site_ops_cost',
      1 => 'field_site_ops_ispermanent',
      2 => 'field_site_ops_maint_freq',
      3 => 'field_site_ops_notes',
      4 => 'field_site_ops_sampling_intr',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detailed Categories (Europe required, others optional)',
    'weight' => '1',
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
  $export['group_site_otherdetail|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_precip|node|site|form';
  $field_group->group_name = 'group_site_precip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_geographic';
  $field_group->data = array(
    'label' => 'Precipitation',
    'weight' => '176',
    'children' => array(
      0 => 'field_precipitation_annual_ilter',
      1 => 'field_site_precip_max',
      2 => 'field_site_precip_min',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
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
  $field_group->identifier = 'group_site_protectmgt_grp|node|site|form';
  $field_group->group_name = 'group_site_protectmgt_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Protection and Management',
    'weight' => '16',
    'children' => array(
      0 => 'group_protection_status',
      1 => 'group_resource_mgmnt',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
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
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Site Status',
    'weight' => '9',
    'children' => array(
      0 => 'field_site_eu__status_accred',
      1 => 'field_site_eu_classification',
      2 => 'field_site_eu_declaration_status',
      3 => 'field_site_eu_docume_status',
      4 => 'field_site_eu_notes',
      5 => 'field_site_eu_site_type',
      6 => 'field_declaration_status_accredi',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_site_status|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_taxonomy|node|site|form';
  $field_group->group_name = 'group_site_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_coreinfo';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '19',
    'children' => array(
      0 => 'field_free_keywords_ref',
      1 => 'field_keywords',
      2 => 'field_core_areas',
      3 => 'field_taxa_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_site_taxonomy|node|site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_temp|node|site|form';
  $field_group->group_name = 'group_site_temp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ecosystem_characteristics';
  $field_group->data = array(
    'label' => 'Temperature',
    'weight' => '169',
    'children' => array(
      0 => 'field_temperature_average_annual',
      1 => 'group_temperature_rng',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
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
