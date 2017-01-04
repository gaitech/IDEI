<?php
/**
 * @file
 * also_read_block.features.inc
 */

/**
 * Implements hook_views_api().
 */
function also_read_block_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function also_read_block_image_default_styles() {
  $styles = array();

  // Exported image style: also_read_image.
  $styles['also_read_image'] = array(
    'label' => 'Also Read image',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 178,
          'height' => 78,
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
function also_read_block_node_info() {
  $items = array(
    'also_read_block' => array(
      'name' => t('Also Read Block'),
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
