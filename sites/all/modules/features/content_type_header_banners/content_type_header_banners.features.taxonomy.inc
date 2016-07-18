<?php
/**
 * @file
 * content_type_header_banners.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_header_banners_taxonomy_default_vocabularies() {
  return array(
    'header_banner_category' => array(
      'name' => 'Header Banner Category',
      'machine_name' => 'header_banner_category',
      'description' => 'Select header banner category',
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
