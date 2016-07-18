<?php
/**
 * @file
 * view_static_and_dynamic_promotional_activity.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_static_and_dynamic_promotional_activity_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'static_and_dynamic_promotional_activities_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Static and Dynamic Promotional Activities block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Static and Dynamic Promotional Activities block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Static and Dynamic Promotional Activity Items (field_static_and_dynamic_promoti) */
  $handler->display->display_options['relationships']['field_static_and_dynamic_promoti_value']['id'] = 'field_static_and_dynamic_promoti_value';
  $handler->display->display_options['relationships']['field_static_and_dynamic_promoti_value']['table'] = 'field_data_field_static_and_dynamic_promoti';
  $handler->display->display_options['relationships']['field_static_and_dynamic_promoti_value']['field'] = 'field_static_and_dynamic_promoti_value';
  $handler->display->display_options['relationships']['field_static_and_dynamic_promoti_value']['delta'] = '-1';
  /* Field: Field collection item: Activity Title */
  $handler->display->display_options['fields']['field_activity_title']['id'] = 'field_activity_title';
  $handler->display->display_options['fields']['field_activity_title']['table'] = 'field_data_field_activity_title';
  $handler->display->display_options['fields']['field_activity_title']['field'] = 'field_activity_title';
  $handler->display->display_options['fields']['field_activity_title']['relationship'] = 'field_static_and_dynamic_promoti_value';
  $handler->display->display_options['fields']['field_activity_title']['label'] = '';
  $handler->display->display_options['fields']['field_activity_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_title']['empty'] = '<div class="promotional-hide-label"></div>';
  /* Field: Field collection item: Activity Description */
  $handler->display->display_options['fields']['field_activity_description']['id'] = 'field_activity_description';
  $handler->display->display_options['fields']['field_activity_description']['table'] = 'field_data_field_activity_description';
  $handler->display->display_options['fields']['field_activity_description']['field'] = 'field_activity_description';
  $handler->display->display_options['fields']['field_activity_description']['relationship'] = 'field_static_and_dynamic_promoti_value';
  $handler->display->display_options['fields']['field_activity_description']['label'] = '';
  $handler->display->display_options['fields']['field_activity_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_description']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Activity Image */
  $handler->display->display_options['fields']['field_activity_image']['id'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['table'] = 'field_data_field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['field'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['relationship'] = 'field_static_and_dynamic_promoti_value';
  $handler->display->display_options['fields']['field_activity_image']['label'] = '';
  $handler->display->display_options['fields']['field_activity_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_activity_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="activity-wrap">
<div class="activity-title">[field_activity_title]</div>
<div class="activity-description">[field_activity_description]</div>
<div class="activity-img">[field_activity_image] </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Static and Dynamic promotional activity block';
  $export['static_and_dynamic_promotional_activities_block'] = $view;

  return $export;
}
