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

  // Exported image style: prodect_landing_image.
  $styles['prodect_landing_image'] = array(
    'label' => 'Prodect landing image',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_listing.
  $styles['product_listing'] = array(
    'label' => 'product listing',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
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
