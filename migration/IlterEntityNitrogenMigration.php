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
    $query = $this->connection->select('content_type_nitrogen_data', 'ctn');
    $query->fields('ctn', array('nid','field_ilter_network_country',
    'field_ilter_network_country','field_research_site_long',
    'field_research_site_elevavg','field_nitrogen_data_yearstart',
    'field_nitrogen_data_yearend','field_nitrogen_data_measource',
    'field_nitrogen_data_trends','field_nitrogen_data_unit',
    'field_nitrogen_data_mean','field_nitrogen_data_min',
    'field_nitrogen_data_max','field_nitrogen_data_median',
    'field_nitrogen_data_atndep','field_nitrogen_data_fertilizer'));

    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationEntityAPI('nitrogen_data_collection','nitrogen_data_collection');

    // Tell Migrate where the IDs for this migration live, and
    // where they should go.
    $source_key_schema = array(
      'nid' => array(
        'type' => 'int',
        'length' => 10,
        'not null' => TRUE,
        'alias' => 'cfc',
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema());

//    these should go to field_related_site or something
//    $this->addFieldMapping('field_research_site_long');
//    $this->addFieldMapping('','field_research_site_elevavg');

//   these should go to field_date_range
//   $this->addFieldMapping('field_nitrogen_data_yearstart');
//   $this->addFieldMapping('field_nitrogen_data_yearend');

    $this->addFieldMapping('field_ilter_network_country','field_ilter_network_country');
    $this->addFieldMapping('field_n_source_monitored','field_nitrogen_data_measource');
    $this->addFieldMapping('field_n_temporal_trends','field_nitrogen_data_trends');
    $this->addFieldMapping('field_n_unit','field_nitrogen_data_unit');
    $this->addFieldMapping('field_n_concentration_avg','field_nitrogen_data_mean');
    $this->addFieldMapping('field_n_concentration_min','field_nitrogen_data_min');
    $this->addFieldMapping('field_n_concentration_max','field_nitrogen_data_max');
    $this->addFieldMapping('field_n_concentration_median','field_nitrogen_data_median');
    $this->addFieldMapping('field_n_atmosphrc_depostn','field_nitrogen_data_atndep');
    $this->addFieldMapping('field_n_fertilizer','field_nitrogen_data_fertilizer');

    $this->addUnmigratedDestinations(array(
      'path',
      'field_taxa_common:language',	
    ));
  }
}
