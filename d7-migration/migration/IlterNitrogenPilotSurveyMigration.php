<?php
/**
* @file
* Definition of IlterNitrogenPilotSurveyMigration
*/
class IlterNitrogenPilotSurveyMigration extends DrupalNode7Migration {

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => 'Migrates laterally NPS to NPS',
      'source_connection' => 'drupal7',
      'source_version' => 7,
      'source_type' => 'nitrogen_pilot_survey',
      'destination_type' => 'nitrogen_pilot_survey',
    );
    parent::__construct($arguments);
//  make these nodes owned by uid=1
    $this->removeFieldMapping('uid');
    $this->addFieldMapping('uid')->defaultValue(1);

//  we do not want a body here.
    $this->removeFieldMapping('body');
//    $this->removeFieldMapping('body:summary');
//    $this->removeFieldMapping('body:format');

   $this->addUnmigratedSources(array(
     'body',
//     'body:format',
//     'body:summary',
     'field_upload_eml',	// Upload EML (count is zero)
     'revision',
     'revision_uid',
     'log',
     'uid',   // do not consider uids from source.

     'field_upload_data_paper_',	// Upload Data Paper  (unsure how to restric to these files)
     'field_upload_data_paper_:display',	//Upload Data Paper subfield
     'field_upload_data_paper_:description',	//Upload Data Paper subfield
     'field_upload_pdf',	//Upload PDF
     'field_upload_pdf:display',
     'field_upload_pdf:description',

//    unsure how to deal with these references - probably in prepare.
 
     'field_ilter_site',  //	ILTER Site (Paper)
     'field__ilter_site_data',	// ILTER Site - data

   ));
// mappings

   $this->addFieldMapping('field_paper_doi','field_paper_doi');   //	Paper DOI
   $this->addFieldMapping('field_ilter_person','field_ilter_person')
     ->description('Rerouted in prepareRow');
//   $this->addFieldMapping('field_upload_pdf','field_upload_pdf');	//Upload PDF
//   $this->addFieldMapping('field_upload_pdf:display','field_upload_pdf:display'); //	Upload PDF subfield

   $this->addSimpleMappings(array(
     'field_research_paper_available',	// Research Paper Available
     'field_data_available',  //	Data Available
     'field_eml_available',	// EML Available (Click if yes)
     'field_data_doi_url',	// Data DOI or Download URL
     'field_data_doi_url:title',	// Data DOI or Download URL subfield
     'field_data_doi_url:attributes', 	// Data DOI or Download URL subfield
     'field_join_synthesis_team_',	// Join Synthesis Team
     'field_new_research_theme',	//Are you interested in implementing actual observation in your site?
     'field_theme_paper',	// Theme of Paper
     'field_data_theme',
    ));

   $this->addUnmigratedDestinations(array(
     'field_upload_data_paper_',	// Upload Data Paper  -- cannot filter out nodes yet
     'field_upload_data_paper_:display',	//Upload Data Paper subfield
     'field_upload_data_paper_:description',	//Upload Data Paper subfield
     'field_upload_pdf',
     'field_upload_pdf:display',	//Upload PDF
     'field_upload_pdf:description',	//Upload PDF

     'field_upload_eml',	// Upload EML  count is zero

//    unsure how to deal with these references - probably in prepare. 
     'field_ilter_site',  //	ILTER Site (Paper)
     'field__ilter_site_data',	// ILTER Site - data

     'field_paper_doi:language',      // 	Subfield: Language for the field
     'field_upload_data_paper_:file_class',      // 	Option: Implementation of MigrateFile to use
     'field_upload_data_paper_:language',      // 	Subfield: Language for the field
     'field_upload_data_paper_:preserve_files',      // 	Option: Boolean indicating whether files should be preserved or deleted on rollback
     'field_upload_data_paper_:destination_dir',      // 	Subfield: Path within Drupal files directory to store file
     'field_upload_data_paper_:destination_file',      // 	Subfield: Path within destination_dir to store the file.
     'field_upload_data_paper_:file_replace',      // 	Option: Value of $replace in that file function. Defaults to FILE_EXISTS_RENAME.
     'field_upload_data_paper_:source_dir',      // 	Subfield: Path to source file.
     'field_upload_data_paper_:urlencode',      // 	Option: Encode all segments of the incoming path (defaults to TRUE).
     'field_upload_eml:file_class',      // 	Option: Implementation of MigrateFile to use
     'field_upload_eml:language',      // 	Subfield: Language for the field
     'field_upload_eml:preserve_files',      // 	Option: Boolean indicating whether files should be preserved or deleted on rollback
     'field_upload_eml:destination_dir',      // 	Subfield: Path within Drupal files directory to store file
     'field_upload_eml:destination_file',      // 	Subfield: Path within destination_dir to store the file.
     'field_upload_eml:file_replace',      // 	Option: Value of $replace in that file function. Defaults to FILE_EXISTS_RENAME.
     'field_upload_eml:source_dir',      // 	Subfield: Path to source file.
     'field_upload_eml:urlencode',      // 	Option: Encode all segments of the incoming path (defaults to TRUE).
     'field_upload_eml:description',      // 	Subfield: String to be used as the description value
     'field_upload_eml:display',      // 
     'field_upload_pdf:file_class',      // 	Option: Implementation of MigrateFile to use
     'field_upload_pdf:language',      // 	Subfield: Language for the field
     'field_upload_pdf:preserve_files',      // 	Option: Boolean indicating whether files should be preserved or deleted on rollback
     'field_upload_pdf:destination_dir',      // 	Subfield: Path within Drupal files directory to store file
     'field_upload_pdf:destination_file',      // 	Subfield: Path within destination_dir to store the file.
     'field_upload_pdf:file_replace',      // 	Option: Value of $replace in that file function. Defaults to FILE_EXISTS_RENAME.
     'field_upload_pdf:source_dir',      // 	Subfield: Path to source file.
     'field_upload_pdf:urlencode',	// Option: Encode all segments of the incoming path (defaults to TRUE).
   ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    //  do the prepare work
    //  PIs were already migrate by DeimsContentPerson.  Match the node, etc. 

    $node->field_ilter_person[LANGUAGE_NONE] = $this->getPerson($node, $row);

    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }

   public function getPerson($node, $row) {
    // query database here, match with $row element, return nid for this person, otherwise false.
    // Search for an already migrated person entity with the same title
    //   first, get the name of the Person from the source.
    $connection = Database::getConnection('default', $this->sourceConnection);
    $querysrc = $connection->select('node', 'n');
    $querysrc->condition('n.type', 'person');
    $querysrc->condition('n.nid', $row->{'field_ilter_person'});
    $querysrc->fields('n', array('title'));
    $row->person_name = $querysrc->execute()->fetchCol();
    //  now, get the Person nid in the dest. system.
    $field_values = array();
    if (!empty($row->field_ilter_person)) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'person');
      $query->propertyCondition('title', $row->{'person_name'},"LIKE");
      $results = $query->execute();
 
     if (!empty($results['node'])) {
       $field_values[] = array('target_id' => reset($results['node'])->nid);
     }
    }
    return $field_values;
  }
}
