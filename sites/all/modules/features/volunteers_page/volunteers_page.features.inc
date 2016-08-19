<?php
/**
 * @file
 * volunteers_page.features.inc
 */

/**
 * Implements hook_views_api().
 */
function volunteers_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function volunteers_page_node_info() {
  $items = array(
    'volunteers' => array(
      'name' => t('Volunteers'),
      'base' => 'node_content',
      'description' => t('Displays volunteers listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
