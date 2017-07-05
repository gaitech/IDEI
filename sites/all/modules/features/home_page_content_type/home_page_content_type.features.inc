<?php
/**
 * @file
 * home_page_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function home_page_content_type_node_info() {
  $items = array(
    'front_page_content' => array(
      'name' => t('Home page content'),
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
