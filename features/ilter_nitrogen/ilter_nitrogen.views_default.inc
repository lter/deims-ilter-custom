<?php
/**
 * @file
 * ilter_nitrogen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ilter_nitrogen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nitrogen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_nitrogen_data_collection';
  $view->human_name = 'Nitrogen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nitrogen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_n_unit',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_ilter_network_country' => 'field_ilter_network_country',
    'field_date_range' => 'field_date_range',
    'field_related_site' => 'field_related_site',
    'field_n_source_monitored' => 'field_n_source_monitored',
    'field_n_temporal_trends' => 'field_n_temporal_trends',
    'field_n_unit' => 'field_n_unit',
    'field_n_concentration_avg' => 'field_n_concentration_avg',
    'field_related_publications' => 'field_related_publications',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_ilter_network_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_date_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_related_site' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_n_source_monitored' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_n_temporal_trends' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_n_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_n_concentration_avg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Nitrogen Data Collection: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_nitrogen_data_collection';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_ilter_network_country']['id'] = 'field_ilter_network_country';
  $handler->display->display_options['fields']['field_ilter_network_country']['table'] = 'field_data_field_ilter_network_country';
  $handler->display->display_options['fields']['field_ilter_network_country']['field'] = 'field_ilter_network_country';
  /* Field: Field: Date Range */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Related Site */
  $handler->display->display_options['fields']['field_related_site']['id'] = 'field_related_site';
  $handler->display->display_options['fields']['field_related_site']['table'] = 'field_data_field_related_site';
  $handler->display->display_options['fields']['field_related_site']['field'] = 'field_related_site';
  $handler->display->display_options['fields']['field_related_site']['label'] = 'Location';
  $handler->display->display_options['fields']['field_related_site']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_related_site']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Field: Nitrogen Data Collection: Item/Types Monitored */
  $handler->display->display_options['fields']['field_n_source_monitored']['id'] = 'field_n_source_monitored';
  $handler->display->display_options['fields']['field_n_source_monitored']['table'] = 'field_data_field_n_source_monitored';
  $handler->display->display_options['fields']['field_n_source_monitored']['field'] = 'field_n_source_monitored';
  /* Field: Nitrogen Data Collection: Temporal Trends */
  $handler->display->display_options['fields']['field_n_temporal_trends']['id'] = 'field_n_temporal_trends';
  $handler->display->display_options['fields']['field_n_temporal_trends']['table'] = 'field_data_field_n_temporal_trends';
  $handler->display->display_options['fields']['field_n_temporal_trends']['field'] = 'field_n_temporal_trends';
  /* Field: Nitrogen Data Collection: Unit */
  $handler->display->display_options['fields']['field_n_unit']['id'] = 'field_n_unit';
  $handler->display->display_options['fields']['field_n_unit']['table'] = 'field_data_field_n_unit';
  $handler->display->display_options['fields']['field_n_unit']['field'] = 'field_n_unit';
  /* Field: Nitrogen Data Collection: Mean concentration N */
  $handler->display->display_options['fields']['field_n_concentration_avg']['id'] = 'field_n_concentration_avg';
  $handler->display->display_options['fields']['field_n_concentration_avg']['table'] = 'field_data_field_n_concentration_avg';
  $handler->display->display_options['fields']['field_n_concentration_avg']['field'] = 'field_n_concentration_avg';
  $handler->display->display_options['fields']['field_n_concentration_avg']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Related publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Filter criterion: Nitrogen Data Collection: nitrogen_data_collection type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_nitrogen_data_collection';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nitrogen_data_collection' => 'nitrogen_data_collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-nitrogen';
  $export['nitrogen'] = $view;

  return $export;
}
