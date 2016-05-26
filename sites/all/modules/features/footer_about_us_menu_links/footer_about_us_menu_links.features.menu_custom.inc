<?php
/**
 * @file
 * footer_about_us_menu_links.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_about_us_menu_links_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-about-us.
  $menus['menu-footer-about-us'] = array(
    'menu_name' => 'menu-footer-about-us',
    'title' => 'Footer about us',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer about us');

  return $menus;
}
