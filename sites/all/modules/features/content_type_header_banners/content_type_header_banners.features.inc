<?php
/**
 * @file
 * content_type_header_banners.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_header_banners_node_info() {
  $items = array(
    'header_banners' => array(
      'name' => t('Header Banners'),
      'base' => 'node_content',
      'description' => t('Content type for display Image on header with caption for Publications, Annual reports etc..'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
