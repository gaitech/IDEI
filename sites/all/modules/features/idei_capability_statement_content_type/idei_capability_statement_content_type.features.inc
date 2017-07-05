<?php
/**
 * @file
 * idei_capability_statement_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function idei_capability_statement_content_type_node_info() {
  $items = array(
    'idei_capability_statement' => array(
      'name' => t('IDEI CAPABILITY STATEMENT'),
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
