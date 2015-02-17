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
   $this->addUnmigratedSources(array(
     'revision',
     'revision_uid',
     'log',
     'uid',   // do not consider uids from source.
   ));
// mappings

   $this->addFieldMapping('field_ilter_site','field_ilter_site');  //	ILTER Site (Paper)
   $this->addFieldMapping('field_paper_doi','field_paper_doi');   //	Paper DOI
   $this->addFieldMapping('field_upload_pdf','field_upload_pdf');	//Upload PDF
   $this->addFieldMapping('field_upload_pdf:display','field_upload_pdf:display'); //	Upload PDF subfield

/**field_upload_pdf:description	Upload PDF subfield
field_research_paper_available	Research Paper Available
field_data_available	Data Available
field__ilter_site_data	ILTER Site - data
field_eml_available	EML Available (Click if yes)
field_upload_eml	Upload EML
field_data_doi_url	Data DOI or Download URL
field_data_doi_url:title	Data DOI or Download URL subfield
field_data_doi_url:attributes	Data DOI or Download URL subfield
field_upload_data_paper_	Upload Data Paper
field_upload_data_paper_:display	Upload Data Paper subfield
field_upload_data_paper_:description	Upload Data Paper subfield
field_ilter_person	ILTER Person
field_join_synthesis_team_	Join Synthesis Team
field_new_research_theme	Are you interested in implementing actual observation in your site?
field_theme_paper	Theme of Paper
field_data_theme
*/

   $this->addUnmigratedDestinations(array(
     'body',
   ));
  }
  public function prepareRow($row) {
    parent::prepareRow($row);
  }
  public function prepare($node, $row) {
    //  do the prepare work
    //  PIs were already migrate by DeimsContentPerson.  Match the node, etc. 
    //  'field_related_people','field_res_summ_pi'
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
}
