<?php
/**
 * @file
 * social_links_on_header.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function social_links_on_header_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-header_social_links'] = array(
    'cache' => -1,
    'css_class' => 'header-social-links',
    'custom' => 0,
    'machine_name' => 'header_social_links',
    'module' => 'block',
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
        'region' => 'social_links',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
