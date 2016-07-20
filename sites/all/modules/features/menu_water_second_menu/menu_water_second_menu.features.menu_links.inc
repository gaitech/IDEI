<?php
/**
 * @file
 * menu_water_second_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_water_second_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-water-second-menu_media:<front>.
  $menu_links['menu-water-second-menu_media:<front>'] = array(
    'menu_name' => 'menu-water-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-water-second-menu_media:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-water-second-menu_publications:node/62.
  $menu_links['menu-water-second-menu_publications:node/62'] = array(
    'menu_name' => 'menu-water-second-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-water-second-menu_publications:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');
  t('Publications');

  return $menu_links;
}
