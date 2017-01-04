<?php
/**
 * @file
 * view_donors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_donors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'donors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Donors';
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
  $handler->display->display_options['path'] = 'donors';
  $export['donors'] = $view;

  return $export;
}
