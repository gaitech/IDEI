<?php
/**
 * @file
 * impact_enviromental_page_.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function impact_enviromental_page__default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-impact_inner_page-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'impact_inner_page-block',
    'module' => 'views',
    'node_types' => array(),
    'options' => NULL,
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
        'region' => '',
        'status' => 0,
        'theme' => 'idei',
        'weight' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
