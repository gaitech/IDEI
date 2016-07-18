<?php
/**
 * @file
 * impact_overview_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function impact_overview_page_node_info() {
  $items = array(
    'overview' => array(
      'name' => t('Overview'),
      'base' => 'node_content',
      'description' => t('Overview for all typs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
