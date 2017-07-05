<?php
/**
 * @file
 * content_type_approach_inner_pages.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_approach_inner_pages_node_info() {
  $items = array(
    'approach_inner_pages' => array(
      'name' => t('Approach Inner Pages'),
      'base' => 'node_content',
      'description' => t('Content type  for approach inner pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
