<?php
/**
 * @file
 * content_type_archive_documents.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_archive_documents_node_info() {
  $items = array(
    'archive_documents' => array(
      'name' => t('Archive : Documents'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
