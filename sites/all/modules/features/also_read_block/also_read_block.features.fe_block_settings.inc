<?php
/**
 * @file
 * also_read_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function also_read_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-also_read_block-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'also_read_block-block',
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
