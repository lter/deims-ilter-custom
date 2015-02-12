<?php
/**
 * @file
 * Migrate module integration for the D7 Migration module.
 */
/**
 * Implements hook_migrate_api().
 */
function d7_migration_migrate_api() {
  $info = array(
    'api' => 2,
    'groups' => array(
      ILTER_D7_MIGRATION_GROUP => array(
        'title' => t('ILTER Drupal 7 migration'),
      ),
    ),
    'migrations' => array(
      'IlterNitrogenPilotSurvey' => array(
        'class_name' => 'IlterNitrogenPilotSurveyMigration',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = ILTER_D7_MIGRATION_GROUP;
  }

  return $info;
}

