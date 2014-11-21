<?php

/**
 * @file
 * Definition of IlterContentOrganizationMigration.
 */

class IlterContentOrganizationMigration extends DeimsContentOrganizationMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // Ilter uses a link field for field_person_organization that has a title
    // property, rather than a text field. So we need to rebuild the source
    // query.
    $query = $this->connection->select('content_type_person', 'ctp');
    $query->fields('ctp', array('nid', 'field_person_organization_value'));
    $query->condition('ctp.field_person_organization_value', '', '<>');
    $query->groupBy('field_person_organization_value');
    $this->source = new MigrateSourceSQL($query);

    // Remap the organization title to the link field's title value.
    $this->removeFieldMapping('title');
    $this->addFieldMapping('title', 'field_person_organization_value');
  }
  public function prepareRow($row) {
    parent::prepareRow($row);

    // Fix same organizations
    switch ($row->field_person_organization) {
      case 'Alfred Wegener Institute Helmholtz Centre for Polar and Marine Researcho':
        $row->field_person_organization='Alfred Wegener Institute Helmholtz Centre for Polar Research';
      case 'American Unversity of Madaba':
        $row->field_person_organization='American University of Madaba';
      case 'CEH':
        $row->field_person_organization='Centre for Ecology and Hydrology';
      case 'Centre for Ecology & Hydrology':
        $row->field_person_organization='Centre for Ecology and Hydrology';
      case 'CESAM & Aveiro University':
        $row->field_person_organization='CESAM / University of Aveiro';
      case 'CIBIO-UP':
        $row->field_person_organization='CIBIO - Research Center in Biodiversity and Genetic Resources, University of Porto';
      case 'CNR - ISMAR':
        $row->field_person_organization='CNR - Institute of Marine Science';
      case 'CNR-ISE':
        $row->field_person_organization='CNR Istituto Studio Ecosistemi';
      case 'Corpo forestale dello Stato (Italy)':
      case 'Corpo Forestale dell Stato':
        $row->field_person_organization='Corpo forestale dello Stato';
      case 'CREAF':
      case 'CREAF (Centre for Ecological Research and Forestry Applicaitons)':
        $row->field_person_organization='CREAF (Centre for Ecological Research and Forestry Applications)';
      case 'ILTER':
        $row->field_person_organization='International Long Term Ecological Research ILTER';
      case 'Retired - e-mail probably no longer valid':
        $row->field_person_organization=NULL;
      case 'Stazione Zoologica Anton Dohrn Napoli':
        $row->field_person_organization='Stazione Zoologica Anton Dohrn di Napoli';
      case 'Swedish University of Agricultural Sciences':
        $row->field_person_organization='Swedish University of Agricultural Sciences (SLU)';
      case 'University of Novi Sad, Faculty of Science, Department for Biology and Ecology':
        $row->field_person_organization='University of Novi Sad, Faculty of Sciences, Department of Biology and Ecology';
    }
  }
}
