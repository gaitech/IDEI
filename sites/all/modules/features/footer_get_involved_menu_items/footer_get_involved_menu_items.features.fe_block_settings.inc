<?php
/**
 * @file
 * footer_get_involved_menu_items.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function footer_get_involved_menu_items_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-footer-get-involved'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-get-involved',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'idei' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'idei',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
