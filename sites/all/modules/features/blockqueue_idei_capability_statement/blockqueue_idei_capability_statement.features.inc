<?php
/**
 * @file
 * blockqueue_idei_capability_statement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blockqueue_idei_capability_statement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "blockqueue" && $api == "default_blockqueues") {
    return array("version" => "1");
  }
}
