<?php
/**
 * @file
 * ilter_sampling_area.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function ilter_sampling_area_field_default_fields() {
  $fields = array();

  // Exported field: 'sampling_description-sampling_description-field_sampdesc_description'.
  $fields['sampling_description-sampling_description-field_sampdesc_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sampdesc_description',
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
      'bundle' => 'sampling_description',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Describe a representative area where the dataset contents was sampled.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'sampling_description',
      'field_name' => 'field_sampdesc_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
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
        'weight' => '1',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'sampling_description-sampling_description-field_sampdesc_timespan'.
  $fields['sampling_description-sampling_description-field_sampdesc_timespan'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sampdesc_timespan',
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
      'bundle' => 'sampling_description',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select s frequency value from the list, if there is no such a value, use the other frequency value and type current one. ',
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
      'entity_type' => 'sampling_description',
      'field_name' => 'field_sampdesc_timespan',
      'label' => 'Sampling Time Span',
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
          'available_options' => '10Min|10 min
10-30Min|10-30 min
1-3TimesAYear(CommunitiesOfAnnuals)|1-3 times a year (communities of annuals)
2-3Monthly|2-3 monthly
3XPerYear|3 x per year
30Min|30 min
30MinAverages|30 min averages
30MinAverages;.|30 min averages;.
3-4SurveysPerYearDuringTheBreedingSeason|3-4 surveys per year during the breeding season
accordingToVegetationRelevés(BasedOnSpeciesListsFromFieldWorkWithSpeciesTraitDataBases)|According to vegetation relevés (based on species lists from field work with species trait data bases)
activeFluorescenceMinimumFrequencyOf5-15Minutes|Active fluorescence minimum frequency of 5-15 minutes
afterDisturbanceEvents|After disturbance events
annually|Annually
atLeast4SeasonalSurveys(WinterSpringSummerAutumn)|At least 4 seasonal surveys (winter, spring, summer, autumn)
atLeast5Surveys(DetectionOfAbout80%OfSpecies)Better7-10Surveys|At least 5 surveys (detection of about 80% of species), better 7-10 surveys
atLeastSeasonally|At least seasonally
biannually|Biannually
continual|Continual
daily|Daily
dailyOrMoreFrequent|Daily or more frequent
daytime:StartingAtSunrise|Daytime: starting at sunrise
DependingOnRiverTypeLongerIntervalsMayBeSufficient|Depending on river type, longer intervals may be sufficient
DependingOnTheRateOfChangeInLandUseInTheArea|Depending on the rate of change in land use in the area
every10Years|Every 10 years
every1-3Years|Every 1-3 years
every15Days|Every 15 days
every2Years|Every 2 years
every2-3Months|Every 2-3 months
every3Years(DependsOnDynamicsOfLandUseChangesAndCommunityChanges)|Every 3 years (depends on dynamics of land use changes and community changes)
every3-5Years|Every 3-5 years
every5Years|Every 5 years
every5-10Years|Every 5-10 years
everyFewYears|Every few years
fortnightly|Fortnightly
frequencyOfMeasurement|Frequency of measurement
hourly|Hourly
irregular|Irregular
monthly|Monthly
monthly(WaterLevel)|Monthly (water level)
periodically|Periodically
periodically(DependsOnTheObjective:YieldLevelProxyForTranspirationProxyForSiteFertilityNutrientStoragesNutrientExportCarbonStorage..)|Periodically (depends on the objective: yield level, proxy for transpiration, proxy for site fertility, nutrient storages, nutrient export, carbon storage,..)
pointTransect:5-10MinutesCountPerPoint|Point transect: 5-10 minutes count per point
quarterly|Quarterly
seasonally|Seasonally
subdaily|Subdaily
weekly|Weekly
yearly|Yearly
yearly(DependingOnVariationInPopulationSizes)|Yearly (depending on variation in population sizes)',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other frequency',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '2',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Describe a representative area where the dataset contents was sampled.');
  t('Description');
  t('Sampling Time Span');
  t('Select s frequency value from the list, if there is no such a value, use the other frequency value and type current one. ');

  return $fields;
}
