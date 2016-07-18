<?php
/**
 * @file
 * view_publication_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_publication_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publication_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publication Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Publication Description */
  $handler->display->display_options['fields']['field_publication_description']['id'] = 'field_publication_description';
  $handler->display->display_options['fields']['field_publication_description']['table'] = 'field_data_field_publication_description';
  $handler->display->display_options['fields']['field_publication_description']['field'] = 'field_publication_description';
  $handler->display->display_options['fields']['field_publication_description']['label'] = '';
  $handler->display->display_options['fields']['field_publication_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_description']['element_label_colon'] = FALSE;
  /* Field: Content: Publication Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'publication_listing_image',
    'image_link' => '',
  );
  /* Field: Content: Publication PDF */
  $handler->display->display_options['fields']['field_publication_pdf']['id'] = 'field_publication_pdf';
  $handler->display->display_options['fields']['field_publication_pdf']['table'] = 'field_data_field_publication_pdf';
  $handler->display->display_options['fields']['field_publication_pdf']['field'] = 'field_publication_pdf';
  $handler->display->display_options['fields']['field_publication_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_publication_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_pdf']['type'] = 'file_url_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub-main-wrap">
<div class="pub-img">[field_publication_image] </div>
<div class="pub-wrap">
<div class="pub-title">[title] </div>
<div class="pub-desc">[field_publication_description] </div>
<div class="pub-download"><a href="[field_publication_pdf]" target="_blank" >Download PDF</a></div></div>
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
    'publications' => 'publications',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['publication_listing'] = $view;

  return $export;
}
