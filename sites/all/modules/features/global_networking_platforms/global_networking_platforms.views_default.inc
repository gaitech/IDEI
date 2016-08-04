<?php
/**
 * @file
 * global_networking_platforms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function global_networking_platforms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'global_networking_platforms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Global Networking Platforms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Donors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_3\');
echo \'<div class="economic-inner-title">Current Donors</div>\';
?>';
  /* Field: Content: Donors Link */
  $handler->display->display_options['fields']['field_donors_link']['id'] = 'field_donors_link';
  $handler->display->display_options['fields']['field_donors_link']['table'] = 'field_data_field_donors_link';
  $handler->display->display_options['fields']['field_donors_link']['field'] = 'field_donors_link';
  $handler->display->display_options['fields']['field_donors_link']['label'] = '';
  $handler->display->display_options['fields']['field_donors_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_donors_link']['element_label_colon'] = FALSE;
  /* Field: Content: Donor logo */
  $handler->display->display_options['fields']['field_donor_logo']['id'] = 'field_donor_logo';
  $handler->display->display_options['fields']['field_donor_logo']['table'] = 'field_data_field_donor_logo';
  $handler->display->display_options['fields']['field_donor_logo']['field'] = 'field_donor_logo';
  $handler->display->display_options['fields']['field_donor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_donor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_donor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_donor_logo']['settings'] = array(
    'image_style' => 'donors',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_donors_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'donors' => 'donors',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Global Networking Platforms';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_3\');
echo \'<div class="economic-inner-title team">Global Networking Platforms</div>\';
?>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Global Networking Link */
  $handler->display->display_options['fields']['field_global_networking_link']['id'] = 'field_global_networking_link';
  $handler->display->display_options['fields']['field_global_networking_link']['table'] = 'field_data_field_global_networking_link';
  $handler->display->display_options['fields']['field_global_networking_link']['field'] = 'field_global_networking_link';
  $handler->display->display_options['fields']['field_global_networking_link']['label'] = '';
  $handler->display->display_options['fields']['field_global_networking_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_global_networking_link']['element_label_colon'] = FALSE;
  /* Field: Content: Global Networking Logo */
  $handler->display->display_options['fields']['field_global_networking_logo']['id'] = 'field_global_networking_logo';
  $handler->display->display_options['fields']['field_global_networking_logo']['table'] = 'field_data_field_global_networking_logo';
  $handler->display->display_options['fields']['field_global_networking_logo']['field'] = 'field_global_networking_logo';
  $handler->display->display_options['fields']['field_global_networking_logo']['label'] = '';
  $handler->display->display_options['fields']['field_global_networking_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_global_networking_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_global_networking_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_global_networking_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'global_networking_platforms' => 'global_networking_platforms',
  );
  $handler->display->display_options['path'] = 'global-networking-platforms';
  $export['global_networking_platforms'] = $view;

  return $export;
}
