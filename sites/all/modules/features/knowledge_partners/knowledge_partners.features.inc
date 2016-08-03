<?php
/**
 * @file
 * knowledge_partners.features.inc
 */

/**
 * Implements hook_views_api().
 */
function knowledge_partners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function knowledge_partners_node_info() {
  $items = array(
    'knowledge_partners' => array(
      'name' => t('Knowledge Partners'),
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
