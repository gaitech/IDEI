<?php
/**
 * @file
 * home_page_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function home_page_content_type_taxonomy_default_vocabularies() {
  return array(
    'home_page_category' => array(
      'name' => 'Home page category',
      'machine_name' => 'home_page_category',
      'description' => 'Home page category',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
