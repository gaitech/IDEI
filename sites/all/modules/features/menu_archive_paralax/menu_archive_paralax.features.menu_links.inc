<?php
/**
 * @file
 * menu_archive_paralax.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_archive_paralax_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-archive-_documents:<front>.
  $menu_links['menu-archive-_documents:<front>'] = array(
    'menu_name' => 'menu-archive-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-archive-_documents:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-archive-_film:<front>.
  $menu_links['menu-archive-_film:<front>'] = array(
    'menu_name' => 'menu-archive-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'FILM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-archive-_film:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-archive-_photographs:<front>.
  $menu_links['menu-archive-_photographs:<front>'] = array(
    'menu_name' => 'menu-archive-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Photographs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-archive-_photographs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-archive-_videos-:<front>.
  $menu_links['menu-archive-_videos-:<front>'] = array(
    'menu_name' => 'menu-archive-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Videos ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-archive-_videos-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('FILM');
  t('Photographs');
  t('Videos ');

  return $menu_links;
}
