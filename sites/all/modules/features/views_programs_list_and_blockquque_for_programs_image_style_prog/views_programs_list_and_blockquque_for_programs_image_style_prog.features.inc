<?php
/**
 * @file
 * views_programs_list_and_blockquque_for_programs_image_style_prog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_programs_list_and_blockquque_for_programs_image_style_prog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "blockqueue" && $api == "default_blockqueues") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_programs_list_and_blockquque_for_programs_image_style_prog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
