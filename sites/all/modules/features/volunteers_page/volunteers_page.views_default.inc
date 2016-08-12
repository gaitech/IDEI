<?php
/**
 * @file
 * volunteers_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function volunteers_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'volunteers_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteers Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annual Report Page ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_1\');
echo \'<div class="economic-inner-title">Annual Reports</div>\';
?>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub-main-wrap">
   <div class="pub-img">[field_report_image] </div>
   <div class="pub-wrap">
     <div class="pub-title">[title] </div>
     <div class="pub-desc">[body] </div>
     <div class="pub-download"><a href="[field_report_pdf] " target="_blank">Download PDF</a></div>
   </div>
 </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'annual_reports' => 'annual_reports',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Volunteers Page';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_6\');
echo \'<div class="economic-inner-title">Volunteers</div>\';
?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Content: Volunteer image */
  $handler->display->display_options['fields']['field_volunteer_image']['id'] = 'field_volunteer_image';
  $handler->display->display_options['fields']['field_volunteer_image']['table'] = 'field_data_field_volunteer_image';
  $handler->display->display_options['fields']['field_volunteer_image']['field'] = 'field_volunteer_image';
  $handler->display->display_options['fields']['field_volunteer_image']['label'] = '';
  $handler->display->display_options['fields']['field_volunteer_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_volunteer_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_volunteer_image']['settings'] = array(
    'image_style' => 'publication_listing_image',
    'image_link' => '',
  );
  /* Field: Content: Volunteer PDF */
  $handler->display->display_options['fields']['field_volunteer_pdf']['id'] = 'field_volunteer_pdf';
  $handler->display->display_options['fields']['field_volunteer_pdf']['table'] = 'field_data_field_volunteer_pdf';
  $handler->display->display_options['fields']['field_volunteer_pdf']['field'] = 'field_volunteer_pdf';
  $handler->display->display_options['fields']['field_volunteer_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_volunteer_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_volunteer_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_volunteer_pdf']['type'] = 'file_url_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub-main-wrap">
   <div class="pub-img">[field_volunteer_image] </div>
   <div class="pub-wrap">
     <div class="pub-title">[title] </div>
     <div class="pub-desc">[field_body]</div>
     <div class="pub-download"><a href="[field_volunteer_pdf] " target="_blank">Download PDF</a></div>
   </div>
 </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['path'] = 'volunteers-page';
  $export['volunteers_page'] = $view;

  return $export;
}
