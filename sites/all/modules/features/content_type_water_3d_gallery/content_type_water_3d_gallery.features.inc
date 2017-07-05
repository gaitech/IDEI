<?php
/**
 * @file
 * content_type_water_3d_gallery.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_water_3d_gallery_node_info() {
  $items = array(
    'water_3d_gallery' => array(
      'name' => t('Water 3D Gallery'),
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
