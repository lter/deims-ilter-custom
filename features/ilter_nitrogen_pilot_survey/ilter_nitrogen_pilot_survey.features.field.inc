<?php
/**
 * @file
 * ilter_nitrogen_pilot_survey.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function ilter_nitrogen_pilot_survey_field_default_fields() {
  $fields = array();

  // Exported field: 'node-nitrogen_pilot_survey-field__ilter_site_data'.
  $fields['node-nitrogen_pilot_survey-field__ilter_site_data'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field__ilter_site_data',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'site' => 'site',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field__ilter_site_data',
      'label' => ' ILTER Site - data',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'clone_button' => 0,
            'delete_references' => 0,
            'match_operator' => 'CONTAINS',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '17',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_data_available'.
  $fields['node-nitrogen_pilot_survey-field_data_available'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_available',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_data_available',
      'label' => 'Data Available',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '16',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_data_doi_url'.
  $fields['node-nitrogen_pilot_survey-field_data_doi_url'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_doi_url',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'url',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'url',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'url',
          'settings' => array(
            'nofollow' => FALSE,
            'trim_length' => 80,
          ),
          'type' => 'url_default',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_data_doi_url',
      'label' => 'Data DOI  or Download URL',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'title_fetch' => 0,
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'url',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'url_external',
        'weight' => '21',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_data_theme'.
  $fields['node-nitrogen_pilot_survey-field_data_theme'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '3',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_theme',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Theme 1 (lichen and moss)' => 'Theme 1 (lichen and moss)',
          'Theme 2 (N2O emission)' => 'Theme 2 (N2O emission)',
          'Theme 3 (legacy-impact on N cycle' => 'Theme 3 (legacy-impact on N cycle',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<b><big>Click on each theme to select</big> (select as many themes as covered by your data).</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_data_theme',
      'label' => 'Data Theme',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_buttons',
        'weight' => '18',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_eml_available'.
  $fields['node-nitrogen_pilot_survey-field_eml_available'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_eml_available',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_eml_available',
      'label' => 'EML Available (Click if yes)',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '19',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_ilter_person'.
  $fields['node-nitrogen_pilot_survey-field_ilter_person'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ilter_person',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'views',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'view' => array(
            'args' => array(),
            'display_name' => 'entityreference_node_person',
            'view_name' => 'entity_reference_selection',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Begin typing your surname/last name. Select ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_person',
      'label' => 'ILTER Person',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'clone_button' => 0,
            'delete_references' => 0,
            'match_operator' => 'CONTAINS',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '1',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_ilter_site'.
  $fields['node-nitrogen_pilot_survey-field_ilter_site'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ilter_site',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'site' => 'site',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<b>Start typing the name of the site. Then select the site. </b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_site',
      'label' => 'ILTER Site (Paper)',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'clone_button' => 0,
            'delete_references' => 0,
            'match_operator' => 'CONTAINS',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '3',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_join_synthesis_team_'.
  $fields['node-nitrogen_pilot_survey-field_join_synthesis_team_'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_join_synthesis_team_',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_join_synthesis_team_',
      'label' => 'Join Synthesis Team ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '27',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_new_research_theme'.
  $fields['node-nitrogen_pilot_survey-field_new_research_theme'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '3',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_new_research_theme',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Theme 1 (lichen and moss)' => 'Theme 1 (lichen and moss)',
          'Theme 2 (N2O emission)' => 'Theme 2 (N2O emission)',
          'Theme 3 (legacy-impact on N cycle)' => 'Theme 3 (legacy-impact on N cycle)',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_new_research_theme',
      'label' => 'Are you interested in implementing actual observation in your site?',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '28',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_paper_doi'.
  $fields['node-nitrogen_pilot_survey-field_paper_doi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_paper_doi',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Provide the Paper\'s DOI if available',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_paper_doi',
      'label' => 'Paper DOI',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_research_paper_available'.
  $fields['node-nitrogen_pilot_survey-field_research_paper_available'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_research_paper_available',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_research_paper_available',
      'label' => 'Research Paper Available',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '1',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_theme_paper'.
  $fields['node-nitrogen_pilot_survey-field_theme_paper'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '3',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_theme_paper',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Theme 1 (lichen and moss)' => 'Theme 1 (lichen and moss)',
          'Theme 2 (N2O emission)' => 'Theme 2 (N2O emission)',
          'Theme 3 (legacy-impact on N cycle' => 'Theme 3 (legacy-impact on N cycle',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<b>Select all of the themes covered by the paper</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '16',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_theme_paper',
      'label' => 'Theme of Paper',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_buttons',
        'weight' => '2',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_upload_data_paper_'.
  $fields['node-nitrogen_pilot_survey-field_upload_data_paper_'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_upload_data_paper_',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'display_default' => 0,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'deleted' => '0',
      'description' => '<b>Upload a pdf of a data paper: </br>

Example of data paper:</b></br>
Joel E. Cohen and Christian Mulder 2014. Soil invertebrates, chemistry, weather, human management, and edaphic food webs at 135 sites in The Netherlands: SIZEWEB. Ecology 95:578–578. http://dx.doi.org/10.1890/13-1337.1</br></br>
Data Papers </br></br>
<b>Soil invertebrates, chemistry, weather, human management, and edaphic food webs at 135 sites in The Netherlands: SIZEWEB
Ecological Archives E095-051</b></br></br>

Joel E. Cohen 1 and Christian Mulder 2,3
1Laboratory of Populations, Rockefeller and Columbia Universities, New York, New York 10065 USA

2National Institute for Public Health and the Environment (RIVM), 3720 BA Bilthoven, The Netherlands </br></br>

This paper provides data on the taxonomy, abundance, body size, and general feeding habits of soil invertebrates at 135 sites in the Netherlands, along with the edaphic chemical characteristics, air temperature, precipitation, atmospheric deposition, and human management practices of those sites. Sampling, monitoring, and modeling activities were performed in the framework of the Dutch Soil Quality Network. A total of 258 genera, families, and morpha of free-living soil nematodes, mites, insects, myriapods, enchytraeids, and earthworms, ranging in dry body mass >7 orders of magnitude, were identified, counted, and measured for biomass estimates. Trophic links reflecting life history were estimated from existing literature and, when possible, compared with microarthropods\' carbohydrase activity. Environmental variables were collected at each site, including soil chemistry (pH, carbon, nitrogen, phosphate, cadmium, chrome, copper, lead, mercury, nickel, and zinc), atmospheric nitrogen deposition, inputs of nitrogen and phosphorus from manure, rainfall, and temperature. Prior analyses of these data are cited, and the data are released here for the first time. These data describe how strongly different types of human-induced disturbance influence the abundance–mass allometric relationships in soil biota.</br></br>

<b>Key words:</b>  Acarina, agroecosystem, allometric scaling, Annelida, atmospheric N deposition, cattle pressure, Collembola, land use, N eutrophication, Nematoda, soil nutrients, The Netherlands </br></br>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_upload_data_paper_',
      'label' => 'Upload Data Paper ',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'pdf',
        'max_filesize' => '',
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '22',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_upload_eml'.
  $fields['node-nitrogen_pilot_survey-field_upload_eml'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_upload_eml',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'display_default' => 0,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_upload_eml',
      'label' => 'Upload EML',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'xml',
        'max_filesize' => '',
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '20',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-nitrogen_pilot_survey-field_upload_pdf'.
  $fields['node-nitrogen_pilot_survey-field_upload_pdf'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_upload_pdf',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'display_default' => 0,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'nitrogen_pilot_survey',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_upload_pdf',
      'label' => 'Upload PDF',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'pdf',
        'max_filesize' => '',
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '4',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' ILTER Site - data');
  t('<b><big>Click on each theme to select</big> (select as many themes as covered by your data).</b>');
  t('<b>Select all of the themes covered by the paper</b>');
  t('<b>Start typing the name of the site. Then select the site. </b>');
  t('<b>Upload a pdf of a data paper: </br>

Example of data paper:</b></br>
Joel E. Cohen and Christian Mulder 2014. Soil invertebrates, chemistry, weather, human management, and edaphic food webs at 135 sites in The Netherlands: SIZEWEB. Ecology 95:578–578. http://dx.doi.org/10.1890/13-1337.1</br></br>
Data Papers </br></br>
<b>Soil invertebrates, chemistry, weather, human management, and edaphic food webs at 135 sites in The Netherlands: SIZEWEB
Ecological Archives E095-051</b></br></br>

Joel E. Cohen 1 and Christian Mulder 2,3
1Laboratory of Populations, Rockefeller and Columbia Universities, New York, New York 10065 USA

2National Institute for Public Health and the Environment (RIVM), 3720 BA Bilthoven, The Netherlands </br></br>

This paper provides data on the taxonomy, abundance, body size, and general feeding habits of soil invertebrates at 135 sites in the Netherlands, along with the edaphic chemical characteristics, air temperature, precipitation, atmospheric deposition, and human management practices of those sites. Sampling, monitoring, and modeling activities were performed in the framework of the Dutch Soil Quality Network. A total of 258 genera, families, and morpha of free-living soil nematodes, mites, insects, myriapods, enchytraeids, and earthworms, ranging in dry body mass >7 orders of magnitude, were identified, counted, and measured for biomass estimates. Trophic links reflecting life history were estimated from existing literature and, when possible, compared with microarthropods\' carbohydrase activity. Environmental variables were collected at each site, including soil chemistry (pH, carbon, nitrogen, phosphate, cadmium, chrome, copper, lead, mercury, nickel, and zinc), atmospheric nitrogen deposition, inputs of nitrogen and phosphorus from manure, rainfall, and temperature. Prior analyses of these data are cited, and the data are released here for the first time. These data describe how strongly different types of human-induced disturbance influence the abundance–mass allometric relationships in soil biota.</br></br>

<b>Key words:</b>  Acarina, agroecosystem, allometric scaling, Annelida, atmospheric N deposition, cattle pressure, Collembola, land use, N eutrophication, Nematoda, soil nutrients, The Netherlands </br></br>');
  t('Are you interested in implementing actual observation in your site?');
  t('Begin typing your surname/last name. Select ');
  t('Data Available');
  t('Data DOI  or Download URL');
  t('Data Theme');
  t('EML Available (Click if yes)');
  t('ILTER Person');
  t('ILTER Site (Paper)');
  t('Join Synthesis Team ');
  t('Paper DOI');
  t('Provide the Paper\'s DOI if available');
  t('Research Paper Available');
  t('Theme of Paper');
  t('Upload Data Paper ');
  t('Upload EML');
  t('Upload PDF');

  return $fields;
}
