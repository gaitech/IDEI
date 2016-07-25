<?php
/**
 * @file
 * content_type_about_us.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_about_us_node_info() {
  $items = array(
    'about_us' => array(
      'name' => t('About Us'),
      'base' => 'node_content',
      'description' => t('display member listing About Us'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
