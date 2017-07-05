<?php
/**
 * @file
 * view_media_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_media_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Youtube Video Link */
  $handler->display->display_options['fields']['field_youtube_video_link']['id'] = 'field_youtube_video_link';
  $handler->display->display_options['fields']['field_youtube_video_link']['table'] = 'field_data_field_youtube_video_link';
  $handler->display->display_options['fields']['field_youtube_video_link']['field'] = 'field_youtube_video_link';
  $handler->display->display_options['fields']['field_youtube_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_video_link']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_youtube_video_link']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_youtube_video_link']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'archive__300_200_',
  );
  /* Field: Content: Youtube Video Link */
  $handler->display->display_options['fields']['field_youtube_video_link_1']['id'] = 'field_youtube_video_link_1';
  $handler->display->display_options['fields']['field_youtube_video_link_1']['table'] = 'field_data_field_youtube_video_link';
  $handler->display->display_options['fields']['field_youtube_video_link_1']['field'] = 'field_youtube_video_link';
  $handler->display->display_options['fields']['field_youtube_video_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_video_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_video_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_video_link_1']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_youtube_video_link_1']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_youtube_video_link_1']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="share-this">share this</div>
<div class="share-on-facebook">
<a href="https://www.facebook.com/sharer.php?title=[field_youtube_video_link_1]&u=[field_youtube_video_link_1]" target="_blank">facebook</a>
</div>
<div class="twitter-link"><a class="twitter-share-button" href="https://twitter.com/intent/tweet?text=[field_youtube_video_link_1]" target="_blank">Tweet</a></div>
<div class="google-link"><a target="_blank" href="https://plus.google.com/share?url=[field_youtube_video_link_1];" onclick="javascript:window.open(this.href,
  \'\', \'menubar=no,toolbar=no,resizable=yes,scrollbars=yes,height=600,width=600\');return false;">google</a></p>
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
    'media' => 'media',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'media-listing';
  $export['media_listing'] = $view;

  return $export;
}
