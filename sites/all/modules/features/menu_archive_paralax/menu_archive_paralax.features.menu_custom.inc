<?php
/**
 * @file
 * menu_archive_paralax.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_archive_paralax_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-archive-.
  $menus['menu-archive-'] = array(
    'menu_name' => 'menu-archive-',
    'title' => 'archive ',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('archive ');

  return $menus;
}
