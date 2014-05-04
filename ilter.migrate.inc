<?php
/**
 * @file
 * Migrate module integration for the ILTER module.
 */
/**
 * Implements hook_migrate_api().
 */
function ilter_migrate_api() {
  $info = array(
    'api' => 2,
    'migrations' => array(
      'IlterContentCommittee' => array(
        'class_name' => 'IlterContentCommitteeMigration',
      ),
      'IlterContentILTERNationalNetwork' => array(
        'class_name' => 'IlterContentILTERNationalNetworkMigration',
      ),
      'IlterContentForum' => array(
        'class_name' => 'IlterContentForumMigration',
      ),
      'IlterTaxonomyForums' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Forums' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'source_vocabulary' => '7',
        'destination_vocabulary' => 'forums',
      ),
      'IlterTaxonomyILTERDiscipline' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'ILTER Discipline' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'source_vocabulary' => '2',
        'destination_vocabulary' => 'ilter_discipline',
      ),
      'IlterTaxonomyEnvThesOld' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'EnvThesOld' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'source_vocabulary' => '3',
        'destination_vocabulary' => 'envthesold',
      ),
      'IlterTaxonomyNetwork' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Network' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'source_vocabulary' => '5',
        'destination_vocabulary' => 'networks',
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
function ilter_deims_migration_overrides() {
  return array(
    'DeimsContentOrganization' => array('class_name' => 'IlterContentOrganizationMigration'),
    'DeimsContentPage' => array('class_name' => 'IlterContentPageMigration'),
    'DeimsContentPerson' => array('class_name' => 'IlterContentPersonMigration'),
    'DeimsFile' => array('class_name' => 'IlterFileMigration'),
  );
}
