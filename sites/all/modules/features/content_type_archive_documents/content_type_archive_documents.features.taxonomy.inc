<?php
/**
 * @file
 * content_type_archive_documents.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_archive_documents_taxonomy_default_vocabularies() {
  return array(
    'archive_document_category' => array(
      'name' => 'Archive : Document Category',
      'machine_name' => 'archive_document_category',
      'description' => 'Archive : Document Category',
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
