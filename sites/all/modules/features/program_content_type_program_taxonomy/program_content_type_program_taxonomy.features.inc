<?php
/**
 * @file
 * program_content_type_program_taxonomy.features.inc
 */

/**
 * Implements hook_node_info().
 */
function program_content_type_program_taxonomy_node_info() {
  $items = array(
    'programms' => array(
      'name' => t('Programms'),
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
