<?php
/**
 * @file
 * ilter_nitrogen_pilot_survey.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ilter_nitrogen_pilot_survey_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_nitrogen_pilot_survey';
  $strongarm->value = 0;
  $export['comment_anonymous_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_nitrogen_pilot_survey';
  $strongarm->value = 1;
  $export['comment_default_mode_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_nitrogen_pilot_survey';
  $strongarm->value = '50';
  $export['comment_default_per_page_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_nitrogen_pilot_survey';
  $strongarm->value = 0;
  $export['comment_form_location_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_nitrogen_pilot_survey';
  $strongarm->value = '0';
  $export['comment_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_nitrogen_pilot_survey';
  $strongarm->value = '0';
  $export['comment_preview_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_nitrogen_pilot_survey';
  $strongarm->value = 0;
  $export['comment_subject_field_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__nitrogen_pilot_survey';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'bdp' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'eml' => array(
        'custom_settings' => FALSE,
      ),
      'eml_hl' => array(
        'custom_settings' => FALSE,
      ),
      'iso' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'person_in_committee' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '28',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_nitrogen_pilot_survey';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_nitrogen_pilot_survey';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nitrogen_pilot_survey';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_nitrogen_pilot_survey';
  $strongarm->value = '1';
  $export['node_preview_nitrogen_pilot_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_nitrogen_pilot_survey';
  $strongarm->value = 1;
  $export['node_submitted_nitrogen_pilot_survey'] = $strongarm;

  return $export;
}
