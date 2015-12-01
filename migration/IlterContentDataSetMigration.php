<?php
/**
 * @file
 * Definition of IlterContentDataSetMigration.
 */
class IlterContentDataSetMigration extends DrupalNode6Migration {
  protected $dependencies = array('DeimsContentPerson','IlterFieldCoordDataset','DeimsContentDataFile');

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'dataset',
      'destination_type' => 'data_set',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    // This content type does not have a body field.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:language');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');
    $this->addUnmigratedSources(array('body', 'teaser', 'format'));
/**

SOURCES UNMMAPED

-- this seems a good spot to use the "keywords" vocab?

field_dataset_keyw_env	K

free keys, make a field-set:
field_dataset_keyw	  Keyword
field_dataset_keyw_voca	  Vocabulary identification

create fields:
field_dataset_samp_freq	Sampling time span  (cardinlty 1)
field_dataset_sam_area_txt	Textual description (cardinlty 1)


    $this->addFieldMapping('field_data_sources', 'field_dataset_datafile_ref')
      ->sourceMigration('DeimsContentDataFile')
      ->description('Possibly overridden in prepareRow().');

**/
    $this->addFieldMapping('field_keywords','field_dataset_keyw_env')
      ->sourceMigration('IlterTaxonomyEnvThes3'); 
    $this->addFieldMapping('field_keywords:source_type')
      ->defaultValue('tid');
   
    $this->addFieldMapping('field_access_use_termref','field_dataset_access_use')
      ->sourceMigration('IlterTaxonomyEnvEuropeDataPolicy');
    $this->addFieldMapping('field_access_use_termref:source_type')
      ->defaultValue('tid');

    $this->addFieldMapping('field_data_set_id', 'field_dataset_id');
    $this->addFieldMapping('field_abstract', 'field_dataset_abstract');
    $this->addFieldMapping('field_abstract:format', 'field_dataset_abstract:format')
      ->callbacks(array($this, 'mapFormat'));

    //  $this->addFieldMapping('field_keywords', '9');  this got more interesting than usual
    

    $this->addFieldMapping('field_date','field_dataset_md_date');
  
    $this->addFieldMapping('field_language','field_dataset_lang')
     ->description('may have to use prepareRow');

    $this->addFieldMapping('field_dataset_site_name_ref','field_dataset_site_name')
     ->sourceMigration('IlterContentSite');

    $this->addFieldMapping('field_related_links', 'field_dataset_method_title_url');
    $this->addFieldMapping('field_related_links:title', 'field_dataset_method_title_url:title');
    $this->addFieldMapping('field_related_links:attributes', 'field_dataset_method_title_url:attributes');

    $this->addFieldMapping('field_related_sites','nid')
//     ->description('Migrate in prepare()');
     ->sourceMigration('IlterFieldCoordDataset');

    $this->addFieldMapping('field_methods', 'field_methods');
//    $this->addFieldMapping('field_methods:format', 'field_methods:format')
//      ->callbacks(array($this, 'mapFormat'));
    $this->addFieldMapping('field_instrumentation', 'field_instrumentation');
//    $this->addFieldMapping('field_instrumentation:format', 'field_instrumentation:format')
//      ->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_dataset_rights','field_dataset_rights');
    $this->addFieldMapping('field_dataset_legal','field_dataset_legal');

    $this->addFieldMapping('field_project_roles')
      ->description('Handled in prepare().');
    $this->addFieldMapping('field_date_range', 'field_beg_end_date');
    $this->addFieldMapping('field_date_range:to', 'field_beg_end_date:value2');
    $this->addFieldMapping('field_publication_date', 'field_dataset_publication_date');

    $this->addFieldMapping('field_person_creator', 'field_dataset_owner_ref')
      ->sourceMigration('DeimsContentPerson');
    $this->addFieldMapping('field_person_contact', 'field_dataset_contact_ref')
      ->sourceMigration('DeimsContentPerson');
    $this->addFieldMapping('field_person_metadata_provider','field_dataset_mdprovider_ref')
      ->sourceMigration('DeimsContentPerson');

