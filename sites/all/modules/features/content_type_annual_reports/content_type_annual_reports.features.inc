<?php
/**
 * @file
 * content_type_annual_reports.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_annual_reports_node_info() {
  $items = array(
    'annual_reports' => array(
      'name' => t('Annual Reports'),
      'base' => 'node_content',
      'description' => t('Display annual report listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
