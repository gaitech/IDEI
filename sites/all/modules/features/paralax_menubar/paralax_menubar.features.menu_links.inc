<?php
/**
 * @file
 * paralax_menubar.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function paralax_menubar_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_annual-reports:<front>.
  $menu_links['main-menu_annual-reports:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ANNUAL REPORTS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_annual-reports:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_approach:<front>.
  $menu_links['main-menu_approach:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'APPROACH',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_approach:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_archives:<front>.
  $menu_links['main-menu_archives:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ARCHIVES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_archives:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_awards:<front>.
  $menu_links['main-menu_awards:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'AWARDS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_awards:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_engage:<front>.
  $menu_links['main-menu_engage:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ENGAGE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_engage:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_impact:<front>.
  $menu_links['main-menu_impact:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'IMPACT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_impact:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_partners:<front>.
  $menu_links['main-menu_partners:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PARTNERS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_partners:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_programs:<front>.
  $menu_links['main-menu_programs:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PROGRAMS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_programs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_water:<front>.
  $menu_links['main-menu_water:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'WATER',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_water:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-approach_market-based-approach:<front>.
  $menu_links['menu-approach_market-based-approach:<front>'] = array(
    'menu_name' => 'menu-approach',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Market Based Approach',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-approach_market-based-approach:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-approach_social-context:<front>.
  $menu_links['menu-approach_social-context:<front>'] = array(
    'menu_name' => 'menu-approach',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'social context',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-approach_social-context:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-programs_brand:<front>.
  $menu_links['menu-programs_brand:<front>'] = array(
    'menu_name' => 'menu-programs',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'BRAND',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-programs_brand:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-programs_introduction:<front>.
  $menu_links['menu-programs_introduction:<front>'] = array(
    'menu_name' => 'menu-programs',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'INTRODUCTION',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-programs_introduction:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-programs_market-developmnet:<front>.
  $menu_links['menu-programs_market-developmnet:<front>'] = array(
    'menu_name' => 'menu-programs',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'MARKET DEVELOPMNET',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-programs_market-developmnet:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-programs_research-and-development:<front>.
  $menu_links['menu-programs_research-and-development:<front>'] = array(
    'menu_name' => 'menu-programs',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'RESEARCH AND DEVELOPMENT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-programs_research-and-development:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-programs_technology:<front>.
  $menu_links['menu-programs_technology:<front>'] = array(
    'menu_name' => 'menu-programs',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'TECHNOLOGY',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-programs_technology:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-water_india-facts:<front>.
  $menu_links['menu-water_india-facts:<front>'] = array(
    'menu_name' => 'menu-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'INDIA FACTS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-water_india-facts:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-water_introduction:<front>.
  $menu_links['menu-water_introduction:<front>'] = array(
    'menu_name' => 'menu-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'INTRODUCTION',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-water_introduction:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-water_red-flags:<front>.
  $menu_links['menu-water_red-flags:<front>'] = array(
    'menu_name' => 'menu-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'RED FLAGS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-water_red-flags:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-water_world-facts:<front>.
  $menu_links['menu-water_world-facts:<front>'] = array(
    'menu_name' => 'menu-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'WORLD FACTS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-water_world-facts:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ANNUAL REPORTS');
  t('APPROACH');
  t('ARCHIVES');
  t('AWARDS');
  t('BRAND');
  t('ENGAGE');
  t('IMPACT');
  t('INDIA FACTS');
  t('INTRODUCTION');
  t('MARKET DEVELOPMNET');
  t('Market Based Approach');
  t('PARTNERS');
  t('PROGRAMS');
  t('RED FLAGS');
  t('RESEARCH AND DEVELOPMENT');
  t('TECHNOLOGY');
  t('WATER');
  t('WORLD FACTS');
  t('social context');

  return $menu_links;
}
