<?php
/**
 * @file
 * ilter_nitrogen.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ilter_nitrogen_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function ilter_nitrogen_eck_bundle_info() {
  $items = array(
  'nitrogen_data_collection_nitrogen_data_collection' => array(
  'machine_name' => 'nitrogen_data_collection_nitrogen_data_collection',
  'entity_type' => 'nitrogen_data_collection',
  'name' => 'nitrogen_data_collection',
  'label' => 'Nitrogen Data Collection',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ilter_nitrogen_eck_entity_type_info() {
$items = array(
       'nitrogen_data_collection' => array(
  'name' => 'nitrogen_data_collection',
  'label' => 'Nitrogen Data Collection',
  'properties' => array(),
),
  );
  return $items;
}
