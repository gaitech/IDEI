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

  $export['menu-menu-approach'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-approach',
    'module' => 'menu',
    'node_types' => array(),
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
        'region' => '',
        'status' => 0,
        'theme' => 'idei',
        'weight' => -24,
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
    'title' => 'IDEI\'s APPROACH',
    'visibility' => 0,
  );

  $export['menu-menu-programs'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-programs',
    'module' => 'menu',
    'node_types' => array(),
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
        'region' => '',
        'status' => 0,
        'theme' => 'idei',
        'weight' => -15,
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
    'title' => 'IDEI\'s AREA OF WORK',
    'visibility' => 0,
  );

  $export['menu-menu-water'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-water',
    'module' => 'menu',
    'node_types' => array(),
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
        'region' => '',
        'status' => 0,
        'theme' => 'idei',
        'weight' => 8,
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
    'title' => 'IDEI\'s TECHNOLOGY',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'options' => 'a:0:{}',
    'pages' => 'node/23',
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
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'idei',
        'weight' => -26,
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
    'visibility' => 1,
  );

  return $export;
}
