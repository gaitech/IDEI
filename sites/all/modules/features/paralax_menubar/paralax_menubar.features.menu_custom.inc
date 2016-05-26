<?php
/**
 * @file
 * paralax_menubar.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function paralax_menubar_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-approach.
  $menus['menu-approach'] = array(
    'menu_name' => 'menu-approach',
    'title' => 'Approach',
    'description' => '',
  );
  // Exported menu: menu-programs.
  $menus['menu-programs'] = array(
    'menu_name' => 'menu-programs',
    'title' => 'Programs',
    'description' => '',
  );
  // Exported menu: menu-water.
  $menus['menu-water'] = array(
    'menu_name' => 'menu-water',
    'title' => 'water',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Approach');
  t('Main menu');
  t('Programs');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('water');

  return $menus;
}
