<?php
/**
 * @file
 * view_product_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_product_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product slider';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '1';
  $handler->display->display_options['style_options']['auto'] = '2';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Product  Slider Images */
  $handler->display->display_options['fields']['field_product_slider_images']['id'] = 'field_product_slider_images';
  $handler->display->display_options['fields']['field_product_slider_images']['table'] = 'field_data_field_product_slider_images';
  $handler->display->display_options['fields']['field_product_slider_images']['field'] = 'field_product_slider_images';
  $handler->display->display_options['fields']['field_product_slider_images']['label'] = '';
  $handler->display->display_options['fields']['field_product_slider_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_slider_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_slider_images']['settings'] = array(
    'image_style' => 'product_gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_slider_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_product_slider_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_product_slider_images']['multi_type'] = 'ol';
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

  /* Display: Product Image Style */
  $handler = $view->new_display('block', 'Product Image Style', 'block');

  /* Display: Product Video Slider */
  $handler = $view->new_display('block', 'Product Video Slider', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Product Video */
  $handler->display->display_options['fields']['field_product_video']['id'] = 'field_product_video';
  $handler->display->display_options['fields']['field_product_video']['table'] = 'field_data_field_product_video';
  $handler->display->display_options['fields']['field_product_video']['field'] = 'field_product_video';
  $handler->display->display_options['fields']['field_product_video']['label'] = '';
  $handler->display->display_options['fields']['field_product_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_product_video']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_product_video']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'product_gallery',
  );
  $handler->display->display_options['fields']['field_product_video']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_product_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_product_video']['multi_type'] = 'ul';
  $export['product_slider'] = $view;

  return $export;
}
