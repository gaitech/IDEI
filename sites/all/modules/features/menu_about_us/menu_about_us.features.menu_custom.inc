<?php
/**
 * @file
 * menu_about_us.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_about_us_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-us.
  $menus['menu-about-us'] = array(
    'menu_name' => 'menu-about-us',
    'title' => 'About Us',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');

  return $menus;
}
