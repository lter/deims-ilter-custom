<?php
/**
 * @file
 * Definition of IlterContentDataSetMigration.
 */
class IlterContentDataSetMigration extends DrupalNode6Migration {
  protected $dependencies = array('DeimsContentDataFile', 'DeimsContentPerson', 'DeimsContentResearchSite');

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

[ vocabs ]

use "field_keywords":
field_dataset_keyw_env	Keyword originating from EnvEurope Thesaurus

free keys, make a field-set:
field_dataset_keyw	  Keyword
field_dataset_keyw_voca	  Vocabulary identification

create vocab:
1	EnvEurope_datapolicy

[ end vocabs ]

create field OR reuse related-links:
field_dataset_online_locator	Web address  255 nids
field_dataset_online_locator:title	Web address subfield
field_dataset_online_locator:attributes	Web address subfield

create OR reuse field:
field_dataset_online_function	Web address function  123 nids

=------...Real research site....can/should it be saved ----------
field_dataset_bbox	Bounding polygon coordinates 217 distinct nids

field_dataset_bbox_nc	North bound coordinate  125 nodes
field_dataset_bbox_sc	South bound coordinate  121  
field_dataset_bbox_wc	West bound coordinate  121
field_dataset_bbox_ec	East bound coordinate  125

field_dataset_altit_min	Minimum altitude 106  ( cardin. 1)
field_dataset_altit_max	Maximum altitude  119 

Create fields:
field_dataset_taxa_rankname	Level  50 nids
field_dataset_taxa_common	Common name 18 nids
field_dataset_taxa_scientific	Scientific name  23 nids 

create fields: this is taxonomy
field_dataset_access_use  Principal and granted permission  179 nids

create fields:
field_dataset_samp_freq	Sampling time span  (cardinlty 1)
field_dataset_sam_area_txt	Textual description (cardinlty 1)

method also has a URL create field:

field_dataset_method_title_url	Method
field_dataset_method_title_url:title	Method subfield
field_dataset_method_title_url:attributes	Method subfield

---woot-------------------------------------------
field_dataset_uuid	Metadata UUID

-- file field -> usually this goes in DataSource, but create field ------
field_dataset_uploaddata	Data file   9 paltry instances where fid>0
field_dataset_uploaddata:list	Data file subfield

--??--
field_dataset_site_name	Site name  599 nids?


DESTINATION UNMMAPED

field_core_areas	Core Areas (taxonomy_term_reference)
field_core_areas:source_type	Option: Set to 'tid' when the value is a source ID
--  we have no use for them Core Areas --   
field_keywords	Keywords (taxonomy_term_reference)
field_keywords:source_type	Option: Set to 'tid' when the value is a source ID

    $this->addFieldMapping('field_data_sources', 'field_dataset_datafile_ref')
      ->sourceMigration('DeimsContentDataFile')
      ->description('Possibly overridden in prepareRow().');

**/

    $this->addFieldMapping('field_data_set_id', 'field_dataset_id');
    $this->addFieldMapping('field_abstract', 'field_dataset_abstract');
    $this->addFieldMapping('field_abstract:format', 'field_dataset_abstract:format')
      ->callbacks(array($this, 'mapFormat'));
    //$this->addFieldMapping('field_core_areas', '1');
    $this->addFieldMapping('field_short_name', 'field_dataset_short_name');
    //$this->addFieldMapping('field_keywords', '9');

    $this->addFieldMapping('field_date','field_dataset_md_date');
  
    $this->addFieldMapping('field_language','field_dataset_lang')
     ->description('may have to use prepareRow');


    $this->addFieldMapping('field_related_links', 'field_dataset_related_links');
    $this->addFieldMapping('field_related_links:title', 'field_dataset_related_links:title');
    $this->addFieldMapping('field_related_links:attributes', 'field_dataset_related_links:attributes');
    $this->addFieldMapping('field_related_sites', 'field_dataset_site_ref')
      ->sourceMigration('DeimsContentResearchSite');
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

//  need to create field
    $this->addFieldMapping('field_url','field_dataset_keyw_env_voca');
    $this->addFieldMapping('field_url:title','field_dataset_keyw_env_voca:title');
    $this->addFieldMapping('field_url:attributes','field_dataset_keyw_env_voca:attributes');

    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
    ));

    $this->addUnmigratedDestinations(array(
      'field_data_sources',
      'field_data_set_id:language',
      'field_abstract:language',
      'field_short_name:language',
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
      'field_quality_assurance',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    // Fetch and prepare the variables field.
    $node->field_project_roles[LANGUAGE_NONE] = $this->getProjectRoles($node, $row);

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


}
