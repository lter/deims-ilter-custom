<?php
/**
 * @file
 * ilter_national_network.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilter_national_network_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ilter_national_network_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ilter_national_network_node_info() {
  $items = array(
    'ilter_national_network' => array(
      'name' => t('ILTER National Network'),
      'base' => 'node_content',
      'description' => t('This lists the key information about an ILTER Member Network'),
      'has_title' => '1',
      'title_label' => t('Network Name'),
      'help' => '',
    ),
  );
  return $items;
}
