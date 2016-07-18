<?php
/**
 * @file
 * impact_overview_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function impact_overview_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-impact.
  $menus['menu-impact'] = array(
    'menu_name' => 'menu-impact',
    'title' => 'Impact',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Impact');

  return $menus;
}
