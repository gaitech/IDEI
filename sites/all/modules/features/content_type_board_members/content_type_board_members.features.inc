<?php
/**
 * @file
 * content_type_board_members.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_board_members_node_info() {
  $items = array(
    'board_members' => array(
      'name' => t('Board Members'),
      'base' => 'node_content',
      'description' => t('Board Members'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
