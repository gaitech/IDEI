<?php
/**
 * @file
 * image_style_donors.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_style_donors_image_default_styles() {
  $styles = array();

  // Exported image style: donors.
  $styles['donors'] = array(
    'label' => 'donors',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 55,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
