<?php
/**
 * @file
 * footer_resourse_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_resourse_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-resources.
  $menus['menu-footer-resources'] = array(
    'menu_name' => 'menu-footer-resources',
    'title' => 'Footer resources',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer resources');

  return $menus;
}