    $this->addFieldMapping('field_taxa_ref','nid')
      ->sourceMigration('IlterEntityTaxa');
  
/**
      ->description('Handled in prepare()');
    $this->addFieldMapping('field_free_keywords_ref',NULL)
      ->description('Handled in prepare()');

    $this->addFieldMapping('field_area_sampling_ref',NULL)
      ->description('Handled in prepare()');
**/
    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
      'field_dataset_uuid',
      'field_dataset_method_title_url:title',
      'field_dataset_method_title_url:attributes',
      'field_dataset_keyw_env_voca',
      'field_dataset_keyw_env_voca:title',
      'field_dataset_keyw_env_voca:attributes',
    ));

    $this->addUnmigratedDestinations(array(
      'field_data_sources',
      'field_data_set_id:language',
      'field_abstract:language',
      'field_purpose:language',
      'field_additional_information:language',
      'field_related_links:language',
      'field_maintenance:language',
      'field_methods:language',
      'field_instrumentation:language',
      'field_quality_assurance:language',
      'field_doi',
      'field_doi:language',
      'field_eml_hash',
      'field_eml_hash:language',
      'field_eml_link',
      'field_eml_revision_id',
      'field_eml_valid',
      'field_person_publisher',
      'field_related_publications',
      'field_additional_information', 
      'field_additional_information:format', 
      'field_maintenance', 
      'field_maintenance:format', 
      'field_quality_assurance:format', 
      'field_methods:format', 
      'field_instrumentation:format', 
      'field_purpose', 
      'field_purpose:format',
      'field_date_range:timezone',
      'field_date_range:rrule',
      'field_date:timezone',
      'field_date:rrule',
      'field_date:to',
      'field_language:language',
      'field_dataset_rights:language',
      'field_dataset_legal:language',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_publication_date:timezone',
      'field_publication_date:rrule',
      'field_publication_date:to',
      'field_core_areas:create_term',
      'field_core_areas:ignore_case',
      'field_core_areas',
      'field_core_areas:source_type',
      'field_quality_assurance',
      'field_access_use_termref:create_term',
      'field_access_use_termref:ignore_case',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    // Fetch and prepare the variables field.
    $node->field_project_roles[LANGUAGE_NONE] = $this->getProjectRoles($node, $row);
 
   // Fetch and prepare the 
   // $node->field_dataset_taxa_ref[LANGUAGE_NONE] = $this->getTaxa($node, $row);

    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }

  public function getProjectRoles($node, $row) {
    $field_values = array();

    $roles = array(
      'field_dataset_datamanager_ref' => 'data manager',
      'field_dataset_fieldcrew_ref' => 'field crew',
      'field_dataset_labcrew_ref' => 'lab crew',
      'field_dataset_ext_assoc_ref' => 'associated researcher',
    );

    foreach ($roles as $field => $role) {
      if (!empty($row->{$field}) && $source_ids = array_filter($row->{$field})) {
        if ($user_ids = $this->handleSourceMigration('DeimsContentPerson', $source_ids)) {
          if (!is_array($user_ids)) {
            $user_ids = array($user_ids);
          }
          foreach ($user_ids as $user_id) {
            $entity = entity_create('project_role', array('type' => 'project_role', 'language' => $node->language));
            $wrapper = entity_metadata_wrapper('project_role', $entity);
            $wrapper->field_project_role = $role;
            $wrapper->field_related_person = $user_id;
            entity_save('project_role', $entity);
            $field_values[] = array('target_id' => $entity->id);
          }
        }
      }
    }

    return $field_values;
  }

/**
  public function getTaxa($node, $row) {
    $field_values = array();

    // Search for an already migrated organization entity with the same title
    // and link value.
    if (!empty($row->field_person_organization)) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'taxa');
      $query->entityCondition('bundle', 'taxa');
      $query->propertyCondition('title', $row->field_person_organization);
      $results = $query->execute();
      if (!empty($results['node'])) {
        $field_values[] = array('target_id' => reset($results['node'])->nid);
      }
    }

    return $field_values;
  }
**/
}
