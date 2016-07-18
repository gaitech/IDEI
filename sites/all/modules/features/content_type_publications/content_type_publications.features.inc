<?php
/**
 * @file
 * content_type_publications.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_publications_node_info() {
  $items = array(
    'publications' => array(
      'name' => t('Publications'),
      'base' => 'node_content',
      'description' => t('Display listing of publications PDF'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
