<?php
/**
 * @file
 * view_product_menu_view_case_study_for_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_product_menu_view_case_study_for_products_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'case_study_for_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Study for products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case Study for products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Case study title */
  $handler->display->display_options['fields']['field_case_study_title']['id'] = 'field_case_study_title';
  $handler->display->display_options['fields']['field_case_study_title']['table'] = 'field_data_field_case_study_title';
  $handler->display->display_options['fields']['field_case_study_title']['field'] = 'field_case_study_title';
  $handler->display->display_options['fields']['field_case_study_title']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_title']['element_label_colon'] = FALSE;
  /* Field: Content: Case Study description */
  $handler->display->display_options['fields']['field_case_study_description']['id'] = 'field_case_study_description';
  $handler->display->display_options['fields']['field_case_study_description']['table'] = 'field_data_field_case_study_description';
  $handler->display->display_options['fields']['field_case_study_description']['field'] = 'field_case_study_description';
  $handler->display->display_options['fields']['field_case_study_description']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_description']['element_label_colon'] = FALSE;
  /* Field: Content: Case study Upload PDF */
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['id'] = 'field_case_study_upload_pdf';
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['table'] = 'field_data_field_case_study_upload_pdf';
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['field'] = 'field_case_study_upload_pdf';
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['alter']['text'] = '<a href="[field_case_study_upload_pdf]">PDF</div>';
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_case_study_upload_pdf']['type'] = 'file_url_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'products' => 'products',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['case_study_for_products'] = $view;

  $view = new view();
  $view->name = 'product_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Menu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_product_category_target_id']['id'] = 'field_product_category_target_id';
  $handler->display->display_options['relationships']['field_product_category_target_id']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['relationships']['field_product_category_target_id']['field'] = 'field_product_category_target_id';
  $handler->display->display_options['relationships']['field_product_category_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_product_category_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$argument  = arg(1);
$node = node_load($argument);
$output = $node->field_product_category[\'und\'][0][\'target_id\'];
return $output;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['product_menu'] = $view;

  return $export;
}
