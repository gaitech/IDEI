<?php
/**
 * @file
 * idei_capability_statement_section_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function idei_capability_statement_section_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'idei_capability_statement';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IDEI CAPABILITY STATEMENT';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IDEI CAPABILITY STATEMENT';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: IDEI CAPABILITY Section 2 */
  $handler->display->display_options['fields']['field_section_2']['id'] = 'field_section_2';
  $handler->display->display_options['fields']['field_section_2']['table'] = 'field_data_field_section_2';
  $handler->display->display_options['fields']['field_section_2']['field'] = 'field_section_2';
  $handler->display->display_options['fields']['field_section_2']['label'] = '';
  $handler->display->display_options['fields']['field_section_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_2']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_section_2']['delta_offset'] = '0';
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
    'idei_capability_statement' => 'idei_capability_statement',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '58',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'capability';

  /* Display: IDEI CAPABILITY STATEMENT Format */
  $handler = $view->new_display('block', 'IDEI CAPABILITY STATEMENT Format', 'block');
  $export['idei_capability_statement'] = $view;

  return $export;
}
