<?php
/**
 * @file
 * ilter_site.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function ilter_site_field_default_fields() {
  $fields = array();

  // Exported field: 'node-site-field__site_sitecode'.
  $fields['node-site-field__site_sitecode'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field__site_sitecode',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Unique code for the LTER site. For LTER-Europe, the form is : LTER_EU_XX_YY(Y); For East Asia-Pacific: LTER_AP_XX_YY(Y); for North America: LTER_NAM_XX_YY(Y);  for South America: LTER_SAM_XX_YY(Y); for Southern Africa: LTER_SAF_XX_YY(Y);  where XX is the 2-letter country code and YY(Y) represents a number. Use (Y) for a subsite. Please make sure that the number is not used for any site in your country. You can check your exisiting code at <a href="http://data.lter-europe.net/deims/sitecode" target="_blank">http://data.lter-europe.net/deims/sitecode</a> <b> If you are part of the Critical Zones or Soiltrek Network,</b> then the format for your code is: CZO_EU_XX_YY(Y);  where XX is the 2-letter country code and YY(Y) represents a number. For example:  CZO_FR_01  or CZO_DE_02 or RBV_FR_100',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field__site_sitecode',
      'label' => 'Site Code ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_collected_datasets_ref'.
  $fields['node-site-field_collected_datasets_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_collected_datasets_ref',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'data_set' => 'data_set',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Start typing a dataset title that is associated with this site. Keep adding datasets as needed.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '94',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_collected_datasets_ref',
      'label' => 'Collected Datasets',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '121',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_coordinates'.
  $fields['node-site-field_coordinates'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_coordinates',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'bbox' => array(
          0 => 'top',
          1 => 'bottom',
          2 => 'left',
          3 => 'right',
        ),
        'bottom' => array(
          0 => 'bottom',
        ),
        'centroid' => array(
          0 => 'lat',
          1 => 'lon',
        ),
        'geohash' => array(
          0 => 'geohash',
        ),
        'lat' => array(
          0 => 'lat',
        ),
        'left' => array(
          0 => 'left',
        ),
        'lon' => array(
          0 => 'lon',
        ),
        'right' => array(
          0 => 'right',
        ),
        'top' => array(
          0 => 'top',
        ),
      ),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'backend' => 'default',
        'srid' => '4326',
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => array(),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'leaflet',
          'settings' => array(
            'height' => '400',
            'icon' => array(
              'html' => '',
              'htmlClass' => '',
              'iconAnchor' => array(
                'x' => '',
                'y' => '',
              ),
              'iconImageStyle' => '',
              'iconSize' => array(
                'x' => '',
                'y' => '',
              ),
              'iconType' => 'marker',
              'iconUrl' => '',
              'popupAnchor' => array(
                'x' => '',
                'y' => '',
              ),
              'shadowAnchor' => array(
                'x' => '',
                'y' => '',
              ),
              'shadowUrl' => '',
            ),
            'leaflet_map' => 'OSM Mapnik',
            'popup' => array(
              'show' => 0,
              'text' => '',
            ),
            'vector_display' => array(
              'clickable' => 1,
              'color' => '',
              'dashArray' => '',
              'fill' => 1,
              'fillColor' => '',
              'fillOpacity' => '',
              'opacity' => '',
              'stroke' => 1,
              'stroke_override' => 0,
              'weight' => '',
            ),
            'zoom' => array(
              'initialZoom' => '8',
              'maxZoom' => '-1',
              'minZoom' => '1',
              'scrollWheelZoom' => 1,
            ),
          ),
          'type' => 'geofield_leaflet',
          'weight' => '20',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'leaflet',
          'settings' => array(
            'height' => 400,
            'icon' => array(
              'html' => '',
              'htmlClass' => '',
              'iconAnchor' => array(
                'x' => '',
                'y' => '',
              ),
              'iconSize' => array(
                'x' => '',
                'y' => '',
              ),
              'iconUrl' => '',
              'popupAnchor' => array(
                'x' => '',
                'y' => '',
              ),
              'shadowAnchor' => array(
                'x' => '',
                'y' => '',
              ),
              'shadowUrl' => '',
            ),
            'leaflet_map' => '',
            'popup' => array(
              'show' => '',
              'text' => '',
            ),
            'vector_display' => array(
              'clickable' => 1,
              'color' => '',
              'dashArray' => '',
              'fill' => 1,
              'fillColor' => '',
              'fillOpacity' => '',
              'opacity' => '',
              'stroke' => 1,
              'stroke_override' => 0,
              'weight' => '',
            ),
            'zoom' => array(
              'initialZoom' => '',
              'maxZoom' => 19,
              'minZoom' => 1,
            ),
          ),
          'type' => 'geofield_leaflet',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_coordinates',
      'label' => 'Coordinates',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(),
        'type' => 'geofield_latlon',
        'weight' => '171',
      ),
    ),
  );

  // Exported field: 'node-site-field_core_areas'.
  $fields['node-site-field_core_areas'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_core_areas',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'core_areas',
            'parent' => '0',
          ),
        ),
        'delete_on_parent_delete' => '',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '114',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_core_areas',
      'label' => 'Core Areas',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '201',
      ),
    ),
  );

  // Exported field: 'node-site-field_date'.
  $fields['node-site-field_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'deleted' => '0',
      'description' => 'A form automatically defines current date value either as a date stamp for metadate record creation or its update. ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date',
      'label' => 'Metadata Update Date',
      'required' => 1,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '30',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-10:+0',
        ),
        'type' => 'date_popup',
        'weight' => '27',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_declaration_status_accredi'.
  $fields['node-site-field_declaration_status_accredi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_declaration_status_accredi',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Accredited formal LTER Site/ LTSER Platform' => 'Accredited formal LTER Site/ LTSER Platform',
          'Accredited potential LTER Site/ LTSER Platform' => 'Accredited potential LTER Site/ LTSER Platform',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '101',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '50',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_declaration_status_accredi',
      'label' => 'Declaration Status Accredited by ILTER',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_buttons',
        'weight' => '101',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_ecosystem_and_land_use'.
  $fields['node-site-field_ecosystem_and_land_use'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ecosystem_and_land_use',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ecosystem_types_and_land_use',
            'parent' => '0',
          ),
        ),
        'delete_on_parent_delete' => '',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select, at least, the dominant ecosystem or land use type. You may select as many terms as are appropriate.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 121,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ecosystem_and_land_use',
      'label' => 'Ecosystem and Land Use',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_reference_tree',
        'settings' => array(
          'cascading_selection' => 0,
          'filter_view' => '',
          'leaves_only' => 0,
          'max_depth' => '',
          'parent_term_id' => '',
          'search' => 0,
          'select_parents' => 0,
          'start_minimized' => 1,
          'token_display' => '',
          'track_list' => 0,
        ),
        'type' => 'term_reference_tree',
        'weight' => '226',
      ),
    ),
  );

  // Exported field: 'node-site-field_elevation_average'.
  $fields['node-site-field_elevation_average'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_elevation_average',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '0',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'In meters. above sea level is positive, below sea level is negative. For example: Mt Everest: 8848; Dead Sea: -423. Enter numbers only.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '25',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_elevation_average',
      'label' => 'Elevation - Average',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => '5',
          6 => '6',
          7 => 0,
          8 => '8',
        ),
        'suffix' => 'msl',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '33',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_elevation_lowest'.
  $fields['node-site-field_elevation_lowest'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_elevation_lowest',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '0',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the lowest elevation in the site in meters.  Positive for meters above sea level, negative for meters below sea level. Examples: elevations at  mountain site - <b>4800</b>, 8820, 8848</b>; Dead Sea, -400, -410, -<b>424</b>,
Lowest Mountain: <b>8800</b>; Lowest Dead Sea: <b>-424</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '23',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_elevation_lowest',
      'label' => 'Elevation Range FROM',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '31',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_elevation_maximum_'.
  $fields['node-site-field_elevation_maximum_'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_elevation_maximum_',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '0',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the highest elevation in the site in meters.  Positive for meters above sea level, negative for meters below sea level. Examples: elevations at  mountain site - 8800, 8820, <b>8848</b>; Dead Sea, <b>-400</b>, -410, -424,
Highest Mountain: <b>8848</b>; Hightest Dead Sea: <b>-400</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '24',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_elevation_maximum_',
      'label' => 'Elevation Range TO',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => 'msl',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '32',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_eunis_habitat'.
  $fields['node-site-field_eunis_habitat'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_eunis_habitat',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '37',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_eunis_habitat',
      'label' => 'Eunis Habitat',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '[Abies] and [Picea] woodland
[Fagus] woodland
[Phragmites australis] beds normally without free-standing water
[Populus] plantations
[Quercus caliprinus] woodland
[Robinia] plantations
[Sphagnum fuscum] hummocks
[Sphagnum magellanicum] hummocks
[Sphagnum rubellum] hummocks
[Vaccinium] shrub hummocks

Acidophile montane inner Alpine spruce forests
Alpigenic high mountain [Empetrum - Vaccinium] heaths
Apennine [Pinus mugo] scrub
Apennine naked-rush swards
Arable land and market gardens
Atlantic and sub-Atlantic humid meadows
Bare tilled land
Bare tilled, fallow or recently abandoned arable land
Bilberry spruce forests
Blanket bog complexes
Boreo-alpine herb-rich acid snowbed communities
Broadleaved deciduous woodland
Broadleaved swamp woodland not on acid peat
Coastal habitats
Coastal meadows
Coniferous woodland
Constructed, industrial and other artificial habitats
Coppice
Dry or moist agriculturally-improved grassland
Dwarf birch hummocks
Eastern Alpine siliceous [Larix] and [Pinus cembra] forests
Epipotamal streams
Eutrophic vegetation of slow-flowing rivers
Exotic pine plantations
Fallow un-inundated fields with annual and perennial weed commun
Fenno-Scandian boreo-alpine heaths
Fruit and nut tree orchards
Grasslands and lands dominated by forbs, mosses or lichens
Habitat complexes
Heathland, scrub and tundra
Hiberno-Britannic [Eriophorum]-[Calluna] blanket bogs
Highly artificial broadleaved deciduous forestry plantations
Inland dune mixed thickets
Inland surface waters
Inland unvegetated or sparsely vegetated habitats
Inner Alpine mountain pine forests
Intensive unmixed crops
Large-scale market gardens and horticulture
Lines of trees
Man-made reservoir
Marine habitats
Meadows of the steppe zone
Medio-European montane woodrush beech forests
Mediterraneo-montane [Sesleria] steppes
Medium-scale intensive unmixed crops (1-25ha)
Mesotrophic vegetation of slow-flowing rivers
Middle European [Pinus sylvestris] forests
Mires, bogs and fens
Mixed [Abies] - [Picea] - [Fagus] woodland
Mixed deciduous and coniferous woodland
Mixed forestry plantations
Moss and lichen fjell fields
Oroboreal [Carex bigelowii]-[Racomitrium] moss-heaths
Oroboreal moss-dwarf willow snowbed communities
Pannonian [Quercus pubescens] woods
Pannonic [Juniperus] - [Populus] steppe woods
Pannonic [Quercus] - [Carpinus betulus] forests
Pannonic neutrophile collinar beech forests
Pannonic salt steppes and saltmarshes
Pannonic sand steppe oak woods
Pannonic sand steppes
Pannonic turkey oak-sessile oak woods
Partially mixed water column with reduced salinity and medium re
Permanent eutrophic lakes, ponds and pools
Permanent mesotrophic pastures and aftermath-grazed meadows
Posidonia oceanica meadows on seafloor
Ravine and slope woodland
Regularly or recently cultivated agricultural, horticultural and
Residential buildings of villages and urban peripheries
Small-scale intensive unmixed crops (<1ha)
Small-scale market gardens and horticulture, including allotment
Snow patches
Steppe [Quercus] woods
Subalpine [Sorbus] brush
Subalpine birch brush
Sub-Atlantic acidophilous beech forests
Sub-Atlantic xerophile [Anthericum] oak-hornbeam forests
Subcontinental bilberry western spruce taiga
Sudeten summital mat-grass swards
Surface running waters
Surface standing waters
Temporary running waters
Thermophilous deciduous woodland
Water column with seasonal thermal stratification and full salin
Water-fringing reedbeds and tall helophytes other than canes
Western shrub tundra
Wooded tundra
Woodland, forest and other wooded land',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '228',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_free_keywords_ref'.
  $fields['node-site-field_free_keywords_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_free_keywords_ref',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'eck_free_keyword' => array(
          'columns' => array(
            'target_id' => 'id',
          ),
          'table' => 'eck_free_keyword',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'free_keyword' => 'free_keyword',
          ),
        ),
        'target_type' => 'free_keyword',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_free_keywords_ref',
      'label' => 'Free Keywords',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'clone_button' => 0,
            'delete_references' => 0,
            'match_operator' => 'CONTAINS',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '199',
      ),
    ),
  );

  // Exported field: 'node-site-field_geo_bounding_box'.
  $fields['node-site-field_geo_bounding_box'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geo_bounding_box',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'bbox' => array(
          0 => 'top',
          1 => 'bottom',
          2 => 'left',
          3 => 'right',
        ),
        'bottom' => array(
          0 => 'bottom',
        ),
        'centroid' => array(
          0 => 'lat',
          1 => 'lon',
        ),
        'geohash' => array(
          0 => 'geohash',
        ),
        'lat' => array(
          0 => 'lat',
        ),
        'left' => array(
          0 => 'left',
        ),
        'lon' => array(
          0 => 'lon',
        ),
        'right' => array(
          0 => 'right',
        ),
        'top' => array(
          0 => 'top',
        ),
      ),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'backend' => 'default',
        'srid' => '4326',
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => array(
        0 => array(
          'geom' => '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '',
          'geo_type' => 'geometrycollection',
          'top' => NULL,
          'bottom' => NULL,
          'right' => NULL,
          'left' => NULL,
          'geohash' => FALSE,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => '19',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geo_bounding_box',
      'label' => 'Geo Bounding Box',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'openlayers_geofield',
        'settings' => array(
          'allow_edit' => 1,
          'data_storage' => 'single',
          'feature_types' => array(
            'path' => 'path',
            'point' => 'point',
            'polygon' => 'polygon',
          ),
          'openlayers_map' => 'clone_of_openlayers_geofield_map_geofield_widget',
          'showInputField' => 0,
        ),
        'type' => 'openlayers_geofield',
        'weight' => '169',
      ),
    ),
  );

  // Exported field: 'node-site-field_geology'.
  $fields['node-site-field_geology'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geology',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please describe the geology of your site',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 117,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geology',
      'label' => 'Geology',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '223',
      ),
    ),
  );

  // Exported field: 'node-site-field_hydrology'.
  $fields['node-site-field_hydrology'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hydrology',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Describe the site\'s hydrology.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 118,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hydrology',
      'label' => 'Hydrology',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '224',
      ),
    ),
  );

  // Exported field: 'node-site-field_ilter_national_network_nam'.
  $fields['node-site-field_ilter_national_network_nam'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ilter_national_network_nam',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'views',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 1,
            ),
          ),
          'view' => array(
            'args' => array(),
            'display_name' => 'entityreference_1',
            'view_name' => 'active_networks',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select a national network',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '40',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_national_network_nam',
      'label' => 'ILTER National Network',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => '8',
          9 => '9',
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '6',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_ilter_network_country'.
  $fields['node-site-field_ilter_network_country'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ilter_network_country',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'AF' => 'Afghanistan',
          'AX' => 'Åland Islands',
          'AL' => 'Albania',
          'DZ' => 'Algeria',
          'AS' => 'American Samoa',
          'AD' => 'Andorra',
          'AO' => 'Angola',
          'AI' => 'Anguilla',
          'AQ' => 'Antarctica',
          'AG' => 'Antigua/Barbuda',
          'AR' => 'Argentina',
          'AM' => 'Armenia',
          'AW' => 'Aruba',
          'AT' => 'Austria',
          'AU' => 'Australia',
          'AZ' => 'Azerbaijan',
          'BS' => 'Bahamas',
          'BH' => 'Bahrain',
          'BD' => 'Bangladesh',
          'BB' => 'Barbados',
          'BY' => 'Belarus',
          'BE' => 'Belgium',
          'BZ' => 'Belize',
          'BJ' => 'Benin',
          'BM' => 'Bermuda',
          'BT' => 'Bhutan',
          'BO' => 'Bolivia',
          'BA' => 'Bosnia/Herzegovina',
          'BW' => 'Botswana',
          'BV' => 'Bouvet Island',
          'BR' => 'Brazil',
          'BN' => 'Brunei Darussalam',
          'BG' => 'Bulgaria',
          'BF' => 'Burkina Faso',
          'BI' => 'Burundi',
          'KH' => 'Cambodia',
          'CA' => 'Canada',
          'CM' => 'Cameroon',
          'CV' => 'Cape Verde',
          'KY' => 'Cayman Islands',
          'CF' => 'Central African Republic',
          'TD' => 'Chad',
          'CL' => 'Chile',
          'CN' => 'China',
          'CX' => 'Christmas Island',
          'CC' => 'Cocos (Keeling) Islands',
          'CO' => 'Colombia',
          'KM' => 'Comoros',
          'CG' => 'Congo',
          'CK' => 'Cook Islands',
          'CR' => 'Costa Rica',
          'CI' => 'Côte D\'Ivoire',
          'HR' => 'Croatia',
          'CU' => 'Cuba',
          'CY' => 'Cyprus',
          'CZ' => 'Czech Republic',
          'DK' => 'Denmark',
          'DJ' => 'Djibouti',
          'DM' => 'Dominica',
          'DO' => 'Dominican Republic',
          'EC' => 'Ecuador',
          'EG' => 'Egypt',
          'SV' => 'El Salvador',
          'GQ' => 'Equatorial Guinea',
          'ER' => 'Eritrea',
          'EE' => 'Estonia',
          'ET' => 'Ethiopia',
          'FK' => 'Falkland Islands(Malvinas)',
          'FO' => 'Faroe Islands',
          'FJ' => 'Fiji',
          'FI' => 'Finland',
          'FR' => 'France',
          'GF' => 'French Guiana',
          'PF' => 'French Polynesia',
          'TF' => 'French Southern Territories',
          'GA' => 'Gabon',
          'GM' => 'Gambia',
          'GE' => 'Georgia',
          'DE' => 'Germany',
          'GH' => 'Ghana',
          'GI' => 'Gibraltar',
          'GR' => 'Greece',
          'GL' => 'Greenland',
          'GD' => 'Grenada',
          'GP' => 'Guadeloupe',
          'GU' => 'Guam',
          'GT' => 'Guatemala',
          'GG' => 'Guernsey',
          'GN' => 'Guinea',
          'GW' => 'Guinea-Bissau',
          'GY' => 'Guyana',
          'HT' => 'Haiti',
          'HM' => 'Heard Island/Mcdonald Islands',
          'HN' => 'Honduras',
          'HK' => 'Hong Kong',
          'HU' => 'Hungary',
          'IS' => 'Iceland',
          'IN' => 'India',
          'ID' => 'Indonesia',
          'IR' => 'Iran',
          'IQ' => 'Iraq',
          'IE' => 'Ireland',
          'IM' => 'Isle Of Man',
          'IL' => 'Israel',
          'IT' => 'Italy',
          'JM' => 'Jamaica',
          'JP' => 'Japan',
          'JE' => 'Jersey',
          'JO' => 'Jordan',
          'KZ' => 'Kazakhstan',
          'KE' => 'Kenya',
          'KI' => 'Kiribati',
          'KW' => 'Kuwait',
          'KG' => 'Kyrgyzstan',
          'LA' => 'Lao',
          'LV' => 'Latvia',
          'LB' => 'Lebanon',
          'LS' => 'Lesotho',
          'LR' => 'Liberia',
          'LY' => 'Libyan Arab Jamahiriya',
          'LI' => 'Liechtenstein',
          'LT' => 'Lithuania',
          'LU' => 'Luxembourg',
          'MO' => 'Macao',
          'MK' => 'Macedonia',
          'MG' => 'Madagascar',
          'MW' => 'Malawi',
          'MY' => 'Malaysia',
          'MV' => 'Maldives',
          'ML' => 'Mali',
          'MT' => 'Malta',
          'MH' => 'Marshall Islands',
          'MQ' => 'Martinique',
          'MR' => 'Mauritania',
          'MU' => 'Mauritius',
          'YT' => 'Mayotte',
          'MX' => 'Mexico',
          'FM' => 'Micronesia',
          'MD' => 'Moldova',
          'MC' => 'Monaco',
          'MN' => 'Mongolia',
          'ME' => 'Montenegro',
          'MS' => 'Montserrat',
          'MA' => 'Morocco',
          'MZ' => 'Mozambique',
          'MM' => 'Myanmar',
          'NA' => 'Namibia',
          'NR' => 'Nauru',
          'NP' => 'Nepal',
          'NL' => 'Netherlands',
          'AN' => 'Netherlands Antilles',
          'NC' => 'New Caledonia',
          'NZ' => 'New Zealand',
          'NI' => 'Nicaragua',
          'NE' => 'Niger',
          'NG' => 'Nigeria',
          'NU' => 'Niue',
          'NF' => 'Norfolk Island',
          'KP' => 'North Korea',
          'MP' => 'Northern Mariana Islands',
          'NO' => 'Norway',
          'OM' => 'Oman',
          'PK' => 'Pakistan',
          'PW' => 'Palau',
          'PS' => 'Palestine',
          'PA' => 'Panama',
          'PG' => 'Papua New Guinea',
          'PY' => 'Paraguay',
          'PE' => 'Peru',
          'PH' => 'Philippines',
          'PN' => 'Pitcairn',
          'PL' => 'Poland',
          'PT' => 'Portugal',
          'PR' => 'Puerto Rico',
          'QA' => 'Qatar',
          'RE' => 'Réunion',
          'RO' => 'Romania',
          'RU' => 'Russian Federation',
          'RW' => 'Rwanda',
          'BL' => 'St. Barthélemy',
          'SH' => 'St. Helena',
          'KN' => 'St. Kitts/Nevis',
          'LC' => 'St. Lucia',
          'MF' => 'St. Martin',
          'PM' => 'St. Pierre/Miquelon',
          'VC' => 'St. Vincent/The Grenadines',
          'WS' => 'Samoa',
          'SM' => 'San Marino',
          'ST' => 'Sao Tome/Principe',
          'SA' => 'Saudi Arabia',
          'SN' => 'Senegal',
          'RS' => 'Serbia',
          'SC' => 'Seychelles',
          'SL' => 'Sierra Leone',
          'SG' => 'Singapore',
          'SK' => 'Slovakia',
          'SI' => 'Slovenia',
          'SB' => 'Solomon Islands',
          'SO' => 'Somalia',
          'ZA' => 'South Africa',
          'GS' => 'South Georgia/Sandwich Islands',
          'KR' => 'South Korea',
          'ES' => 'Spain',
          'LK' => 'Sri Lanka',
          'SD' => 'Sudan',
          'SR' => 'Suriname',
          'SJ' => 'Svalbard/Jan Mayen',
          'SZ' => 'Swaziland',
          'SE' => 'Sweden',
          'CH' => 'Switzerland',
          'SY' => 'Syrian Arab Republic',
          'TW' => 'Taiwan',
          'TJ' => 'Tajikistan',
          'TZ' => 'Tanzania',
          'TH' => 'Thailand',
          'TL' => 'Timor-Leste',
          'TG' => 'Togo',
          'TK' => 'Tokelau',
          'TO' => 'Tonga',
          'TT' => 'Trinidad And Tobago',
          'TN' => 'Tunisia',
          'TR' => 'Turkey',
          'TM' => 'Turkmenistan',
          'TC' => 'Turks/Caicos Islands',
          'TV' => 'Tuvalu',
          'UG' => 'Uganda',
          'UA' => 'Ukraine',
          'AE' => 'United Arab Emirates',
          'GB' => 'United Kingdom',
          'US' => 'United States of America',
          'UM' => 'United States Minor Islands',
          'UY' => 'Uruguay',
          'UZ' => 'Uzbekistan',
          'VU' => 'Vanuatu',
          'VA' => 'Vatican City State',
          'VE' => 'Venezuela',
          'VN' => 'Viet Nam',
          'VG' => '"Virgin Islands, British"',
          'VI' => '"Virgin Islands, U.S."',
          'WF' => 'Wallis/Futuna',
          'EH' => 'Western Sahara',
          'YE' => 'Yemen',
          'ZM' => 'Zambia',
          'ZW' => 'Zimbabwe',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the country where the site is located.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_network_country',
      'label' => 'Country',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '23',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_ilter_network_url'.
  $fields['node-site-field_ilter_network_url'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ilter_network_url',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter the Web Address for the site. The web address has two fields: <b>Web Address Title</b> and <b>Web Address URL</b>. The title might be: <b>Lago Maggiore Research Site</b> and the URL might be: <b>www.lagomaggiore.co.it</b>.  The <b>Web Address Title</b> is optional.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_network_url',
      'label' => 'Web Address',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'rel_remove' => 'default',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'title' => 'optional',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '24',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_images'.
  $fields['node-site-field_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_images',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'delete_on_parent_delete' => '',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'deleted' => '0',
      'description' => 'An image that shows the location where the research is conducted',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'flexslider_fields',
          'settings' => array(
            'caption' => 0,
            'image_style' => 'flexslider_full',
            'optionset' => 'flexslider_default_basic_carousel',
          ),
          'type' => 'flexslider',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_images',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'required_by_role' => array(),
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '54',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_infrastructure'.
  $fields['node-site-field_infrastructure'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_infrastructure',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'infrastructure',
            'parent' => '0',
          ),
        ),
        'delete_on_parent_delete' => '',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the infrastructure terms that are relevant to your site.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '116',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_infrastructure',
      'label' => 'Infrastructure',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => '10',
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_reference_tree',
        'settings' => array(
          'cascading_selection' => 0,
          'filter_view' => '',
          'leaves_only' => 0,
          'max_depth' => '',
          'parent_term_id' => '',
          'search' => 0,
          'select_parents' => 0,
          'start_minimized' => 0,
          'token_display' => '',
          'track_list' => 0,
        ),
        'type' => 'term_reference_tree',
        'weight' => '203',
      ),
    ),
  );

  // Exported field: 'node-site-field_infrastructure_tax'.
  $fields['node-site-field_infrastructure_tax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_infrastructure_tax',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'infrastructure',
            'parent' => '0',
          ),
        ),
        'delete_on_parent_delete' => '',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_infrastructure_tax',
      'label' => 'Infrastructure_tax',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_hs',
        'weight' => '204',
      ),
    ),
  );

  // Exported field: 'node-site-field_keywords'.
  $fields['node-site-field_keywords'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_keywords',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'lter_controlled_vocabulary',
            'parent' => '0',
          ),
        ),
        'delete_on_parent_delete' => '',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '112',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_keywords',
      'label' => 'Keywords',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_reference_tree',
        'settings' => array(
          'cascading_selection' => 0,
          'filter_view' => '',
          'leaves_only' => 0,
          'max_depth' => '',
          'parent_term_id' => '',
          'search' => 1,
          'select_parents' => 0,
          'start_minimized' => 1,
          'token_display' => '',
          'track_list' => 1,
        ),
        'type' => 'term_reference_tree',
        'weight' => '200',
      ),
    ),
  );

  // Exported field: 'node-site-field_metadata_provider'.
  $fields['node-site-field_metadata_provider'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_metadata_provider',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'views',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'view' => array(
            'args' => array(),
            'display_name' => 'entityreference_node_person_and_organization',
            'view_name' => 'entity_reference_selection',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 122,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_metadata_provider',
      'label' => 'Metadata Provider',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'allow_new' => 1,
            'delete_references' => 0,
            'label_plural' => 'nodes',
            'label_singular' => 'node',
            'match_operator' => 'CONTAINS',
            'override_labels' => 0,
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '232',
      ),
    ),
  );

  // Exported field: 'node-site-field_metadata_update_date'.
  $fields['node-site-field_metadata_update_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_metadata_update_date',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 123,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_metadata_update_date',
      'label' => 'Metadata Update Date',
      'required' => 1,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => 15,
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '233',
      ),
    ),
  );

  // Exported field: 'node-site-field_networks_term_ref'.
  $fields['node-site-field_networks_term_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_networks_term_ref',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'networks',
            'parent' => '0',
          ),
        ),
        'delete_on_parent_delete' => '',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '46',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_networks_term_ref',
      'label' => 'Networks (In addition to / Other than ILTER)',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_reference_tree',
        'settings' => array(
          'cascading_selection' => 0,
          'filter_view' => '',
          'leaves_only' => 0,
          'max_depth' => '',
          'parent_term_id' => '',
          'search' => 1,
          'select_parents' => 0,
          'start_minimized' => 0,
          'token_display' => '',
          'track_list' => 0,
        ),
        'type' => 'term_reference_tree',
        'weight' => '26',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_perm_power_loc'.
  $fields['node-site-field_perm_power_loc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_perm_power_loc',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'central station(s)' => 'central station(s)',
          'All over site/catchment' => 'All over site/catchment',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '72',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_perm_power_loc',
      'label' => 'Permanent Power Supply Location',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '213',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_person_contact'.
  $fields['node-site-field_person_contact'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_contact',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'views',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'view' => array(
            'args' => array(),
            'display_name' => 'entityreference_node_person_and_organization',
            'view_name' => 'entity_reference_selection',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Start type the name of the metadata provider and you will get suggestions of persons stored in the database. Start to type a name of the person you would like to insert here  If the PERSON you want is not listed, go to <a href="http://data.lter-europe.net/deims/node/add/person" target="_blank"> ADD Node</a> to add the person first before finishing the entry. Make sure to include email address and LTER National Network.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_contact',
      'label' => 'Site Contact',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'clone_button' => 0,
            'delete_references' => 0,
            'match_operator' => 'CONTAINS',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '21',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_precipitation_annual_ilter'.
  $fields['node-site-field_precipitation_annual_ilter'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_precipitation_annual_ilter',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Total annual precipitation in millimeters.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '30',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_precipitation_annual_ilter',
      'label' => 'Precipitation Annual ',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => 'mm',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '38',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_protection_prog_notes'.
  $fields['node-site-field_protection_prog_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_protection_prog_notes',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '50',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_protection_prog_notes',
      'label' => 'Protection Program Notes',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '55',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_purpose'.
  $fields['node-site-field_purpose'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_purpose',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'A short description that summarizes the purpose of the site.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '15',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_purpose',
      'label' => 'Purpose of site ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '53',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_research_topics'.
  $fields['node-site-field_research_topics'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_research_topics',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_research_topics',
      'label' => 'Research Topics',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '47',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_short_name'.
  $fields['node-site-field_short_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '3',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_short_name',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '100',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter either a site\'s short name  or acronym or other site name. These fields can be used to provide up to three names that have been used by the site in other networks or projects or are used for internal reference. Up to three can be entered. For example, in the US-LTER, the Virgina Coast Reserve site has an acronym of VCR.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '47',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_short_name',
      'label' => 'Short name ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '40',
        ),
        'type' => 'text_textfield',
        'weight' => '25',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_access_allyear'.
  $fields['node-site-field_site_access_allyear'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_access_allyear',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '60',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_access_allyear',
      'label' => 'Accessible All Year ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '206',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_access_type'.
  $fields['node-site-field_site_access_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_access_type',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'boat' => 'boat',
          'dirt road  (4WD)' => 'dirt road  (4WD)',
          'paved road' => 'paved road',
          'regular car' => 'regular car',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'What kind of vehicle is required to access the site?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '62',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_access_type',
      'label' => 'Access Type',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '208',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_allparts_access'.
  $fields['node-site-field_site_allparts_access'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_allparts_access',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '61',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_allparts_access',
      'label' => 'All parts of Site Accessible',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '207',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_biomeplus'.
  $fields['node-site-field_site_biomeplus'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_biomeplus',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Agricultural' => 'Agricultural',
          'Alpine' => 'Alpine',
          'Chaparral' => 'Chaparral',
          'Coastal' => 'Coastal',
          'Deciduous Forest' => 'Deciduous Forest',
          'Evergreen Forest' => 'Evergreen Forest',
          'Mixed Forest' => 'Mixed Forest',
          'Desert' => 'Desert',
          'Desert-scrub' => 'Desert-scrub',
          'Fresh Water Lakes' => 'Fresh Water Lakes',
          'Fresh Water Rivers' => 'Fresh Water Rivers',
          'Grasslands' => 'Grasslands',
          'Marine' => 'Marine',
          'Rainforest' => 'Rainforest',
          'Savanna' => 'Savanna',
          'Taiga' => 'Taiga',
          'Tundra' => 'Tundra',
          'Urban' => 'Urban',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'ILTER Extended Biome: Rough assignment at a global scale',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '32',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_biomeplus',
      'label' => 'ILTER Biome ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '229',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_data_notes'.
  $fields['node-site-field_site_data_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_data_notes',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please enter any other information about data management not covered',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '93',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_data_notes',
      'label' => 'Data Notes',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '134',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_dataacced'.
  $fields['node-site-field_site_dataacced'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_dataacced',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Free: free use under the specified terms of use 
Free upon request : terms of use are negotiated case by case, but the data are in principal free to use
Restricted: use of the data is only for either a restricted group or for restricted purposes. Terms of use are specified.
No: data are not free to use or fees are charged
other: please describe briefly',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '86',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_dataacced',
      'label' => 'Data Access Policy Education',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Free
Free upon request
Restricted
No',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '128',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_dataccadmin'.
  $fields['node-site-field_site_dataccadmin'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_dataccadmin',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '84',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_dataccadmin',
      'label' => 'Data Access Administration',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Free
Free upon request
Restricted
No',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '126',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_dataccres'.
  $fields['node-site-field_site_dataccres'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_dataccres',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Free: free use under the specified terms of use 
Free upon request : terms of use are negotiated case by case, but the data are in principal free to use
Restricted: use of the data is only for either a restricted group or for restricted purposes. Terms of use are specified.
No: data are not free to use or fees are charged	
other: describe briefly',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '87',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_dataccres',
      'label' => 'Data Access Policy Research ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Free
Free upon request
Restricted
No',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '125',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datacosted'.
  $fields['node-site-field_site_datacosted'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datacosted',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'indicate how the data costs are expected to be reimbursed
No cost: no costs are charged for the data exchange
Data manipulation cost: only data manipulation costs are charged to the user
Data creation costs: also costs of the data generation are charged to the user
other: please describe',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '90',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datacosted',
      'label' => 'Data Cost Education',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'No cost
Data manipulation costs
Data creation costs
No',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '132',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datacostres'.
  $fields['node-site-field_site_datacostres'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datacostres',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'other: please describe	
',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '91',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datacostres',
      'label' => 'Data Cost Research ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'No cost
Data manipulation costs
Data creation costs
No',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '133',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datacstadmin'.
  $fields['node-site-field_site_datacstadmin'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datacstadmin',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '88',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datacstadmin',
      'label' => 'Data Cost Administration ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Data manipulation costs
Data creation costs
No cost
',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '130',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datacstpub'.
  $fields['node-site-field_site_datacstpub'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datacstpub',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicate how the data costs are expected to be reimbursed
No: no costs are charged for the data exchange
Data manipulation cost: only data manipulation costs are charged to the user
Data creation costs: also costs of the data generation are charged to the user
Other: please describe',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '89',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datacstpub',
      'label' => 'Data Cost Public',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'No cost
Data manipulation costs
Data creation costs
No',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '131',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_dataformat'.
  $fields['node-site-field_site_dataformat'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_dataformat',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Paper' => 'Paper',
          'Prioprietary file format' => 'Prioprietary file format',
          'Relational Database' => 'Relational Database',
          'Spatial data file (GIS)' => 'Spatial data file (GIS)',
          'Spatial database (GIS)' => 'Spatial database (GIS)',
          'Structured file or spreadsheet' => 'Structured file or spreadsheet',
          'unstructured file' => 'unstructured file',
          'XML Database' => 'XML Database',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '82',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_dataformat',
      'label' => 'Data Storage Format ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '0',
        ),
        'type' => 'options_select',
        'weight' => '122',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datapolpubl'.
  $fields['node-site-field_site_datapolpubl'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datapolpubl',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Free: free use under the specified terms of use 
Free upon request : terms of use are negotiated case by case, but the data are in principal free to use
Restricted: use of the data is only for either a restricted group or for restricted purposes. Terms of use are specified.
No: data are not free to use or fees are charged
Other: please describe ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '85',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datapolpubl',
      'label' => 'Data Access Policy Public',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Free
Free upon request
Restricted
No',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '127',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datareq'.
  $fields['node-site-field_site_datareq'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datareq',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '92',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datareq',
      'label' => 'Data Request Format ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Offline (Mail or Telephone)
Online (Reference for access)',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '135',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_dataservi'.
  $fields['node-site-field_site_dataservi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '7',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_dataservi',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Data portal' => 'Data portal',
          'Web Catalog Service (CSW)' => 'Web Catalog Service (CSW)',
          'Web Feature Service (WFS)' => 'Web Feature Service (WFS)',
          'Web Map Service (WMS)' => 'Web Map Service (WMS)',
          'Web Coverage Service (WCS)' => 'Web Coverage Service (WCS)',
          'Sensor Web Enablement (SWE)' => 'Sensor Web Enablement (SWE)',
          'Other data service' => 'Other data service',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please select the services, if any, that your site uses, even if the data services are managed centrally (not at the physical site location). If you are using some other service, please describe it briefly. ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '83',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_dataservi',
      'label' => 'Data services ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '123',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datastorloc'.
  $fields['node-site-field_site_datastorloc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datastorloc',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Chose the relevant location type',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '80',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datastorloc',
      'label' => 'Data Storage Location ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Central
Distributed within institution
Distributed over multiple institutions',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '124',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_datastornum'.
  $fields['node-site-field_site_datastornum'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_datastornum',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please indicate the number of storage locations. Examples: 3',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '81',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_datastornum',
      'label' => 'Number of data storage locations ',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '1',
        'prefix' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '129',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_description'.
  $fields['node-site-field_site_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_description',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Include general information about your site that would be of interest to others.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'services_views',
          'settings' => array(),
          'type' => 'services',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_description',
      'label' => 'General Site Description',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ecostype1'.
  $fields['node-site-field_site_ecostype1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '3',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ecostype1',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the dominant ecosystem type as the first value. Add  second and third ecosystem types, if applicable, by clicking on Add Another.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '34',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ecostype1',
      'label' => 'Ecosystem Type(s) within site ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => '7',
          8 => 0,
          9 => 0,
          10 => '10',
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Tropical and subtropical moist broadleaf forests
Tropical and subtropical dry broadleaf forests
Tropical and subtropical coniferous forests
Temperate broadleaf and mixed forests
Temperate coniferous forests
Boreal forests/taiga
Tropical and subtropical grasslands, savannas, and shrublands
Temperate grasslands, savannas, and shrublands
Flooded grasslands and savannas
Montane grasslands and shrublands
Tundra
Mediterranean forests, woodlands, and scrub
Deserts and xeric shrublands
Mangroves
Large rivers
Large river headwaters
Large river deltas
Small rivers
Large lakes
Small lakes
Xeric basins
Polar
Temperate shelfs and seas
Temperate upwelling
Tropical upwelling
Tropical coral',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '230',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu__status_accred'.
  $fields['node-site-field_site_eu__status_accred'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu__status_accred',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Accredited formal LTER Site/ LTSER Platform' => 'Accredited formal LTER Site/ LTSER Platform',
          'Accredited potential LTER Site/ LTSER Platform' => 'Accredited potential LTER Site/ LTSER Platform',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Represents the determination by LTER-Europe of the status of the site. It is not modifiable by the site.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '42',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu__status_accred',
      'label' => 'Declaration status accredited by LTER-Europe (Read only)',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '100',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_biogeo_region'.
  $fields['node-site-field_site_eu_biogeo_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_biogeo_region',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Alpine' => 'Alpine',
          'Anatolian' => 'Anatolian',
          'Arctic' => 'Arctic',
          'Atlantic' => 'Atlantic',
          'Atlantic / Mediterranean' => 'Atlantic / Mediterranean',
          'Black Sea' => 'Black Sea',
          'Boreal' => 'Boreal',
          'Boreonemoral' => 'Boreonemoral',
          'Continental' => 'Continental',
          'Macronesia' => 'Macronesia',
          'Mediterranean' => 'Mediterranean',
          'Pannonian' => 'Pannonian',
          'Steppic' => 'Steppic',
          'sub-mediterranean' => 'sub-mediterranean',
          'Subalpine' => 'Subalpine',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '38',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_biogeo_region',
      'label' => 'Biogeographic Region',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => '10',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '98',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_classification'.
  $fields['node-site-field_site_eu_classification'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_classification',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Master Site' => 'Highly Instrumented Site',
          'Regular Site' => 'Regular Site',
          'Extensive Site' => 'Extensive Site',
          'Emerging Site' => 'Emerging Site',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Reflects the level of equipment, activities and topical breadth in an integrated way (see <a href="www.lter-europe.net/" target="_blank">www.lter-europe.net</a?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '44',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_classification',
      'label' => 'Site Classification/Category ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '97',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_declaration_status'.
  $fields['node-site-field_site_eu_declaration_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_declaration_status',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Formal LTER/LTSER' => 'Formal LTER/LTSER',
          'Potential LTER/LTSER' => 'Potential LTER/LTSER',
          'Candidate LTER/LTSER' => 'Candidate LTER/LTSER',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '41',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_declaration_status',
      'label' => 'Declaration Status requested by site holder',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '96',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_design_experiments'.
  $fields['node-site-field_site_eu_design_experiments'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_design_experiments',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'mainly experimentation' => 'mainly experimentation',
          'no experimentation' => 'no experimentation',
          'only experimentation' => 'only experimentation',
          'partly experimentation' => 'partly experimentation',
          'experimentation' => 'experimentation',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '57',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_design_experiments',
      'label' => 'Design of Experiments',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '98',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_design_observ'.
  $fields['node-site-field_site_eu_design_observ'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_design_observ',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'mainly observation' => 'mainly observation',
          'no observation of natural environment' => 'no observation of natural environment',
          'only observation' => 'only observation',
          'partly observation' => 'partly observation',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '55',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_design_observ',
      'label' => 'Design of Observation',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '95',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_design_scale'.
  $fields['node-site-field_site_eu_design_scale'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_design_scale',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'beyond catchment' => 'beyond catchment',
          'entire catchment' => 'entire catchment',
          'plot within catchment' => 'plot within catchment',
          'plot without link to explicit catchment' => 'plot without link to explicit catchment',
          'sub-catchment within catchment' => 'sub-catchment within catchment',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '54',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_design_scale',
      'label' => 'Scale of Observation',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '94',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_docume_status'.
  $fields['node-site-field_site_eu_docume_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_docume_status',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Basic documentation' => 'Basic documentation',
          'Full documentation' => 'Full documentation',
          'Minimum documentation' => 'Minimum documentation',
          'ILTER Required' => 'ILTER Required',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '95',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_docume_status',
      'label' => 'Documentation Status',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '98',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_enviro_zone'.
  $fields['node-site-field_site_eu_enviro_zone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_enviro_zone',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Alpine North' => 'Alpine North',
          'Alpine South' => 'Alpine South',
          'Anatolian' => 'Anatolian',
          'Atlantic Central' => 'Atlantic Central',
          'Atlantic North' => 'Atlantic North',
          'Boreal' => 'Boreal',
          'Continental' => 'Continental',
          'Lusitanian' => 'Lusitanian',
          'Mediterranean Mountain' => 'Mediterranean Mountain',
          'Mediterranean North' => 'Mediterranean North',
          'Mediterranean South' => 'Mediterranean South',
          'Nemoral' => 'Nemoral',
          'Pannonian' => 'Pannonian',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the Environmental Zone that most closely describes your site.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '39',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_enviro_zone',
      'label' => 'Environmental Zone',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '99',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_experiment_scale'.
  $fields['node-site-field_site_eu_experiment_scale'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_experiment_scale',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'beyond catchment scale' => 'beyond catchment scale',
          'catchment scale' => 'catchment scale',
          'micro sites' => 'micro sites',
          'plot scale' => 'plot scale',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '56',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_experiment_scale',
      'label' => 'Scale of Experiments',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '96',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_infobase_sitecode'.
  $fields['node-site-field_site_eu_infobase_sitecode'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_infobase_sitecode',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is a European infobase system site code',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '97',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_infobase_sitecode',
      'label' => 'Europe Infobase Sitecode  [for reference only]',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '102',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_notes'.
  $fields['node-site-field_site_eu_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_notes',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '96',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_notes',
      'label' => 'Site Notes',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '99',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_site_type'.
  $fields['node-site-field_site_eu_site_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_site_type',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'LTSER Platform' => 'LTSER Platform',
          'Complex Site' => 'Complex Site',
          'Simple Site' => 'Simple Site',
          'Plot' => 'Plot',
          'Sub Site' => 'Sub Site',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'These are LTER-Europe types. The definitions are:
LTSER Platform - observation region with up to 10.000km²
LTER Site - observation site with up to 10.000ha 
   complex site … more ecosystem types observed,   
   simple site ... one ecosystem type observed), 
Plot - observation plot within a site',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '43',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_site_type',
      'label' => 'Site Type  ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '95',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_expeer_classif'.
  $fields['node-site-field_site_expeer_classif'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_expeer_classif',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Highly Instrumented Observational Site' => 'Highly Instrumented Observational Site',
          'Highly Instrumented Observational AND Experimental Site' => 'Highly Instrumented Observational AND Experimental Site',
          'Highly Instrumented Experimental Site' => 'Highly Instrumented Experimental Site',
          'ECOTRON' => 'ECOTRON',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This field is relevant only to ExpeER sites.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '45',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_classif',
      'label' => 'ExpeER Classification ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '97',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_expeer_corine_class'.
  $fields['node-site-field_site_expeer_corine_class'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_expeer_corine_class',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Agro-forestry areas' => 'Agro-forestry areas',
          'Airports' => 'Airports',
          'Annual crops associated with permanent crops' => 'Annual crops associated with permanent crops',
          'Bare rocks' => 'Bare rocks',
          'Beaches, dunes, sands' => 'Beaches, dunes, sands',
          'Broad-leaved forest' => 'Broad-leaved forest',
          'Burnt areas' => 'Burnt areas',
          'Coastal lagoons' => 'Coastal lagoons',
          'Complex cultivation patterns' => 'Complex cultivation patterns',
          'Coniferous forest' => 'Coniferous forest',
          'Construction sites' => 'Construction sites',
          'Continuous urban fabric' => 'Continuous urban fabric',
          'Discontinuous urban fabric' => 'Discontinuous urban fabric',
          'Dump sites' => 'Dump sites',
          'Estuaries' => 'Estuaries',
          'Fruit trees and berry plantations' => 'Fruit trees and berry plantations',
          'Glaciers and perpetual snow' => 'Glaciers and perpetual snow',
          'Green urban areas' => 'Green urban areas',
          'Industrial or commercial units' => 'Industrial or commercial units',
          'Inland marshes' => 'Inland marshes',
          'Intertidal flats' => 'Intertidal flats',
          'Land principally occupied by agriculture, with significant areas of natural vegetation' => 'Land principally occupied by agriculture, with significant areas of natural vegetation',
          'Mineral extraction sites' => 'Mineral extraction sites',
          'Mixed forest' => 'Mixed forest',
          'Moors and heathland' => 'Moors and heathland',
          'Natural grasslands' => 'Natural grasslands',
          'Non-irrigated arable land' => 'Non-irrigated arable land',
          'Olive groves' => 'Olive groves',
          'Pastures' => 'Pastures',
          'Peat bogs' => 'Peat bogs',
          'Permanently irrigated land' => 'Permanently irrigated land',
          'Port areas' => 'Port areas',
          'Rice fields' => 'Rice fields',
          'Road and rail networks and associated land' => 'Road and rail networks and associated land',
          'Salines' => 'Salines',
          'Salt marshes' => 'Salt marshes',
          'Sclerophyllous vegetation' => 'Sclerophyllous vegetation',
          'Sea and ocean' => 'Sea and ocean',
          'Sparsely vegetated areas' => 'Sparsely vegetated areas',
          'Sport and leisure facilities' => 'Sport and leisure facilities',
          'Transitional woodland-shrub' => 'Transitional woodland-shrub',
          'Vineyards' => 'Vineyards',
          'Water bodies' => 'Water bodies',
          'Water courses' => 'Water courses',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '100',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_corine_class',
      'label' => 'Corine Land Classification',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '117',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_expeer_netmem'.
  $fields['node-site-field_site_expeer_netmem'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_expeer_netmem',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member if ExpeER Project',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '98',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_netmem',
      'label' => 'ExpeER Network',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '114',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_expeer_sitename'.
  $fields['node-site-field_site_expeer_sitename'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_expeer_sitename',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Achenkirch' => 'Achenkirch',
          'Apelsvoll' => 'Apelsvoll',
          'Beano' => 'Beano',
          'Biodiversity exploratories' => 'Biodiversity exploratories',
          'Bologna' => 'Bologna',
          'Braila Islands' => 'Braila Islands',
          'Donana' => 'Donana',
          'Ecosylve' => 'Ecosylve',
          'Eifel' => 'Eifel',
          'Fruska gora' => 'Fruska gora',
          'Grignon ' => 'Grignon ',
          'Harz/Central German Lowland' => 'Harz/Central German Lowland',
          'Hesse' => 'Hesse',
          'Hoglwald Forest ' => 'Hoglwald Forest ',
          'Hyytiala' => 'Hyytiala',
          'Jena' => 'Jena',
          'Klausenleopoldsdorf' => 'Klausenleopoldsdorf',
          'Lusignan' => 'Lusignan',
          'Montpellier Ecotron' => 'Montpellier Ecotron',
          'Moor House' => 'Moor House',
          'Negev' => 'Negev',
          'Pierroton  ' => 'Pierroton  ',
          'Plynlimon' => 'Plynlimon',
          'Puechabon' => 'Puechabon',
          'Roma-Lecceto “N”' => 'Roma-Lecceto “N”',
          'Roma-Lecceto “S”' => 'Roma-Lecceto “S”',
          'Rothamsted' => 'Rothamsted',
          'Seehornwald' => 'Seehornwald',
          'Silwood Park Ecotron ' => 'Silwood Park Ecotron ',
          'Tatra Windstorm' => 'Tatra Windstorm',
          'Tetto Frati' => 'Tetto Frati',
          'Therwil' => 'Therwil',
          'Tolfa-Allumiere' => 'Tolfa-Allumiere',
          'UHE-Hyde' => 'UHE-Hyde',
          'Whim' => 'Whim',
          'Zöbelboden' => 'Zöbelboden',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select  the ExpeER specific Site Name
',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '99',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '39',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_sitename',
      'label' => 'ExpeER Site Name',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '115',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_geobon_biome'.
  $fields['node-site-field_site_geobon_biome'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '5',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_geobon_biome',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Marine' => 'Marine',
          'Coastal' => 'Coastal',
          'Fresh water Lakes' => 'Fresh water Lakes',
          'Fresh water rivers' => 'Fresh water rivers',
          'Terrestrial' => 'Terrestrial',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Check all of the biomes that are represented in your site.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '33',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_geobon_biome',
      'label' => 'GEO-BON Biome',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '149',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_dat_trans_fro_typ'.
  $fields['node-site-field_site_inf_dat_trans_fro_typ'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_dat_trans_fro_typ',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'How is data transmitted from the site?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '74',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_dat_trans_fro_typ',
      'label' => 'Data Transmission From Site Type',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'No data transmission from site
telephone line
GMS/UMTS
radio transmission
radio transmission system (repeaters. receivers. centralstation)
satellite
cable based
others',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '215',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_data_transm_type'.
  $fields['node-site-field_site_inf_data_transm_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_data_transm_type',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the type of data transmission used at site (or enter other)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '73',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_data_transm_type',
      'label' => 'Data Transmission Type (within site)',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'No within site data transmission
telephone line
GMS/UMTS
radio transmission
radio transmission system (repeaters, receivers, centralstation)
radio transmission system (repeaters. receivers. centralstation)
satellite
cable based',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '214',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_lodging'.
  $fields['node-site-field_site_inf_lodging'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_lodging',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is there lodging at the site?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '68',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_lodging',
      'label' => 'Lodging at site',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '220',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_marine_platfm'.
  $fields['node-site-field_site_inf_marine_platfm'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_marine_platfm',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is there a marine platform connected with the site?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '66',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_marine_platfm',
      'label' => 'Marine Platform',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '218',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_meas_towr_loc'.
  $fields['node-site-field_site_inf_meas_towr_loc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_meas_towr_loc',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'No tower on site' => 'No tower on site',
          'in canopy' => 'in canopy',
          'less than 10 m above canopy' => 'less than 10 m above canopy',
          'more than 10 m above canopy' => 'more than 10 m above canopy',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => array(
        0 => array(
          'value' => 'No tower on site',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '65',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_meas_towr_loc',
      'label' => 'Measuring Tower Location',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '217',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_notes'.
  $fields['node-site-field_site_inf_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_notes',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please include any relevant infrastructure information not covered.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '59',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_notes',
      'label' => 'Infrastructure notes',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '222',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_numbr_of_beds'.
  $fields['node-site-field_site_inf_numbr_of_beds'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_numbr_of_beds',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please enter the number of beds at the site, examples: 1, 5, 10',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '69',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_numbr_of_beds',
      'label' => 'Number of beds at site',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '221',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_perm_power_prod'.
  $fields['node-site-field_site_inf_perm_power_prod'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_perm_power_prod',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Power supply: Maximum continuous power',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '71',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_perm_power_prod',
      'label' => 'Permanent Power Produced',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '<1 kW
1-5 kW
5-10 kW
10-100 kW
> 100 kW',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'available',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '212',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_perm_powersup'.
  $fields['node-site-field_site_inf_perm_powersup'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_perm_powersup',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Does you site have onsite generators or other backup power?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '70',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_perm_powersup',
      'label' => 'Permanent Power Supply',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '211',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_staff_room'.
  $fields['node-site-field_site_inf_staff_room'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_staff_room',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is there a staff room for office work at the site',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '67',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_staff_room',
      'label' => 'Staff room at site',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '219',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_temp_control_cont'.
  $fields['node-site-field_site_inf_temp_control_cont'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_temp_control_cont',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is there a temperature controlled central station for quality assured air chemistry measurements, data transmission, sample storage etc. ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '64',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_temp_control_cont',
      'label' => 'Temperature Controlled Container',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '216',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_inf_val'.
  $fields['node-site-field_site_inf_val'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_inf_val',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '>5000 k' => 'More than 5000 k',
          '2000-5000 k' => '2000-5000 k',
          '700-2000 k' => '700-2000 k',
          '100-700 k' => '100-700 k',
          '50-100 k' => '50-100 k',
          '<50 k' => 'Less than 50 k',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => array(
        0 => array(
          'value' => '<50 k',
        ),
      ),
      'deleted' => '0',
      'description' => 'Please provide the BEST ESTIMATION of the current value of the site\'s infrastructure. How much would all of the built infrastructure, equipment, etc. currently cost  to replace? A rough estimate is better than no information. Provide the value in euros.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '58',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_val',
      'label' => 'Value of the Infrastructure ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '205',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_infr_snow_clearng'.
  $fields['node-site-field_site_infr_snow_clearng'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_infr_snow_clearng',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is snow clearing equipment available at the site?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '63',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_infr_snow_clearng',
      'label' => 'Snow clearing Equipment ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '209',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_mgmnt_res_percent'.
  $fields['node-site-field_site_mgmnt_res_percent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_mgmnt_res_percent',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'How much of the site is used for the management of resources , for example, forestry, fishery',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '52',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_mgmnt_res_percent',
      'label' => 'Management of Resources - Percent of Site',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '0 - 25%
25 - 50%
50 - 75% 
75 - 100%',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '66',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_mgtres'.
  $fields['node-site-field_site_mgtres'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_mgtres',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Yes' => 'Yes',
          'No' => 'No',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is the site or parts of the site managed for resources such as forestry, fishery?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '51',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_mgtres',
      'label' => 'Management of Resources ',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '65',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_mgtres_notes'.
  $fields['node-site-field_site_mgtres_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_mgtres_notes',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '53',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_mgtres_notes',
      'label' => 'Management of Resources - Notes',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '68',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ops_cost'.
  $fields['node-site-field_site_ops_cost'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ops_cost',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Operational Budget in Euros.  Non European countries that want to use this field may enter an amount in another currency.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '75',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_cost',
      'label' => 'Operations Cost',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '<10 k 
10-30 k 
30-100 k 
100-300 k 
300-500 k 
>500 k ',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '121',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ops_ispermanent'.
  $fields['node-site-field_site_ops_ispermanent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ops_ispermanent',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is the site in permanent operation?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '78',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_ispermanent',
      'label' => 'Permanent Operation',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '122',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ops_maint_freq'.
  $fields['node-site-field_site_ops_maint_freq'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ops_maint_freq',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The interval in days that staff visit the site to perform maintenance tasks. For example, every <b>14</b> days.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '79',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '55',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_maint_freq',
      'label' => 'Maintenance Frequency',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => 'Every',
        'required_by_role' => array(),
        'suffix' => 'days',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '124',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ops_notes'.
  $fields['node-site-field_site_ops_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ops_notes',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please note here any additional information about operations',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '76',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '54',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_notes',
      'label' => 'Operation Notes',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '125',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ops_sampling_intr'.
  $fields['node-site-field_site_ops_sampling_intr'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ops_sampling_intr',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The interval in days that staff visit the site to collect sampling information.  For example, every <b>30</b> days.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '77',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '53',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_sampling_intr',
      'label' => 'Sampling Interval',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => 'Every',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ),
        'suffix' => 'days',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '123',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_params'.
  $fields['node-site-field_site_params'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_params',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '(Key) primary producers chemistry -- ' => '(Key) primary producers chemistry',
          '(Key) primary producers inventories -- ' => '(Key) primary producers inventories',
          '(Key) primary producers -- ' => '(Key) primary producers',
          'Air chemistry -- ' => 'Air chemistry',
          'Biodiversity of animals -- ' => 'Biodiversity of animals',
          'Biodiversity of microbes -- ' => 'Biodiversity of microbes',
          'Biodiversity of plants -- ' => 'Biodiversity of plants',
          'Biodiversity overall -- ' => 'Biodiversity overall',
          'Biodiversity, genetic -- ' => 'Biodiversity, genetic',
          'Biodiversity -- ' => 'Biodiversity',
          'Biomass -- ' => 'Biomass',
          'Biomass aquatic -- ' => 'Biomass aquatic',
          'Biomass terrestrial -- ' => 'Biomass terrestrial',
          'Carbon sequestration model and balance -- ' => 'Carbon sequestration model and balance',
          'Demography -- ' => 'Demography',
          'Deposition -- ' => 'Deposition',
          'Economic indicators -- ' => 'Economic indicators',
          'Ecosystem and habitat structure -- ' => 'Ecosystem and habitat structure',
          'Ecosystem management -- ' => 'Ecosystem management',
          'Ecosystem services -- ' => 'Ecosystem services',
          'Gas household -- ' => 'Gas household',
          'Ground water properties -- ' => 'Ground water properties',
          'Hydrological model and balance -- ' => 'Hydrological model and balance',
          'Hydrology -- ' => 'Hydrology',
          'Key fluxes of energy and matter within the system -- ' => 'Key fluxes of energy and matter within the system',
          'Land cover remote sensing -- ' => 'Land cover remote sensing',
          'Land cover terrestrial -- ' => 'Land cover terrestrial',
          'Land cover -- ' => 'Land cover',
          'Land use -- ' => 'Land use',
          'Meteorology and Climate -- ' => 'Meteorology and Climate',
          'Phenology -- ' => 'Phenology',
          'Sediments properties -- ' => 'Sediments properties',
          'Soil array measurements -- ' => 'Soil array measurements',
          'Soil properties -- ' => 'Soil properties',
          'Surface water properties -- ' => 'Surface water properties',
          'Terrain model -- ' => 'Terrain model',
          'Total nitrogen input -- ' => 'Total nitrogen input',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select as many parameters as are observed at your site.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '18',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_params',
      'label' => 'Site Parameters Observed',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '48',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_parentsite_ref'.
  $fields['node-site-field_site_parentsite_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_parentsite_ref',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'site' => 'site',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Site Code of the LTER Site or LTSER Platform to which your site belongs. A sub-site may be part of both a larger site which is contained in an LTSER platform.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '52',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_parentsite_ref',
      'label' => 'Parent Site Name',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '7',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_precip_max'.
  $fields['node-site-field_site_precip_max'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_precip_max',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Maximum monthly rainfall in millimeters.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '31',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_precip_max',
      'label' => 'Precipitation Maximum Monthly ',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => 'mm',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '39',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_precip_min'.
  $fields['node-site-field_site_precip_min'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_precip_min',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Minimum monthly rainfall in millimeters.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '29',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_precip_min',
      'label' => 'Precipitation Minimum Monthly ',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => 'mm',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '40',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_protection_prog_ref'.
  $fields['node-site-field_site_protection_prog_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_protection_prog_ref',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'protection_program' => 'protection_program',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '48',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_protection_prog_ref',
      'label' => 'Protection Program ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '53',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_protprgcover'.
  $fields['node-site-field_site_protprgcover'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_protprgcover',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '0 - 25%' => '0 - 25%',
          '25 - 50%' => '25 - 50%',
          '50 - 75%' => '50 - 75%',
          '75 - 100%' => '75 - 100%',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '49',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_protprgcover',
      'label' => 'Program Cover %',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '54',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_sitelong'.
  $fields['node-site-field_site_sitelong'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_sitelong',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '350',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the site\'s full name',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'services_views',
          'settings' => array(),
          'type' => 'services',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_sitelong',
      'label' => 'Site Name ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '200',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_size'.
  $fields['node-site-field_site_size'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_size',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '0',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'unit = hectare 1 hectare = 1 square kilometer /100 OR hectares = square kilometers X 100',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_size',
      'label' => 'Size ',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => 'ha',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '172',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_snow_clrng_freq'.
  $fields['node-site-field_site_snow_clrng_freq'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_snow_clrng_freq',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'daily' => 'daily',
          'weekly' => 'weekly',
          'monthly' => 'monthly',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'If you have snow clearing on a regular schedule, indicate the frequency',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '113',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '51',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_snow_clrng_freq',
      'label' => 'Snow Clearing Frequency',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '210',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_status'.
  $fields['node-site-field_site_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_status',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'existing' => 'existing',
          'abandoned' => 'abandoned',
          'preliminary' => 'preliminary',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the status of the site most appropriate',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_status',
      'label' => 'Site Status ',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '50',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_subsite_code_ref'.
  $fields['node-site-field_site_subsite_code_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_subsite_code_ref',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'site' => 'site',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Site name of the LTER Site(s) which belong to this LTER Site or LTSER Platform. For Platforms list only sites not sub sites',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_subsite_code_ref',
      'label' => 'Subsite Name',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '8',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_temp_max'.
  $fields['node-site-field_site_temp_max'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_temp_max',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Maximum monthly temperature in degrees Celsius',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '27',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_temp_max',
      'label' => 'Temperature Range (Monthly Maximum) TO	',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'suffix' => '°C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '169',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_temp_min'.
  $fields['node-site-field_site_temp_min'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_temp_min',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Minimum monthly temperature in degrees Celsius',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_temp_min',
      'label' => 'Temperature Range (Montly Minimum) FROM',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'suffix' => '°C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '167',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_soils'.
  $fields['node-site-field_soils'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_soils',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Describe the site\'s soils',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 119,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_soils',
      'label' => 'Soils',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '225',
      ),
    ),
  );

  // Exported field: 'node-site-field_taxa_ref'.
  $fields['node-site-field_taxa_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_taxa_ref',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'eck_taxa' => array(
          'columns' => array(
            'target_id' => 'id',
          ),
          'table' => 'eck_taxa',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'taxa' => 'taxa',
          ),
        ),
        'target_type' => 'taxa',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '115',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_taxa_ref',
      'label' => 'Taxa',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'clone_button' => 1,
            'delete_references' => 0,
            'match_operator' => 'CONTAINS',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '202',
      ),
    ),
  );

  // Exported field: 'node-site-field_temperature_average_annual'.
  $fields['node-site-field_temperature_average_annual'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_temperature_average_annual',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Average annual temperature in degree Celcius',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '28',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_temperature_average_annual',
      'label' => 'Temperature: Average Annual',
      'required' => 1,
      'settings' => array(
        'max' => '70',
        'min' => '-30',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => '°C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '165',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_upload_shapefile'.
  $fields['node-site-field_upload_shapefile'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_upload_shapefile',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'delete_on_parent_delete' => '',
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '22',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_upload_shapefile',
      'label' => 'Upload Shapefile',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'txt',
        'max_filesize' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '171',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_year'.
  $fields['node-site-field_year'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_year',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the year the site was established, not the year it became part of your network. Choose the year, when substantial data series where started and/or a system approach was established.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_year',
      'label' => 'Year Established',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '1800',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '49',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_year_closed'.
  $fields['node-site-field_year_closed'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_year_closed',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_year_closed',
      'label' => 'Year Site Closed',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(),
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '51',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'site_data-site_data-field_data_policy'.
  $fields['site_data-site_data-field_data_policy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_policy',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'site_data',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'site_data',
      'field_name' => 'field_data_policy',
      'label' => 'Data Policy',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'site_data-site_data-field_data_portal'.
  $fields['site_data-site_data-field_data_portal'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_portal',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'url',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'url',
    ),
    'field_instance' => array(
      'bundle' => 'site_data',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'url',
          'settings' => array(
            'nofollow' => FALSE,
            'trim_length' => 80,
          ),
          'type' => 'url_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'site_data',
      'field_name' => 'field_data_portal',
      'label' => 'Data Portal',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
        ),
        'title_fetch' => 0,
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'url',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'url_external',
        'weight' => '1',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'site_infrastructure-site_infrastructure-field_infrastructure_cost'.
  $fields['site_infrastructure-site_infrastructure-field_infrastructure_cost'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_infrastructure_cost',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'site_infrastructure',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'site_infrastructure',
      'field_name' => 'field_infrastructure_cost',
      'label' => 'Infrastructure Cost',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
        ),
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '1',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'site_infrastructure-site_infrastructure-field_permanent_power_supply'.
  $fields['site_infrastructure-site_infrastructure-field_permanent_power_supply'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_permanent_power_supply',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'site_infrastructure',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'site_infrastructure',
      'field_name' => 'field_permanent_power_supply',
      'label' => 'permanent power supply',
      'required' => 1,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '2',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A form automatically defines current date value either as a date stamp for metadate record creation or its update. ');
  t('A short description that summarizes the purpose of the site.');
  t('Access Type');
  t('Accessible All Year ');
  t('All parts of Site Accessible');
  t('An image that shows the location where the research is conducted');
  t('Average annual temperature in degree Celcius');
  t('Biogeographic Region');
  t('Check all of the biomes that are represented in your site.');
  t('Chose the relevant location type');
  t('Collected Datasets');
  t('Coordinates');
  t('Core Areas');
  t('Corine Land Classification');
  t('Country');
  t('Data Access Administration');
  t('Data Access Policy Education');
  t('Data Access Policy Public');
  t('Data Access Policy Research ');
  t('Data Cost Administration ');
  t('Data Cost Education');
  t('Data Cost Public');
  t('Data Cost Research ');
  t('Data Notes');
  t('Data Policy');
  t('Data Portal');
  t('Data Request Format ');
  t('Data Storage Format ');
  t('Data Storage Location ');
  t('Data Transmission From Site Type');
  t('Data Transmission Type (within site)');
  t('Data services ');
  t('Declaration Status Accredited by ILTER');
  t('Declaration Status requested by site holder');
  t('Declaration status accredited by LTER-Europe (Read only)');
  t('Describe the site\'s hydrology.');
  t('Describe the site\'s soils');
  t('Design of Experiments');
  t('Design of Observation');
  t('Documentation Status');
  t('Does you site have onsite generators or other backup power?');
  t('Ecosystem Type(s) within site ');
  t('Ecosystem and Land Use');
  t('Elevation - Average');
  t('Elevation Range FROM');
  t('Elevation Range TO');
  t('Enter either a site\'s short name  or acronym or other site name. These fields can be used to provide up to three names that have been used by the site in other networks or projects or are used for internal reference. Up to three can be entered. For example, in the US-LTER, the Virgina Coast Reserve site has an acronym of VCR.');
  t('Enter the Web Address for the site. The web address has two fields: <b>Web Address Title</b> and <b>Web Address URL</b>. The title might be: <b>Lago Maggiore Research Site</b> and the URL might be: <b>www.lagomaggiore.co.it</b>.  The <b>Web Address Title</b> is optional.');
  t('Environmental Zone');
  t('Eunis Habitat');
  t('Europe Infobase Sitecode  [for reference only]');
  t('ExpeER Classification ');
  t('ExpeER Network');
  t('ExpeER Site Name');
  t('Free Keywords');
  t('Free: free use under the specified terms of use 
Free upon request : terms of use are negotiated case by case, but the data are in principal free to use
Restricted: use of the data is only for either a restricted group or for restricted purposes. Terms of use are specified.
No: data are not free to use or fees are charged	
other: describe briefly');
  t('Free: free use under the specified terms of use 
Free upon request : terms of use are negotiated case by case, but the data are in principal free to use
Restricted: use of the data is only for either a restricted group or for restricted purposes. Terms of use are specified.
No: data are not free to use or fees are charged
Other: please describe ');
  t('Free: free use under the specified terms of use 
Free upon request : terms of use are negotiated case by case, but the data are in principal free to use
Restricted: use of the data is only for either a restricted group or for restricted purposes. Terms of use are specified.
No: data are not free to use or fees are charged
other: please describe briefly');
  t('GEO-BON Biome');
  t('General Site Description');
  t('Geo Bounding Box');
  t('Geology');
  t('How is data transmitted from the site?');
  t('How much of the site is used for the management of resources , for example, forestry, fishery');
  t('Hydrology');
  t('ILTER Biome ');
  t('ILTER Extended Biome: Rough assignment at a global scale');
  t('ILTER National Network');
  t('If you have snow clearing on a regular schedule, indicate the frequency');
  t('Image');
  t('In meters. above sea level is positive, below sea level is negative. For example: Mt Everest: 8848; Dead Sea: -423. Enter numbers only.');
  t('Include general information about your site that would be of interest to others.');
  t('Indicate how the data costs are expected to be reimbursed
No: no costs are charged for the data exchange
Data manipulation cost: only data manipulation costs are charged to the user
Data creation costs: also costs of the data generation are charged to the user
Other: please describe');
  t('Infrastructure');
  t('Infrastructure Cost');
  t('Infrastructure notes');
  t('Infrastructure_tax');
  t('Is snow clearing equipment available at the site?');
  t('Is the site in permanent operation?');
  t('Is the site or parts of the site managed for resources such as forestry, fishery?');
  t('Is there a marine platform connected with the site?');
  t('Is there a staff room for office work at the site');
  t('Is there a temperature controlled central station for quality assured air chemistry measurements, data transmission, sample storage etc. ');
  t('Is there lodging at the site?');
  t('Keywords');
  t('Lodging at site');
  t('Maintenance Frequency');
  t('Management of Resources ');
  t('Management of Resources - Notes');
  t('Management of Resources - Percent of Site');
  t('Marine Platform');
  t('Maximum monthly rainfall in millimeters.');
  t('Maximum monthly temperature in degrees Celsius');
  t('Measuring Tower Location');
  t('Member if ExpeER Project');
  t('Metadata Provider');
  t('Metadata Update Date');
  t('Minimum monthly rainfall in millimeters.');
  t('Minimum monthly temperature in degrees Celsius');
  t('Networks (In addition to / Other than ILTER)');
  t('Number of beds at site');
  t('Number of data storage locations ');
  t('Operation Notes');
  t('Operational Budget in Euros.  Non European countries that want to use this field may enter an amount in another currency.');
  t('Operations Cost');
  t('Parent Site Name');
  t('Permanent Operation');
  t('Permanent Power Produced');
  t('Permanent Power Supply');
  t('Permanent Power Supply Location');
  t('Please describe the geology of your site');
  t('Please enter any other information about data management not covered');
  t('Please enter the number of beds at the site, examples: 1, 5, 10');
  t('Please include any relevant infrastructure information not covered.');
  t('Please indicate the number of storage locations. Examples: 3');
  t('Please note here any additional information about operations');
  t('Please provide the BEST ESTIMATION of the current value of the site\'s infrastructure. How much would all of the built infrastructure, equipment, etc. currently cost  to replace? A rough estimate is better than no information. Provide the value in euros.');
  t('Please select the services, if any, that your site uses, even if the data services are managed centrally (not at the physical site location). If you are using some other service, please describe it briefly. ');
  t('Power supply: Maximum continuous power');
  t('Precipitation Annual ');
  t('Precipitation Maximum Monthly ');
  t('Precipitation Minimum Monthly ');
  t('Program Cover %');
  t('Protection Program ');
  t('Protection Program Notes');
  t('Purpose of site ');
  t('Reflects the level of equipment, activities and topical breadth in an integrated way (see <a href="www.lter-europe.net/" target="_blank">www.lter-europe.net</a?');
  t('Represents the determination by LTER-Europe of the status of the site. It is not modifiable by the site.');
  t('Research Topics');
  t('Sampling Interval');
  t('Scale of Experiments');
  t('Scale of Observation');
  t('Select  the ExpeER specific Site Name
');
  t('Select a national network');
  t('Select as many parameters as are observed at your site.');
  t('Select the Environmental Zone that most closely describes your site.');
  t('Select the dominant ecosystem type as the first value. Add  second and third ecosystem types, if applicable, by clicking on Add Another.');
  t('Select the infrastructure terms that are relevant to your site.');
  t('Select the status of the site most appropriate');
  t('Select the type of data transmission used at site (or enter other)');
  t('Select, at least, the dominant ecosystem or land use type. You may select as many terms as are appropriate.');
  t('Short name ');
  t('Site Classification/Category ');
  t('Site Code ');
  t('Site Code of the LTER Site or LTSER Platform to which your site belongs. A sub-site may be part of both a larger site which is contained in an LTSER platform.');
  t('Site Contact');
  t('Site Name ');
  t('Site Notes');
  t('Site Parameters Observed');
  t('Site Status ');
  t('Site Type  ');
  t('Site name of the LTER Site(s) which belong to this LTER Site or LTSER Platform. For Platforms list only sites not sub sites');
  t('Size ');
  t('Snow Clearing Frequency');
  t('Snow clearing Equipment ');
  t('Soils');
  t('Staff room at site');
  t('Start type the name of the metadata provider and you will get suggestions of persons stored in the database. Start to type a name of the person you would like to insert here  If the PERSON you want is not listed, go to <a href="http://data.lter-europe.net/deims/node/add/person" target="_blank"> ADD Node</a> to add the person first before finishing the entry. Make sure to include email address and LTER National Network.');
  t('Start typing a dataset title that is associated with this site. Keep adding datasets as needed.');
  t('Subsite Name');
  t('Taxa');
  t('Temperature Controlled Container');
  t('Temperature Range (Monthly Maximum) TO	');
  t('Temperature Range (Montly Minimum) FROM');
  t('Temperature: Average Annual');
  t('The interval in days that staff visit the site to collect sampling information.  For example, every <b>30</b> days.');
  t('The interval in days that staff visit the site to perform maintenance tasks. For example, every <b>14</b> days.');
  t('These are LTER-Europe types. The definitions are:
LTSER Platform - observation region with up to 10.000km²
LTER Site - observation site with up to 10.000ha 
   complex site … more ecosystem types observed,   
   simple site ... one ecosystem type observed), 
Plot - observation plot within a site');
  t('This field is relevant only to ExpeER sites.');
  t('This is a European infobase system site code');
  t('This is the country where the site is located.');
  t('This is the highest elevation in the site in meters.  Positive for meters above sea level, negative for meters below sea level. Examples: elevations at  mountain site - 8800, 8820, <b>8848</b>; Dead Sea, <b>-400</b>, -410, -424,
Highest Mountain: <b>8848</b>; Hightest Dead Sea: <b>-400</b>');
  t('This is the lowest elevation in the site in meters.  Positive for meters above sea level, negative for meters below sea level. Examples: elevations at  mountain site - <b>4800</b>, 8820, 8848</b>; Dead Sea, -400, -410, -<b>424</b>,
Lowest Mountain: <b>8800</b>; Lowest Dead Sea: <b>-424</b>');
  t('This is the site\'s full name');
  t('This is the year the site was established, not the year it became part of your network. Choose the year, when substantial data series where started and/or a system approach was established.');
  t('Total annual precipitation in millimeters.');
  t('Unique code for the LTER site. For LTER-Europe, the form is : LTER_EU_XX_YY(Y); For East Asia-Pacific: LTER_AP_XX_YY(Y); for North America: LTER_NAM_XX_YY(Y);  for South America: LTER_SAM_XX_YY(Y); for Southern Africa: LTER_SAF_XX_YY(Y);  where XX is the 2-letter country code and YY(Y) represents a number. Use (Y) for a subsite. Please make sure that the number is not used for any site in your country. You can check your exisiting code at <a href="http://data.lter-europe.net/deims/sitecode" target="_blank">http://data.lter-europe.net/deims/sitecode</a> <b> If you are part of the Critical Zones or Soiltrek Network,</b> then the format for your code is: CZO_EU_XX_YY(Y);  where XX is the 2-letter country code and YY(Y) represents a number. For example:  CZO_FR_01  or CZO_DE_02 or RBV_FR_100');
  t('Upload Shapefile');
  t('Value of the Infrastructure ');
  t('Web Address');
  t('What kind of vehicle is required to access the site?');
  t('Year Established');
  t('Year Site Closed');
  t('indicate how the data costs are expected to be reimbursed
No cost: no costs are charged for the data exchange
Data manipulation cost: only data manipulation costs are charged to the user
Data creation costs: also costs of the data generation are charged to the user
other: please describe');
  t('other: please describe	
');
  t('permanent power supply');
  t('unit = hectare 1 hectare = 1 square kilometer /100 OR hectares = square kilometers X 100');

  return $fields;
}
