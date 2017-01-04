<?php
/**
 * @file
 * impact_enviromental_page_.features.inc
 */

/**
 * Implements hook_views_api().
 */
function impact_enviromental_page__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function impact_enviromental_page__image_default_styles() {
  $styles = array();

  // Exported image style: graph_image.
  $styles['graph_image'] = array(
    'label' => 'Graph image',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 250,
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
function impact_enviromental_page__node_info() {
  $items = array(
    'impact_inner_pages' => array(
      'name' => t('Impact inner Pages'),
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
