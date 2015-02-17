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
