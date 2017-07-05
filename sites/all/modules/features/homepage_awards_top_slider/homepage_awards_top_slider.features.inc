<?php
/**
 * @file
 * homepage_awards_top_slider.features.inc
 */

/**
 * Implements hook_views_api().
 */
function homepage_awards_top_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function homepage_awards_top_slider_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_awards_list
  $nodequeues['homepage_awards_list'] = array(
    'name' => 'homepage_awards_list',
    'title' => 'homepage awards list',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'homepage_awards_logo_and_slider',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
