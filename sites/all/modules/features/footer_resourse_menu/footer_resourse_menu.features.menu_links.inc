<?php
/**
 * @file
 * footer_resourse_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_resourse_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-resources_download-assets:<front>.
  $menu_links['menu-footer-resources_download-assets:<front>'] = array(
    'menu_name' => 'menu-footer-resources',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'download assets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-resources_download-assets:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-resources_media-kit:<front>.
  $menu_links['menu-footer-resources_media-kit:<front>'] = array(
    'menu_name' => 'menu-footer-resources',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'media kit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-resources_media-kit:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-resources_request-a-speaker:<front>.
  $menu_links['menu-footer-resources_request-a-speaker:<front>'] = array(
    'menu_name' => 'menu-footer-resources',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'request a speaker',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-resources_request-a-speaker:<front>',
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
  t('download assets');
  t('media kit');
  t('request a speaker');

  return $menu_links;
}
