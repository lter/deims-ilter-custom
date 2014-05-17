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
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field__site_sitecode',
      'label' => 'Site Code [ILTER Core/Europe Mandatory 2013 Recognition]',
      'required' => 1,
      'settings' => array(
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
        'weight' => '2',
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
          'weight' => 62,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_collected_datasets_ref',
      'label' => 'Collected Datasets',
      'required' => 0,
      'settings' => array(
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
        'weight' => '84',
      ),
      'workbench_access_field' => 0,
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
          'weight' => 27,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date',
      'label' => 'Metadata Update Date',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
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
        'weight' => '29',
      ),
      'workbench_access_field' => 0,
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
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'field_ilter_national_network_nam:target_id',
            'type' => 'field',
          ),
          'target_bundles' => array(
            'ilter_national_network' => 'ilter_national_network',
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
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_national_network_nam',
      'label' => 'ILTER National Network Name [ILTER Core/Europe Mandatory 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '37',
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
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 18,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_network_country',
      'label' => 'Country [ILTER/Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '22',
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
          'weight' => 19,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ilter_network_url',
      'label' => 'Web Address [Europe Mandatory]',
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
        'weight' => '23',
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
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 34,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => '51',
      ),
      'workbench_access_field' => 0,
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
          'weight' => 26,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_networks_term_ref',
      'label' => 'Networks (In addition to / Other than ILTER)',
      'required' => 0,
      'settings' => array(
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
        'weight' => '27',
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
          'weight' => 47,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_perm_power_loc',
      'label' => 'Permanent Power Supply Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '69',
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
          'weight' => 17,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_contact',
      'label' => 'Site Contact',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 0,
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

  // Exported field: 'node-site-field_person_metadata_provider'.
  $fields['node-site-field_person_metadata_provider'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_metadata_provider',
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
      'description' => 'Start type the name of the metadata provider and you will get suggestions of persons stored in the database. Start to type a name of the person you would like to insert here  If the PERSON you want is not listed, go to <a href="http://data.lter-europe.net/deims/node/add/person" target="_blank"> ADD Person </a> to add the person first before finishing the entry. Make sure to include email address and LTER National Network.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 28,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_metadata_provider',
      'label' => 'Metadata provider',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 0,
            'clone_button' => 0,
            'delete_references' => 0,
            'match_operator' => 'CONTAINS',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '28',
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
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_precipitation_annual_ilter',
      'label' => 'Precipitation Annual [ILTER Core/Europe Mandatory 2013 Recognition]	',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
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
          'weight' => 36,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_protection_prog_notes',
      'label' => 'Protection Program Notes',
      'required' => 0,
      'settings' => array(
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
        'weight' => '57',
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
          'weight' => 32,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_purpose',
      'label' => 'Purpose of site [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
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
        'weight' => '50',
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
          'weight' => 20,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_short_name',
      'label' => 'Short name [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
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
        'weight' => '24',
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
          'weight' => 40,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_access_allyear',
      'label' => 'Accessible All Year [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '62',
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
          'weight' => 42,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_access_type',
      'label' => 'Access Type  [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '64',
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
          'weight' => 41,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_allparts_access',
      'label' => 'All parts of Site Accessible',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '63',
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
          'weight' => 13,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_biomeplus',
      'label' => 'ILTER Biome [ILTER Core/Europe Mandatory 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '34',
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
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_description',
      'label' => 'General Site Description [ILTER Core/Europe Mandatory 2013 Recognition]	',
      'required' => 0,
      'settings' => array(
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
        'weight' => '38',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ecostype1'.
  $fields['node-site-field_site_ecostype1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
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
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 14,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ecostype1',
      'label' => 'Dominant Ecosystem Type within site [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '2.1|Tropical and subtropical moist broadleaf forests
2.2|Tropical and subtropical dry broadleaf forests
2.3|Tropical and subtropical coniferous forests
2.4|Temperate broadleaf and mixed forests
2.5|Temperate coniferous forests
2.6|Boreal forests/taiga
2.7|Tropical and subtropical grasslands, savannas, and shrublands
2.8|Temperate grasslands, savannas, and shrublands
2.9|Flooded grasslands and savannas
2.10|Montane grasslands and shrublands
2.11|Tundra
2.12|Mediterranean forests, woodlands, and scrub
2.13|Deserts and xeric shrublands
2.14|Mangroves
3.1|Large rivers
3.2|Large river headwaters
3.3|Large river deltas
3.4|Small rivers
3.5|Large lakes
3.6|Small lakes
3.7|Xeric basins
4.1|Polar
4.2|Temperate shelfs and seas
4.3|Temperate upwelling
4.4|Tropical upwelling
4.5|Tropical coral
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
        'weight' => '35',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ecostype3'.
  $fields['node-site-field_site_ecostype3'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ecostype3',
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
      'description' => 'Third most important ecosystem type',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 16,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ecostype3',
      'label' => 'Additional Ecosystem Type 2 [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '2.1|Tropical and subtropical moist broadleaf forests
2.2|Tropical and subtropical dry broadleaf forests
2.3|Tropical and subtropical coniferous forests
2.4|Temperate broadleaf and mixed forests
2.5|Temperate coniferous forests
2.6|Boreal forests/taiga
2.7|Tropical and subtropical grasslands, savannas, and shrublands
2.8|Temperate grasslands, savannas, and shrublands
2.9|Flooded grasslands and savannas
2.10|Montane grasslands and shrublands
2.11|Tundra
2.12|Mediterranean forests, woodlands, and scrub
2.13|Deserts and xeric shrublands
2.14|Mangroves
3.1|Large rivers
3.2|Large river headwaters
3.3|Large river deltas
3.4|Small rivers
3.5|Large lakes
3.6|Small lakes
3.7|Xeric basins
4.1|Polar
4.2|Temperate shelfs and seas
4.3|Temperate upwelling
4.4|Tropical upwelling
4.5|Tropical coral
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
        'weight' => '37',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_ecosytype2'.
  $fields['node-site-field_site_ecosytype2'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_ecosytype2',
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
      'description' => 'Second most important ecosystem type',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 15,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ecosytype2',
      'label' => 'Additional Ecosystem Type 1 [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '2.1|Tropical and subtropical moist broadleaf forests
2.2|Tropical and subtropical dry broadleaf forests
2.3|Tropical and subtropical coniferous forests
2.4|Temperate broadleaf and mixed forests
2.5|Temperate coniferous forests
2.6|Boreal forests/taiga
2.7|Tropical and subtropical grasslands, savannas, and shrublands
2.8|Temperate grasslands, savannas, and shrublands
2.9|Flooded grasslands and savannas
2.10|Montane grasslands and shrublands
2.11|Tundra
2.12|Mediterranean forests, woodlands, and scrub
2.13|Deserts and xeric shrublands
2.14|Mangroves
3.1|Large rivers
3.2|Large river headwaters
3.3|Large river deltas
3.4|Small rivers
3.5|Large lakes
3.6|Small lakes
3.7|Xeric basins
4.1|Polar
4.2|Temperate shelfs and seas
4.3|Temperate upwelling
4.4|Tropical upwelling
4.5|Tropical coral
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
        'weight' => '36',
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
          'weight' => 64,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu__status_accred',
      'label' => 'Declaration status accredited by LTER-Europe (Read only)',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '86',
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
          'weight' => 73,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_biogeo_region',
      'label' => 'Biogeographic Region [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '6',
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
          'Master Site' => 'Master Site',
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
          'weight' => 70,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_classification',
      'label' => 'Site Classification/Category  [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '89',
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
          'weight' => 63,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_declaration_status',
      'label' => 'Declaration Status requested by site holder [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '85',
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
          'weight' => 68,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_design_experiments',
      'label' => 'Design of Experiments',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '90',
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
          'weight' => 66,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_design_observ',
      'label' => 'Design of Observation  [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '88',
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
          'weight' => 65,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_design_scale',
      'label' => 'Design Scale [Europe Mandatory for 2013 Recognition]	',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '87',
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
          'weight' => 71,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_docume_status',
      'label' => 'Documentation Status  [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '90',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_economic_density'.
  $fields['node-site-field_site_eu_economic_density'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_economic_density',
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
          1 => '1',
          2 => '2',
          3 => '3',
          4 => '4',
          'unknown' => 'unknown',
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
          'weight' => 75,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_economic_density',
      'label' => 'Economic Density (Metzger)',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '8',
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
          'weight' => 74,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_enviro_zone',
      'label' => 'Environmental Zone',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '7',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_eu_environ_zone_econ'.
  $fields['node-site-field_site_eu_environ_zone_econ'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_eu_environ_zone_econ',
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
          'weight' => 76,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_environ_zone_econ',
      'label' => 'Environmental Zone Economic Density (Metzger)',
      'required' => 0,
      'settings' => array(
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
        'weight' => '9',
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
          'weight' => 67,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_experiment_scale',
      'label' => 'Experiment scale  [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '89',
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
          'weight' => 77,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_infobase_sitecode',
      'label' => 'Europe Infobase Sitecode  [for reference only]',
      'required' => 0,
      'settings' => array(
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
        'weight' => '10',
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
          'weight' => 72,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_notes',
      'label' => 'Site Notes',
      'required' => 0,
      'settings' => array(
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
        'weight' => '91',
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
          'weight' => 69,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_eu_site_type',
      'label' => 'Site Type  [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '88',
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
          'weight' => 81,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_classif',
      'label' => 'ExpeER Classification  [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '8',
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
          'weight' => 82,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_corine_class',
      'label' => 'Corine Land Classification',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '9',
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
          'weight' => 79,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_netmem',
      'label' => 'ExpeER Network',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '6',
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
          'weight' => 80,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_expeer_sitename',
      'label' => 'ExpeER Site Name',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '7',
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
          'weight' => 78,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_geobon_biome',
      'label' => 'GEO-BON Biome',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '7',
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
          'weight' => 49,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_dat_trans_fro_typ',
      'label' => 'Data Transmission From Site Type [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
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
        'weight' => '71',
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
          'weight' => 48,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_data_transm_type',
      'label' => 'Data Transmission Type (within site)',
      'required' => 0,
      'settings' => array(
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
        'weight' => '70',
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
          'weight' => 54,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_lodging',
      'label' => 'Lodging at site',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '76',
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
          'weight' => 52,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_marine_platfm',
      'label' => 'Marine Platform [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '74',
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
          'weight' => 51,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_meas_towr_loc',
      'label' => 'Measuring Tower Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '73',
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
          'weight' => 56,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_notes',
      'label' => 'Infrastructure notes',
      'required' => 0,
      'settings' => array(
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
        'weight' => '78',
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
          'weight' => 55,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '77',
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
          'weight' => 46,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_perm_power_prod',
      'label' => 'Permanent Power Produced',
      'required' => 0,
      'settings' => array(
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
> 100 kW
not know, permantent cable to the mainland and backup generators
not know, permantent cable to the mainland and backup generators
not know, permantent cable to the mainland and backup generators
not know, permantent cable to the mainland and backup generators
not know, permantent cable to the mainland and backup generators
not know, permantent cable to the mainland and backup generators
Solar panels with back-up batteries, producing 15-150 Wh
weather and water chemistry has betteries and small separate power supply (for 30 min)
Different methods of power supply depending upon the specific site (e.g. solar panels, permanent cables, batteries)
Villages, local farms, research institutes and field stations are connected to the national network. Solar panels on towers.
power supply provided by the national compagny EDF on the whole region
power supply provided by the national compagny EDF on the whole region',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '68',
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
          'weight' => 45,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_perm_powersup',
      'label' => 'Permanent Power Supply [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '67',
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
          'weight' => 53,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_staff_room',
      'label' => 'Staff room at site',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '75',
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
          'weight' => 50,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_temp_control_cont',
      'label' => 'Temperature Controlled Container',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '72',
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
          '<50 k' => '<50 k',
          '100-700 k' => '100-700 k',
          '50-100 k' => '50-100 k',
          '700-2000 k' => '700-2000 k',
          '2000-5000 k' => '2000-5000 k',
          '>5000 k' => '>5000 k',
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
      'description' => 'Please provide the BEST ESTIMATION of the current value of the site\'s infrastructure. How much would all of the built infrastructure, equipment, etc. currently cost  to replace? A rough estimate is better than no information. Provide the value in euros.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 39,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_inf_val',
      'label' => 'Value of the Infrastructure  [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '61',
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
          'weight' => 43,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_infr_snow_clearng',
      'label' => 'Snow clearing Equipment [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
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
          'weight' => 37,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_mgmnt_res_percent',
      'label' => 'Management of Resources - Percent of Site',
      'required' => 0,
      'settings' => array(
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
        'weight' => '59',
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
          'weight' => 24,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_mgtres',
      'label' => 'Management of Resources [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '58',
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
          'weight' => 38,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_mgtres_notes',
      'label' => 'Management of Resources - Notes',
      'required' => 0,
      'settings' => array(
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
        'weight' => '60',
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
          'weight' => 57,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_cost',
      'label' => 'Operations Cost [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
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
        'weight' => '79',
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
          'weight' => 58,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_ispermanent',
      'label' => 'Permanent Operation [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '80',
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
          'weight' => 60,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'suffix' => 'days',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '82',
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
          'weight' => 61,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_notes',
      'label' => 'Operation Notes',
      'required' => 0,
      'settings' => array(
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
        'weight' => '83',
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
          'weight' => 59,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_ops_sampling_intr',
      'label' => 'Sampling Interval [Europe Mandatory]',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => 'Every',
        'suffix' => 'days',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '81',
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
          'weight' => 23,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_params',
      'label' => 'Site Parameters Observed [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '46',
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
          'weight' => 21,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_parentsite_ref',
      'label' => 'Parent Site ID',
      'required' => 0,
      'settings' => array(
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
        'weight' => '25',
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
          'weight' => 11,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
          'weight' => 12,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
          'weight' => 35,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_protection_prog_ref',
      'label' => 'Protection Program ',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '55',
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
          'weight' => 22,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_protprgcover',
      'label' => 'Program Cover %',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '56',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-site-field_site_resch_site_ref'.
  $fields['node-site-field_site_resch_site_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_site_resch_site_ref',
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
            'display_name' => 'entityreference_1',
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
      'description' => 'Add the Latitude, Longitude, Elevation, Soils, Geology, History, Vegetation and other location characteristics here',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_resch_site_ref',
      'label' => 'Geo, soils, fauna, history, etc',
      'required' => 0,
      'settings' => array(
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
        'weight' => '34',
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
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_sitelong',
      'label' => 'Site Name [ILTER Core/Europe Mandatory 2013 Recognition]',
      'required' => 1,
      'settings' => array(
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
        'weight' => '1',
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
      'description' => '1 hectare = 1 square kilometer /100 OR hectares = square kilometers X 100',
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
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_size',
      'label' => 'Size (in hectares) [ILTER Core/Europe Mandatory 2013 Recognition]	',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => '',
        'suffix' => 'ha',
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
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 44,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_snow_clrng_freq',
      'label' => 'Snow Clearing Frequency',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '66',
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
          'weight' => 30,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_status',
      'label' => 'Site Status [Europe Mandatory for 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '48',
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
      'description' => 'Site code of the LTER Site(s) which belong t5o this LTER Site or LTSER Platform.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 25,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_subsite_code_ref',
      'label' => 'Subsite code',
      'required' => 0,
      'settings' => array(
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
        'weight' => '26',
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
          'weight' => 9,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_temp_max',
      'label' => 'Temperature Monthly Maximum	',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '°C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '12',
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
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_site_temp_min',
      'label' => 'Temperature Monthly Minimum	',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '°C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '13',
      ),
      'workbench_access_field' => 0,
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
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_temperature_average_annual',
      'label' => 'Temperature: Average Annual [ILTER Core/Europe Mandatory 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'max' => '70',
        'min' => '-30',
        'prefix' => '',
        'suffix' => '°C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '11',
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
          'weight' => 29,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_year',
      'label' => 'Year Established [ILTER Core/Europe Mandatory 2013 Recognition]',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '1800',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '47',
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
          'weight' => 31,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('1 hectare = 1 square kilometer /100 OR hectares = square kilometers X 100');
  t('A form automatically defines current date value either as a date stamp for metadate record creation or its update. ');
  t('A short description that summarizes the purpose of the site.');
  t('Access Type  [Europe Mandatory]');
  t('Accessible All Year [Europe Mandatory]');
  t('Add the Latitude, Longitude, Elevation, Soils, Geology, History, Vegetation and other location characteristics here');
  t('Additional Ecosystem Type 1 [Europe Mandatory]');
  t('Additional Ecosystem Type 2 [Europe Mandatory]');
  t('All parts of Site Accessible');
  t('An image that shows the location where the research is conducted');
  t('Average annual temperature in degree Celcius');
  t('Biogeographic Region [Europe Mandatory for 2013 Recognition]');
  t('Check all of the biomes that are represented in your site.');
  t('Collected Datasets');
  t('Corine Land Classification');
  t('Country [ILTER/Europe Mandatory]');
  t('Data Transmission From Site Type [Europe Mandatory]');
  t('Data Transmission Type (within site)');
  t('Declaration Status requested by site holder [Europe Mandatory for 2013 Recognition]');
  t('Declaration status accredited by LTER-Europe (Read only)');
  t('Design Scale [Europe Mandatory for 2013 Recognition]	');
  t('Design of Experiments');
  t('Design of Observation  [Europe Mandatory]');
  t('Documentation Status  [Europe Mandatory for 2013 Recognition]');
  t('Does you site have onsite generators or other backup power?');
  t('Dominant Ecosystem Type within site [Europe Mandatory for 2013 Recognition]');
  t('Economic Density (Metzger)');
  t('Enter either a site\'s short name  or acronym or other site name. These fields can be used to provide up to three names that have been used by the site in other networks or projects or are used for internal reference. Up to three can be entered. For example, in the US-LTER, the Virgina Coast Reserve site has an acronym of VCR.');
  t('Enter the Web Address for the site. The web address has two fields: <b>Web Address Title</b> and <b>Web Address URL</b>. The title might be: <b>Lago Maggiore Research Site</b> and the URL might be: <b>www.lagomaggiore.co.it</b>.  The <b>Web Address Title</b> is optional.');
  t('Environmental Zone');
  t('Environmental Zone Economic Density (Metzger)');
  t('Europe Infobase Sitecode  [for reference only]');
  t('ExpeER Classification  [Europe Mandatory]');
  t('ExpeER Network');
  t('ExpeER Site Name');
  t('Experiment scale  [Europe Mandatory for 2013 Recognition]');
  t('GEO-BON Biome');
  t('General Site Description [ILTER Core/Europe Mandatory 2013 Recognition]	');
  t('Geo, soils, fauna, history, etc');
  t('How is data transmitted from the site?');
  t('How much of the site is used for the management of resources , for example, forestry, fishery');
  t('ILTER Biome [ILTER Core/Europe Mandatory 2013 Recognition]');
  t('ILTER Extended Biome: Rough assignment at a global scale');
  t('ILTER National Network Name [ILTER Core/Europe Mandatory 2013 Recognition]');
  t('If you have snow clearing on a regular schedule, indicate the frequency');
  t('Image');
  t('Include general information about your site that would be of interest to others.');
  t('Infrastructure notes');
  t('Is snow clearing equipment available at the site?');
  t('Is the site in permanent operation?');
  t('Is the site or parts of the site managed for resources such as forestry, fishery?');
  t('Is there a marine platform connected with the site?');
  t('Is there a staff room for office work at the site');
  t('Is there a temperature controlled central station for quality assured air chemistry measurements, data transmission, sample storage etc. ');
  t('Is there lodging at the site?');
  t('Lodging at site');
  t('Maintenance Frequency');
  t('Management of Resources - Notes');
  t('Management of Resources - Percent of Site');
  t('Management of Resources [Europe Mandatory for 2013 Recognition]');
  t('Marine Platform [Europe Mandatory]');
  t('Maximum monthly rainfall in millimeters.');
  t('Maximum monthly temperature in degrees Celsius');
  t('Measuring Tower Location');
  t('Member if ExpeER Project');
  t('Metadata Update Date');
  t('Metadata provider');
  t('Minimum monthly rainfall in millimeters.');
  t('Minimum monthly temperature in degrees Celsius');
  t('Networks (In addition to / Other than ILTER)');
  t('Number of beds at site');
  t('Operation Notes');
  t('Operational Budget in Euros.  Non European countries that want to use this field may enter an amount in another currency.');
  t('Operations Cost [Europe Mandatory]');
  t('Parent Site ID');
  t('Permanent Operation [Europe Mandatory for 2013 Recognition]');
  t('Permanent Power Produced');
  t('Permanent Power Supply Location');
  t('Permanent Power Supply [Europe Mandatory for 2013 Recognition]');
  t('Please enter the number of beds at the site, examples: 1, 5, 10');
  t('Please include any relevant infrastructure information not covered.');
  t('Please note here any additional information about operations');
  t('Please provide the BEST ESTIMATION of the current value of the site\'s infrastructure. How much would all of the built infrastructure, equipment, etc. currently cost  to replace? A rough estimate is better than no information. Provide the value in euros.');
  t('Power supply: Maximum continuous power');
  t('Precipitation Annual [ILTER Core/Europe Mandatory 2013 Recognition]	');
  t('Precipitation Maximum Monthly ');
  t('Precipitation Minimum Monthly ');
  t('Program Cover %');
  t('Protection Program ');
  t('Protection Program Notes');
  t('Purpose of site [Europe Mandatory]');
  t('Reflects the level of equipment, activities and topical breadth in an integrated way (see <a href="www.lter-europe.net/" target="_blank">www.lter-europe.net</a?');
  t('Represents the determination by LTER-Europe of the status of the site. It is not modifiable by the site.');
  t('Sampling Interval [Europe Mandatory]');
  t('Second most important ecosystem type');
  t('Select  the ExpeER specific Site Name
');
  t('Select a national network');
  t('Select as many parameters as are observed at your site.');
  t('Select the Environmental Zone that most closely describes your site.');
  t('Select the status of the site most appropriate');
  t('Select the type of data transmission used at site (or enter other)');
  t('Short name [Europe Mandatory for 2013 Recognition]');
  t('Site Classification/Category  [Europe Mandatory for 2013 Recognition]');
  t('Site Code [ILTER Core/Europe Mandatory 2013 Recognition]');
  t('Site Code of the LTER Site or LTSER Platform to which your site belongs. A sub-site may be part of both a larger site which is contained in an LTSER platform.');
  t('Site Contact');
  t('Site Name [ILTER Core/Europe Mandatory 2013 Recognition]');
  t('Site Notes');
  t('Site Parameters Observed [Europe Mandatory for 2013 Recognition]');
  t('Site Status [Europe Mandatory for 2013 Recognition]');
  t('Site Type  [Europe Mandatory for 2013 Recognition]');
  t('Site code of the LTER Site(s) which belong t5o this LTER Site or LTSER Platform.');
  t('Size (in hectares) [ILTER Core/Europe Mandatory 2013 Recognition]	');
  t('Snow Clearing Frequency');
  t('Snow clearing Equipment [Europe Mandatory]');
  t('Staff room at site');
  t('Start type the name of the metadata provider and you will get suggestions of persons stored in the database. Start to type a name of the person you would like to insert here  If the PERSON you want is not listed, go to <a href="http://data.lter-europe.net/deims/node/add/person" target="_blank"> ADD Node</a> to add the person first before finishing the entry. Make sure to include email address and LTER National Network.');
  t('Start type the name of the metadata provider and you will get suggestions of persons stored in the database. Start to type a name of the person you would like to insert here  If the PERSON you want is not listed, go to <a href="http://data.lter-europe.net/deims/node/add/person" target="_blank"> ADD Person </a> to add the person first before finishing the entry. Make sure to include email address and LTER National Network.');
  t('Start typing a dataset title that is associated with this site. Keep adding datasets as needed.');
  t('Subsite code');
  t('Temperature Controlled Container');
  t('Temperature Monthly Maximum	');
  t('Temperature Monthly Minimum	');
  t('Temperature: Average Annual [ILTER Core/Europe Mandatory 2013 Recognition]');
  t('The interval in days that staff visit the site to collect sampling information.  For example, every <b>30</b> days.');
  t('The interval in days that staff visit the site to perform maintenance tasks. For example, every <b>14</b> days.');
  t('These are LTER-Europe types. The definitions are:
LTSER Platform - observation region with up to 10.000km²
LTER Site - observation site with up to 10.000ha 
   complex site … more ecosystem types observed,   
   simple site ... one ecosystem type observed), 
Plot - observation plot within a site');
  t('Third most important ecosystem type');
  t('This field is relevant only to ExpeER sites.');
  t('This is a European infobase system site code');
  t('This is the site\'s full name');
  t('This is the year the site was established, not the year it became part of your network. Choose the year, when substantial data series where started and/or a system approach was established.');
  t('Total annual precipitation in millimeters.');
  t('Unique code for the LTER site. For LTER-Europe, the form is : LTER_EU_XX_YY(Y); For East Asia-Pacific: LTER_AP_XX_YY(Y); for North America: LTER_NAM_XX_YY(Y);  for South America: LTER_SAM_XX_YY(Y); for Southern Africa: LTER_SAF_XX_YY(Y);  where XX is the 2-letter country code and YY(Y) represents a number. Use (Y) for a subsite. Please make sure that the number is not used for any site in your country. You can check your exisiting code at <a href="http://data.lter-europe.net/deims/sitecode" target="_blank">http://data.lter-europe.net/deims/sitecode</a> <b> If you are part of the Critical Zones or Soiltrek Network,</b> then the format for your code is: CZO_EU_XX_YY(Y);  where XX is the 2-letter country code and YY(Y) represents a number. For example:  CZO_FR_01  or CZO_DE_02 or RBV_FR_100');
  t('Value of the Infrastructure  [Europe Mandatory]');
  t('Web Address [Europe Mandatory]');
  t('What kind of vehicle is required to access the site?');
  t('Year Established [ILTER Core/Europe Mandatory 2013 Recognition]');
  t('Year Site Closed');

  return $fields;
}
