<?php
/**
 * @file
 * content_type_archive_photo_graph.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_archive_photo_graph_node_info() {
  $items = array(
    'archive_photographs' => array(
      'name' => t('Archive Photographs'),
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
