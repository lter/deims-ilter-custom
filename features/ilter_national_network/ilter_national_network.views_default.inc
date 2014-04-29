<?php
/**
 * @file
 * ilter_national_network.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ilter_national_network_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ilter_network_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ILTER Network Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Email Lists Received';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'datatables';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_ilter_network_region']['id'] = 'field_ilter_network_region';
  $handler->display->display_options['fields']['field_ilter_network_region']['table'] = 'field_data_field_ilter_network_region';
  $handler->display->display_options['fields']['field_ilter_network_region']['field'] = 'field_ilter_network_region';
  /* Field: Content: Network ID */
  $handler->display->display_options['fields']['field_ilter_network_netid']['id'] = 'field_ilter_network_netid';
  $handler->display->display_options['fields']['field_ilter_network_netid']['table'] = 'field_data_field_ilter_network_netid';
  $handler->display->display_options['fields']['field_ilter_network_netid']['field'] = 'field_ilter_network_netid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Web Address */
  $handler->display->display_options['fields']['field_ilter_network_url']['id'] = 'field_ilter_network_url';
  $handler->display->display_options['fields']['field_ilter_network_url']['table'] = 'field_data_field_ilter_network_url';
  $handler->display->display_options['fields']['field_ilter_network_url']['field'] = 'field_ilter_network_url';
  $handler->display->display_options['fields']['field_ilter_network_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ilter_network_url']['type'] = 'link_url';
  /* Field: Content: Email Lists Received */
  $handler->display->display_options['fields']['field_ilter_network_listrec']['id'] = 'field_ilter_network_listrec';
  $handler->display->display_options['fields']['field_ilter_network_listrec']['table'] = 'field_data_field_ilter_network_listrec';
  $handler->display->display_options['fields']['field_ilter_network_listrec']['field'] = 'field_ilter_network_listrec';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ilter_network_status']['id'] = 'field_ilter_network_status';
  $handler->display->display_options['fields']['field_ilter_network_status']['table'] = 'field_data_field_ilter_network_status';
  $handler->display->display_options['fields']['field_ilter_network_status']['field'] = 'field_ilter_network_status';
  /* Field: Content: Number of Members */
  $handler->display->display_options['fields']['field_ilter_network_num_mbrs']['id'] = 'field_ilter_network_num_mbrs';
  $handler->display->display_options['fields']['field_ilter_network_num_mbrs']['table'] = 'field_data_field_ilter_network_num_mbrs';
  $handler->display->display_options['fields']['field_ilter_network_num_mbrs']['field'] = 'field_ilter_network_num_mbrs';
  $handler->display->display_options['fields']['field_ilter_network_num_mbrs']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Region (field_ilter_network_region) */
  $handler->display->display_options['sorts']['field_ilter_network_region_value']['id'] = 'field_ilter_network_region_value';
  $handler->display->display_options['sorts']['field_ilter_network_region_value']['table'] = 'field_data_field_ilter_network_region';
  $handler->display->display_options['sorts']['field_ilter_network_region_value']['field'] = 'field_ilter_network_region_value';
  /* Sort criterion: Content: Email Lists Received (field_ilter_network_listrec) */
  $handler->display->display_options['sorts']['field_ilter_network_listrec_value']['id'] = 'field_ilter_network_listrec_value';
  $handler->display->display_options['sorts']['field_ilter_network_listrec_value']['table'] = 'field_data_field_ilter_network_listrec';
  $handler->display->display_options['sorts']['field_ilter_network_listrec_value']['field'] = 'field_ilter_network_listrec_value';
  $handler->display->display_options['sorts']['field_ilter_network_listrec_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilter_national_network' => 'ilter_national_network',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ilter-network-admin';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'ilternetwork.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';
  $export['ilter_network_admin'] = $view;

  return $export;
}
