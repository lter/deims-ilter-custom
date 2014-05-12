<?php
/**
 * @file
 * ilter_free_keyword.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function ilter_free_keyword_eck_bundle_info() {
  $items = array(
  'free_keyword_free_keyword' => array(
  'machine_name' => 'free_keyword_free_keyword',
  'entity_type' => 'free_keyword',
  'name' => 'free_keyword',
  'label' => 'Free Keyword',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ilter_free_keyword_eck_entity_type_info() {
$items = array(
       'free_keyword' => array(
  'name' => 'free_keyword',
  'label' => 'Free Keyword',
  'properties' => array(),
),
  );
  return $items;
}
