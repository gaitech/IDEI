<?php
/**
 * @file
 * homepage_content_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_content_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "blockqueue" && $api == "default_blockqueues") {
    return array("version" => "1");
  }
}
