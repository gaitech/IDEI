<?php
/**
 * @file
 * content_type_donors.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_donors_node_info() {
  $items = array(
    'donors' => array(
      'name' => t('Donors'),
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
