<?php
/**
 * @file
 * home_page_media.features.inc
 */

/**
 * Implements hook_node_info().
 */
function home_page_media_node_info() {
  $items = array(
    'media' => array(
      'name' => t('Media'),
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
