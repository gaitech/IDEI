<?php
/**
 * @file
 * homepage_awards_top_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function homepage_awards_top_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'awards_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Awards Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Awards Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'homepage_awards_logo_and_slider' => 'homepage_awards_logo_and_slider',
  );
  /* Filter criterion: Content: Image Positions (field_image_positions_) */
  $handler->display->display_options['filters']['field_image_positions__value']['id'] = 'field_image_positions__value';
  $handler->display->display_options['filters']['field_image_positions__value']['table'] = 'field_data_field_image_positions_';
  $handler->display->display_options['filters']['field_image_positions__value']['field'] = 'field_image_positions__value';
  $handler->display->display_options['filters']['field_image_positions__value']['value'] = array(
    'bottomlogos' => 'bottomlogos',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '4';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['scroll'] = '4';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: logo image */
  $handler->display->display_options['fields']['field_logo_image']['id'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['field'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['label'] = '';
  $handler->display->display_options['fields']['field_logo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_image']['settings'] = array(
    'image_style' => 'homepage_awards_slider',
    'image_link' => '',
  );
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
    'homepage_awards_logo_and_slider' => 'homepage_awards_logo_and_slider',
  );
  /* Filter criterion: Content: Image Positions (field_image_positions_) */
  $handler->display->display_options['filters']['field_image_positions__value']['id'] = 'field_image_positions__value';
  $handler->display->display_options['filters']['field_image_positions__value']['table'] = 'field_data_field_image_positions_';
  $handler->display->display_options['filters']['field_image_positions__value']['field'] = 'field_image_positions__value';
  $handler->display->display_options['filters']['field_image_positions__value']['value'] = array(
    'topslider' => 'topslider',
  );

  /* Display: Awards logo list */
  $handler = $view->new_display('block', 'Awards logo list', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'homepage_awards_list' => 'homepage_awards_list',
    'features_extra_test_nodequeue' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: logo image */
  $handler->display->display_options['fields']['field_logo_image']['id'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['field'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['label'] = '';
  $handler->display->display_options['fields']['field_logo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'homepage_awards_logo_and_slider' => 'homepage_awards_logo_and_slider',
  );
  /* Filter criterion: Content: Image Positions (field_image_positions_) */
  $handler->display->display_options['filters']['field_image_positions__value']['id'] = 'field_image_positions__value';
  $handler->display->display_options['filters']['field_image_positions__value']['table'] = 'field_data_field_image_positions_';
  $handler->display->display_options['filters']['field_image_positions__value']['field'] = 'field_image_positions__value';
  $handler->display->display_options['filters']['field_image_positions__value']['value'] = array(
    'bottomlogos' => 'bottomlogos',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $export['awards_slider'] = $view;

  return $export;
}
