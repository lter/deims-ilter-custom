<?php
/**
 * @file
 * deims_person.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function deims_person_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|person|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_person_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_name',
        1 => 'field_person_title',
        2 => 'field_organization',
        3 => 'field_email',
      ),
      'left' => array(
        4 => 'field_networks_term_ref',
        5 => 'field_person_specialty_term',
        6 => 'field_subjects_term_ref',
        7 => 'field_person_role',
      ),
      'right' => array(
        8 => 'field_images',
        9 => 'field_url',
        10 => 'field_address',
        11 => 'field_phone',
        12 => 'field_fax',
        13 => 'field_person_network_ref',
      ),
      'footer' => array(
        14 => 'links',
        15 => 'field_related_sites',
        16 => 'field_associated_biblio_author',
        17 => 'field_person_orcid',
        18 => 'field_person_id',
      ),
    ),
    'fields' => array(
      'field_name' => 'header',
      'field_person_title' => 'header',
      'field_organization' => 'header',
      'field_email' => 'header',
      'field_networks_term_ref' => 'left',
      'field_person_specialty_term' => 'left',
      'field_subjects_term_ref' => 'left',
      'field_person_role' => 'left',
      'field_images' => 'right',
      'field_url' => 'right',
      'field_address' => 'right',
      'field_phone' => 'right',
      'field_fax' => 'right',
      'field_person_network_ref' => 'right',
      'links' => 'footer',
      'field_related_sites' => 'footer',
      'field_associated_biblio_author' => 'footer',
      'field_person_orcid' => 'footer',
      'field_person_id' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|person|full'] = $ds_layout;

  return $export;
}
