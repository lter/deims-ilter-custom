<?php
/**
 * @file
 * ilter_nitrogen_pilot_survey.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilter_nitrogen_pilot_survey_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_questions|node|nitrogen_pilot_survey|form';
  $field_group->group_name = 'group_data_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nitrogen_pilot_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Data Questions',
    'weight' => '5',
    'children' => array(
      0 => 'field_data_available',
      1 => 'field__ilter_site_data',
      2 => 'field_eml_available',
      3 => 'field_upload_eml',
      4 => 'field_data_doi_url',
      5 => 'field_upload_data_paper_',
      6 => 'field_data_theme',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-data-questions field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_data_questions|node|nitrogen_pilot_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|nitrogen_pilot_survey|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nitrogen_pilot_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '3',
    'children' => array(
      0 => 'group_people',
      1 => 'group_data_questions',
      2 => 'group_paper_questions',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-details field-group-htabs',
      ),
    ),
  );
  $export['group_details|node|nitrogen_pilot_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paper_questions|node|nitrogen_pilot_survey|form';
  $field_group->group_name = 'group_paper_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nitrogen_pilot_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Paper Questions',
    'weight' => '4',
    'children' => array(
      0 => 'field_ilter_site',
      1 => 'field_paper_doi',
      2 => 'field_upload_pdf',
      3 => 'field_research_paper_available',
      4 => 'field_theme_paper',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paper-questions field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_paper_questions|node|nitrogen_pilot_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participation|node|nitrogen_pilot_survey|form';
  $field_group->group_name = 'group_participation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nitrogen_pilot_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_questions';
  $field_group->data = array(
    'label' => 'Participation Questions',
    'weight' => '25',
    'children' => array(
      0 => 'field_join_synthesis_team_',
      1 => 'field_new_research_theme',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participation field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_participation|node|nitrogen_pilot_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|nitrogen_pilot_survey|form';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nitrogen_pilot_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '6',
    'children' => array(
      0 => 'field_ilter_person',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-people field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_people|node|nitrogen_pilot_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_questions|node|nitrogen_pilot_survey|form';
  $field_group->group_name = 'group_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nitrogen_pilot_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Individual Questions',
    'weight' => '25',
    'children' => array(
      0 => 'path',
      1 => 'group_participation',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-questions field-group-htabs',
      ),
    ),
  );
  $export['group_questions|node|nitrogen_pilot_survey|form'] = $field_group;

  return $export;
}
