<?php
/**
 * @file
 * content_type_archive_promotional_film.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_archive_promotional_film_taxonomy_default_vocabularies() {
  return array(
    'archive_promotional_film' => array(
      'name' => 'Archive Promotional Film',
      'machine_name' => 'archive_promotional_film',
      'description' => 'Archive Promotional Film',
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
