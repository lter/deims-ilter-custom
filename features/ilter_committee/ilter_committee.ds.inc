<?php
/**
 * @file
 * ilter_committee.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ilter_committee_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|committee|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'committee';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_email',
        2 => 'field_committee_members_ref',
        3 => 'path',
      ),
      'right' => array(
        4 => 'field_committee_chair_ref',
        5 => 'field_committee_purpose',
        6 => 'field_files',
      ),
      'hidden' => array(
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_email' => 'left',
      'field_committee_members_ref' => 'left',
      'path' => 'left',
      'field_committee_chair_ref' => 'right',
      'field_committee_purpose' => 'right',
      'field_files' => 'right',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|committee|form'] = $ds_layout;

  return $export;
}
