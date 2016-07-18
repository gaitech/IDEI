<?php
/**
 * @file
 * image_style_publication_listing_image.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_style_publication_listing_image_image_default_styles() {
  $styles = array();

  // Exported image style: publication_listing_image.
  $styles['publication_listing_image'] = array(
    'label' => 'Publication Listing Image',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
