<?php
/**
 * @file
 * global_networking_platforms.features.inc
 */

/**
 * Implements hook_views_api().
 */
function global_networking_platforms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function global_networking_platforms_node_info() {
  $items = array(
    'global_networking_platforms' => array(
      'name' => t('Global Networking Platforms'),
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
