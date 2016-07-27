<?php
/**
 * @file
 * content_type_archive_farmer_success_stories.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_archive_farmer_success_stories_node_info() {
  $items = array(
    'archive_farmers_success_stories' => array(
      'name' => t('Archive : Farmers success stories'),
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
