<?php
/**
 * @file
 * homepage_paralax_blocks.features.inc
 */

/**
 * Implements hook_views_api().
 */
function homepage_paralax_blocks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function homepage_paralax_blocks_image_default_styles() {
  $styles = array();

  // Exported image style: krishak_bandhu_logo.
  $styles['krishak_bandhu_logo'] = array(
    'label' => 'krishak bandhu logo',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 85,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
