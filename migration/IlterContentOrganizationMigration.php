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
}
