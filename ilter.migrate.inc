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
      'IlterContentDataSet' => array(
        'class_name' => 'IlterContentDataSetMigration',
      ),
      'IlterEntityFreeKeyword' => array(
        'class_name' => 'IlterEntityFreeKeywordMigration',
      ),
      'IlterEntityNitrogen' => array(
        'class_name' => 'IlterEntityNitrogenMigration',
      ),
      'IlterEntitySampling' => array(
        'class_name' => 'IlterEntitySamplingMigration',
      ),
      'IlterEntityTaxa' => array(
        'class_name' => 'IlterEntityTaxaMigration',
      ),
      'IlterContentForum' => array(
        'class_name' => 'IlterContentForumMigration',
      ),
      'IlterContentProtectionProgram' => array(
        'class_name' => 'IlterContentProtectionProgramMigration',
      ),
      'IlterFieldCoordDataset' => array(
        'class_name' => 'IlterFieldsCoordDatasetMigration',
      ),
//      'IlterFieldCoordSite' => array(
//        'class_name' => 'IlterFieldsCoordSiteMigration',
//      ),
      'IlterContentILTERNationalNetwork' => array(
        'class_name' => 'IlterContentILTERNationalNetworkMigration',
      ),
      'IlterContentSite' => array(
        'class_name' => 'IlterContentSiteMigration',
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
      'IlterTaxonomyEnvThes3' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'EnvThesOld' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'source_vocabulary' => '11',
        'destination_vocabulary' => 'lter_controlled_vocabulary',
      ),
      'IlterTaxonomyEnvEuropeDataPolicy' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Env Eu. Policy' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        'source_vocabulary' => '1',
        'destination_vocabulary' => 'enveurope_datapolicy',
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
//    'DeimsContentDataSet' => array('class_name' => 'IlterContentDataSetMigration'),
    'DeimsContentOrganization' => array('class_name' => 'IlterContentOrganizationMigration'),
    'DeimsContentPage' => array('class_name' => 'IlterContentPageMigration'),
    'DeimsContentPerson' => array('class_name' => 'IlterContentPersonMigration'),
    'DeimsFile' => array('class_name' => 'IlterFileMigration'),
  );
}
