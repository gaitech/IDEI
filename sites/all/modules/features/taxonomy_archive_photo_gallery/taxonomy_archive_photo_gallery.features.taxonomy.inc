<?php
/**
 * @file
 * taxonomy_archive_photo_gallery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_archive_photo_gallery_taxonomy_default_vocabularies() {
  return array(
    'archive_photo_gallery' => array(
      'name' => 'Archive Photo Gallery',
      'machine_name' => 'archive_photo_gallery',
      'description' => '',
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
