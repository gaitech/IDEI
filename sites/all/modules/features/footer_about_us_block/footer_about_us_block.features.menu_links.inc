<?php
/**
 * @file
 * footer_about_us_block.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_about_us_block_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-about-us_financials:<front>.
  $menu_links['menu-footer-about-us_financials:<front>'] = array(
    'menu_name' => 'menu-footer-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'financials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-about-us_financials:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-about-us_in-kind-donors:<front>.
  $menu_links['menu-footer-about-us_in-kind-donors:<front>'] = array(
    'menu_name' => 'menu-footer-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'in-kind donors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-about-us_in-kind-donors:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-about-us_press:<front>.
  $menu_links['menu-footer-about-us_press:<front>'] = array(
    'menu_name' => 'menu-footer-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'press',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-about-us_press:<front>',
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
  t('financials');
  t('in-kind donors');
  t('press');

  return $menu_links;
}
