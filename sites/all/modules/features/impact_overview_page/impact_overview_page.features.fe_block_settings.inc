<?php
/**
 * @file
 * impact_overview_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function impact_overview_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-impact'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-impact',
    'module' => 'menu',
    'node_types' => array(
      0 => 'impact_inner_pages',
    ),
    'options' => 'a:0:{}',
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'idei' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'idei',
        'weight' => -40,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
