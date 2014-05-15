<?php
/**
 * @file
 * ilter_protection_program.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilter_protection_program_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ilter_protection_program_node_info() {
  $items = array(
    'protection_program' => array(
      'name' => t('Protection Program'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Protection Program'),
      'help' => '',
    ),
  );
  return $items;
}
