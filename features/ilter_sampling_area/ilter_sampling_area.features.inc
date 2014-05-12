<?php
/**
 * @file
 * ilter_sampling_area.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function ilter_sampling_area_eck_bundle_info() {
  $items = array(
  'sampling_description_sampling_description' => array(
  'machine_name' => 'sampling_description_sampling_description',
  'entity_type' => 'sampling_description',
  'name' => 'sampling_description',
  'label' => 'Sampling Description',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ilter_sampling_area_eck_entity_type_info() {
$items = array(
       'sampling_description' => array(
  'name' => 'sampling_description',
  'label' => 'Sampling Description',
  'properties' => array(),
),
  );
  return $items;
}
