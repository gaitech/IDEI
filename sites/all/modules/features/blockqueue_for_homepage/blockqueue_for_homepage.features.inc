<?php
/**
 * @file
 * blockqueue_for_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blockqueue_for_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "blockqueue" && $api == "default_blockqueues") {
    return array("version" => "1");
  }
}
