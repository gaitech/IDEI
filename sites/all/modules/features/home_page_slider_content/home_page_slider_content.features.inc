<?php
/**
 * @file
 * home_page_slider_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function home_page_slider_content_node_info() {
  $items = array(
    'slide_show' => array(
      'name' => t('Slide show'),
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
