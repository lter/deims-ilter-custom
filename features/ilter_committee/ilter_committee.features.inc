<?php
/**
 * @file
 * ilter_committee.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilter_committee_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ilter_committee_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Committee Name'),
      'help' => '',
    ),
  );
  return $items;
}
