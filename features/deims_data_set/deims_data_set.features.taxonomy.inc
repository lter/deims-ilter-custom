<?php
/**
 * @file
 * deims_data_set.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function deims_data_set_taxonomy_default_vocabularies() {
  return array(
    'enveurope_datapolicy' => array(
      'name' => 'EnvEurope Datapolicy',
      'machine_name' => 'enveurope_datapolicy',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
