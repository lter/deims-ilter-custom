<?php
/**
 * @file
 * Migrate module integration for the ILTER module.
 */
/**
 * Implements hook_migrate_api().
 */
function ntl_migrate_api() {
  $info = array(
    'api' => 2,
    'migrations' => array(
//      'IlterContentILTERNationalNetwork' => array(
//        'class_name' => 'IlterContentILTERNationalNetworkMigration',
//      ),
      'IlterTaxonomyILTERDiscipline' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'ILTER Discipline' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'source_vocabulary' => '2',
        'destination_vocabulary' => 'ilter_discipline',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = DEIMS_D6_MIGRATION_GROUP;
  }

  return $info;
}

/**
 * Implements hook_deims_migration_overrides().
 */
function ntl_deims_migration_overrides() {
  return array(
//    'DeimsContentDataSet' => array('class_name' => 'IlterContentDataSetMigration'),
    'DeimsContentOrganization' => array('class_name' => 'IlterContentOrganizationMigration'),
//    'DeimsContentPerson' => array('class_name' => 'IlterContentPersonMigration'),
//    'DeimsFile' => array('class_name' => 'IlterFileMigration'),
  );
}
