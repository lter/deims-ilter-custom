<?php
/**
 * @file
 * ilter_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilter_site_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
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
function ilter_site_node_info() {
  $items = array(
    'site' => array(
      'name' => t('Site'),
      'base' => 'node_content',
      'description' => t('The description of an institutional location where research is conducted.  Includes a site name and identifier, lat-lon pairs, elevation and other descriptors. LTER-Europe field descriptions can be found at http://www.lter-europe.net/info_manage/infobase-field-description'),
      'has_title' => '1',
      'title_label' => t('Site Identifier'),
      'help' => '',
    ),
  );
  return $items;
}
