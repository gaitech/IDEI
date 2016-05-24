<?php
/**
 * @file
 * footer_get_involved_menu_items.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_get_involved_menu_items_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-get-involved_donate:<front>.
  $menu_links['menu-footer-get-involved_donate:<front>'] = array(
    'menu_name' => 'menu-footer-get-involved',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'donate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-get-involved_donate:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-get-involved_fundraise:<front>.
  $menu_links['menu-footer-get-involved_fundraise:<front>'] = array(
    'menu_name' => 'menu-footer-get-involved',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'fundraise',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-get-involved_fundraise:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-get-involved_volunteer:<front>.
  $menu_links['menu-footer-get-involved_volunteer:<front>'] = array(
    'menu_name' => 'menu-footer-get-involved',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'volunteer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-get-involved_volunteer:<front>',
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
  t('donate');
  t('fundraise');
  t('volunteer');

  return $menu_links;
}
