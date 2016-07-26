<?php
/**
 * @file
 * view_product_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_product_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_gallery_archive_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery (Archive)';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photographs Gallery */
  $handler->display->display_options['fields']['field_photographs_gallery']['id'] = 'field_photographs_gallery';
  $handler->display->display_options['fields']['field_photographs_gallery']['table'] = 'field_data_field_photographs_gallery';
  $handler->display->display_options['fields']['field_photographs_gallery']['field'] = 'field_photographs_gallery';
  $handler->display->display_options['fields']['field_photographs_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_photographs_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photographs_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photographs_gallery']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_photographs_gallery']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'archive_gallery_orignal_image',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Banner Caption */
  $handler->display->display_options['fields']['field_banner_caption']['id'] = 'field_banner_caption';
  $handler->display->display_options['fields']['field_banner_caption']['table'] = 'field_data_field_banner_caption';
  $handler->display->display_options['fields']['field_banner_caption']['field'] = 'field_banner_caption';
  $handler->display->display_options['fields']['field_banner_caption']['label'] = '';
  $handler->display->display_options['fields']['field_banner_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'overview_header',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'archive_photographs' => 'archive_photographs',
  );

  /* Display: Gallery Header Banner */
  $handler = $view->new_display('block', 'Gallery Header Banner', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'archive_photo_gallery' => 'archive_photo_gallery',
    'header_banner_category' => 0,
    'home_page_category' => 0,
    'home_page_sub_category' => 0,
    'products_category' => 0,
    'programs' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Banner Caption */
  $handler->display->display_options['fields']['field_banner_caption']['id'] = 'field_banner_caption';
  $handler->display->display_options['fields']['field_banner_caption']['table'] = 'field_data_field_banner_caption';
  $handler->display->display_options['fields']['field_banner_caption']['field'] = 'field_banner_caption';
  $handler->display->display_options['fields']['field_banner_caption']['label'] = '';
  $handler->display->display_options['fields']['field_banner_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'overview_header',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '	<div class="detail-header-image">[field_banner_image] 
     <div class="haeder-caption">[field_banner_caption] </div>
    </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$url = $_SERVER["REQUEST_URI"];
$output = basename($url);
return $output;';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'header_banners' => 'header_banners',
  );

  /* Display: Photo Gallery */
  $handler = $view->new_display('page', 'Photo Gallery', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'photo_gallery_archive_\',\'block_1\');
?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photographs Gallery */
  $handler->display->display_options['fields']['field_photographs_gallery']['id'] = 'field_photographs_gallery';
  $handler->display->display_options['fields']['field_photographs_gallery']['table'] = 'field_data_field_photographs_gallery';
  $handler->display->display_options['fields']['field_photographs_gallery']['field'] = 'field_photographs_gallery';
  $handler->display->display_options['fields']['field_photographs_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_photographs_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photographs_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photographs_gallery']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_photographs_gallery']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'archive_gallery_orignal_image',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['path'] = 'gallery/%';
  $export['photo_gallery_archive_'] = $view;

  return $export;
}
