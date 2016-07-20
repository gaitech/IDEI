<?php
/**
 * @file
 * menu_water_second_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_water_second_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-water-second-menu.
  $menus['menu-water-second-menu'] = array(
    'menu_name' => 'menu-water-second-menu',
    'title' => 'Water second menu',
    'description' => 'Water second menu for publication , media etc...',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Water second menu');
  t('Water second menu for publication , media etc...');

  return $menus;
}
