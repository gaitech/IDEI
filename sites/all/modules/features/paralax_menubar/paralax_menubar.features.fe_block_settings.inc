<?php
/**
 * @file
 * paralax_menubar.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function paralax_menubar_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['idei_custom-main_custom_menu'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main_custom_menu',
    'module' => 'idei_custom',
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
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'idei',
        'weight' => 0,
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
