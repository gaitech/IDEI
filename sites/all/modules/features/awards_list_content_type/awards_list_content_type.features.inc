<?php
/**
 * @file
 * awards_list_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function awards_list_content_type_node_info() {
  $items = array(
    'awards_list' => array(
      'name' => t('Awards list'),
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
