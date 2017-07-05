<?php
/**
 * @file
 * conent_type_about_idei.features.inc
 */

/**
 * Implements hook_node_info().
 */
function conent_type_about_idei_node_info() {
  $items = array(
    'about_idei' => array(
      'name' => t('About IDEI'),
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
