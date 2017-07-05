<?php
/**
 * @file
 * impact_overview_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function impact_overview_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-impact_economic:<front>.
  $menu_links['menu-impact_economic:<front>'] = array(
    'menu_name' => 'menu-impact',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Economic',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-impact_economic:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-impact_enviromental:<front>.
  $menu_links['menu-impact_enviromental:<front>'] = array(
    'menu_name' => 'menu-impact',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Enviromental',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-impact_enviromental:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-impact_overview:<front>.
  $menu_links['menu-impact_overview:<front>'] = array(
    'menu_name' => 'menu-impact',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-impact_overview:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-impact_social:<front>.
  $menu_links['menu-impact_social:<front>'] = array(
    'menu_name' => 'menu-impact',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Social',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-impact_social:<front>',
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
  t('Economic');
  t('Enviromental');
  t('Overview');
  t('Social');

  return $menu_links;
}
