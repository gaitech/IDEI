<?php
/**
 * @file
 * content_type_water_inner_pages.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_water_inner_pages_node_info() {
  $items = array(
    'water_inner_pages' => array(
      'name' => t('Water Inner Pages'),
      'base' => 'node_content',
      'description' => t('Water Innera Pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
