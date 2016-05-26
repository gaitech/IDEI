<?php
/**
 * @file
 * homepage_infographics_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function homepage_infographics_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'infographics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Infographics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'home_page_category' => 'home_page_category',
    'home_page_sub_category' => 'home_page_sub_category',
    'tags' => 0,
  );
  /* Field: Content: Infographic data */
  $handler->display->display_options['fields']['field_infographic_data_1']['id'] = 'field_infographic_data_1';
  $handler->display->display_options['fields']['field_infographic_data_1']['table'] = 'field_data_field_infographic_data';
  $handler->display->display_options['fields']['field_infographic_data_1']['field'] = 'field_infographic_data';
  $handler->display->display_options['fields']['field_infographic_data_1']['label'] = '';
  $handler->display->display_options['fields']['field_infographic_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_infographic_data_1']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_infographic_data_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_infographic_data_1']['multi_type'] = 'ul';
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
    'infographics' => 'infographics',
  );
  /* Filter criterion: Content: Impact Block (field_impact) */
  $handler->display->display_options['filters']['field_impact_value']['id'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['table'] = 'field_data_field_impact';
  $handler->display->display_options['filters']['field_impact_value']['field'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['value'] = array(
    'impact_top' => 'impact_top',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'home_page_category';

  /* Display: Its all about water */
  $handler = $view->new_display('block', 'Its all about water', 'block');
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
    'infographics' => 'infographics',
  );
  /* Filter criterion: Content: Impact Block (field_impact) */
  $handler->display->display_options['filters']['field_impact_value']['id'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['table'] = 'field_data_field_impact';
  $handler->display->display_options['filters']['field_impact_value']['field'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['value'] = array(
    'impact_bottom' => 'impact_bottom',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'its all about water';

  /* Display: Impact first infographics */
  $handler = $view->new_display('block', 'Impact first infographics', 'block_1');
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
    'infographics' => 'infographics',
  );
  /* Filter criterion: Content: Impact Block (field_impact) */
  $handler->display->display_options['filters']['field_impact_value']['id'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['table'] = 'field_data_field_impact';
  $handler->display->display_options['filters']['field_impact_value']['field'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['value'] = array(
    'impact_top' => 'impact_top',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'impact';

  /* Display: Impact second Infographics */
  $handler = $view->new_display('block', 'Impact second Infographics', 'block_2');
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
    'infographics' => 'infographics',
  );
  /* Filter criterion: Content: Impact Block (field_impact) */
  $handler->display->display_options['filters']['field_impact_value']['id'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['table'] = 'field_data_field_impact';
  $handler->display->display_options['filters']['field_impact_value']['field'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['value'] = array(
    'impact_bottom' => 'impact_bottom',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'impact';
  $export['infographics'] = $view;

  return $export;
}
