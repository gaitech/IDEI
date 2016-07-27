<?php
/**
 * @file
 * content_type_archive_promotional_film.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_archive_promotional_film_node_info() {
  $items = array(
    'archive_promotional_and_thematic' => array(
      'name' => t('Archive : Promotional and Thematic Film'),
      'base' => 'node_content',
      'description' => t('Archive : Promotional and Thematic film'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
