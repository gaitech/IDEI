<?php
/**
 * @file
 * footer_get_involved_menu_items.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_get_involved_menu_items_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-get-involved.
  $menus['menu-footer-get-involved'] = array(
    'menu_name' => 'menu-footer-get-involved',
    'title' => 'Footer get involved',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer get involved');

  return $menus;
}
