<?php
/**
 * @file
 * homepage_content_block_for_paralax.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_content_block_for_paralax_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "blockqueue" && $api == "default_blockqueues") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function homepage_content_block_for_paralax_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
