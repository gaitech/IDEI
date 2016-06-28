<?php
/**
 * @file
 * products_content_type_image_style_product_listing_.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function products_content_type_image_style_product_listing__image_default_styles() {
  $styles = array();

  // Exported image style: product_listing.
  $styles['product_listing'] = array(
    'label' => 'product listing',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function products_content_type_image_style_product_listing__node_info() {
  $items = array(
    'products' => array(
      'name' => t('Products'),
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
