<?php
/**
 * @file
 * menu_about_us.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_about_us_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-about-us_about-us:<front>.
  $menu_links['menu-about-us_about-us:<front>'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ABOUT US',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_about-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_board-members:<front>.
  $menu_links['menu-about-us_board-members:<front>'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Board Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_board-members:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_idei-capability-statement:<front>.
  $menu_links['menu-about-us_idei-capability-statement:<front>'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'IDEI CAPABILITY STATEMENT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_idei-capability-statement:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_introduction:<front>.
  $menu_links['menu-about-us_introduction:<front>'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'INTRODUCTION',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_introduction:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_key-differentiators-idei-vs-others:<front>.
  $menu_links['menu-about-us_key-differentiators-idei-vs-others:<front>'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'KEY DIFFERENTIATORS: IDEI Vs OTHERS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_key-differentiators-idei-vs-others:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_our-team:<front>.
  $menu_links['menu-about-us_our-team:<front>'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'OUR TEAM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_our-team:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_registration-and-legal-status:<front>.
  $menu_links['menu-about-us_registration-and-legal-status:<front>'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Registration and Legal Status',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_registration-and-legal-status:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ABOUT US');
  t('Board Members');
  t('IDEI CAPABILITY STATEMENT');
  t('INTRODUCTION');
  t('KEY DIFFERENTIATORS: IDEI Vs OTHERS');
  t('OUR TEAM');
  t('Registration and Legal Status');

  return $menu_links;
}
