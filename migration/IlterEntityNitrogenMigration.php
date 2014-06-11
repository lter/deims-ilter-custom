<?php

/**
 * @file
 * Definition of IlterEntityNitrogenMigration.
 */

class IlterEntityNitrogenMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->connection = Database::getConnection('default', 'drupal6');

    // Build the query for where this data is coming from.

    // 'field_research_site_long',
    //'field_research_site_elevavg',

    $query = $this->connection->select('content_type_nitrogen_data', 'ctn');
    $query->fields('ctn', array('nid','field_nitrogen_data_person_nid',
    'field_nitrogen_data_yearstart_value',
    'field_nitrogen_data_yearend_value','field_nitrogen_data_measource_value',
    'field_nitrogen_data_trends_value','field_nitrogen_data_unit_value',
    'field_nitrogen_data_mean_value','field_nitrogen_data_min_value',
    'field_nitrogen_data_max_value','field_nitrogen_data_median_value',
    'field_nitrogen_data_atndep_value','field_nitrogen_data_fertilizer_value',));
    $query->join('content_field_ilter_network_country', 'cfc', 'cfc.vid = ctn.vid');
    $query->fields('cfc', array('field_ilter_network_country_value'));

    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationEntityAPI('nitrogen_data_collection','nitrogen_data_collection');

    // Tell Migrate where the IDs for this migration live, and
    // where they should go.
    $source_key_schema = array(
      'nid' => array(
        'type' => 'int',
        'length' => 10,
        'not null' => TRUE,
        'alias' => 'ctn',
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema());

//    these should go to field_related_site or something
//    $this->addFieldMapping('field_research_site_long');
//    $this->addFieldMapping('','field_research_site_elevavg');

//   these should go to field_date_range
   $this->addFieldMapping('field_date_range','field_nitrogen_data_yearstart_value');
   $this->addFieldMapping('field_date_range:to','field_nitrogen_data_yearend');

//   there is a destination on 'creator' (field_related_site) and 'site' (field_related_site)
//
    $this->addFieldMapping('field_ilter_network_country','field_ilter_network_country_value');

    $this->addFieldMapping('field_person_creator','field_nitrogen_data_person_nid')
      ->sourceMigration('DeimsContentPerson');
    $this->addFieldMapping('field_n_source_monitored','field_nitrogen_data_measource_value');
    $this->addFieldMapping('field_n_temporal_trends','field_nitrogen_data_trends_value');
    $this->addFieldMapping('field_n_unit','field_nitrogen_data_unit_value');
    $this->addFieldMapping('field_n_concentration_avg','field_nitrogen_data_mean_value');
    $this->addFieldMapping('field_n_concentration_min','field_nitrogen_data_min_value');
    $this->addFieldMapping('field_n_concentration_max','field_nitrogen_data_max_value');
    $this->addFieldMapping('field_n_concentration_median','field_nitrogen_data_median_value');
    $this->addFieldMapping('field_n_atmosphrc_depostn','field_nitrogen_data_atndep_value');
    $this->addFieldMapping('field_n_fertilizer','field_nitrogen_data_fertilizer_value');

    $this->addUnmigratedDestinations(array(
      'path',
      'field_date_range:rrule',
      'field_date_range:timezone',
      'field_n_source_monitored:language',
      'field_n_temporal_trends:language',
      'field_n_unit:language',
      'field_related_publications',
    ));
  }
}
