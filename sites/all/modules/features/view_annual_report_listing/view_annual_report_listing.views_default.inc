<?php
/**
 * @file
 * view_annual_report_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_annual_report_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'annual_report_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annual Report Page';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Report Image */
  $handler->display->display_options['fields']['field_report_image']['id'] = 'field_report_image';
  $handler->display->display_options['fields']['field_report_image']['table'] = 'field_data_field_report_image';
  $handler->display->display_options['fields']['field_report_image']['field'] = 'field_report_image';
  $handler->display->display_options['fields']['field_report_image']['label'] = '';
  $handler->display->display_options['fields']['field_report_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_report_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_report_image']['settings'] = array(
    'image_style' => 'publication_listing_image',
    'image_link' => '',
  );
  /* Field: Content: Report PDF */
  $handler->display->display_options['fields']['field_report_pdf']['id'] = 'field_report_pdf';
  $handler->display->display_options['fields']['field_report_pdf']['table'] = 'field_data_field_report_pdf';
  $handler->display->display_options['fields']['field_report_pdf']['field'] = 'field_report_pdf';
  $handler->display->display_options['fields']['field_report_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_report_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_report_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_report_pdf']['type'] = 'file_url_plain';
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
<div class="pub-download"><a href="[field_report_pdf] " target="_blank">Download PDF</a></div></div>
</div>
</div>';
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
  $handler->display->display_options['path'] = 'annual-report-page';
  $export['annual_report_page'] = $view;

  return $export;
}
