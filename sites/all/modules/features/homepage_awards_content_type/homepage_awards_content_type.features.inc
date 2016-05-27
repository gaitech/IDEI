<?php
/**
 * @file
 * homepage_awards_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function homepage_awards_content_type_node_info() {
  $items = array(
    'homepage_awards_logo_and_slider' => array(
      'name' => t('Homepage Awards logo and slider'),
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
