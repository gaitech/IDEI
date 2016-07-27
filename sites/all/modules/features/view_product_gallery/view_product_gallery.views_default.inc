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
?>
<?php
$url = $_SERVER["REQUEST_URI"];
$output = basename($url);
$term = taxonomy_term_load($output);
print \'<div class="node-title">\'.$term->name.\' Gallery</div>\';

?>
';
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

  /* Display: Farmer success stories Header */
  $handler = $view->new_display('block', 'Farmer success stories Header', 'block_2');
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

  /* Display: Farmer video gallery  */
  $handler = $view->new_display('page', 'Farmer video gallery ', 'page_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'photo_gallery_archive_\',\'block_2\');
?>';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php_1']['id'] = 'php_1';
  $handler->display->display_options['header']['php_1']['table'] = 'views';
  $handler->display->display_options['header']['php_1']['field'] = 'php';
  $handler->display->display_options['header']['php_1']['php_output'] = '<?php
$url = $_SERVER["REQUEST_URI"];
$output = basename($url);
$term = taxonomy_term_load($output);
print \'<div class="node-title">\'.$term->name.\' Gallery</div>\';

?>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video link */
  $handler->display->display_options['fields']['field_video_link']['id'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['table'] = 'field_data_field_video_link';
  $handler->display->display_options['fields']['field_video_link']['field'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_link']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video_link']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_video_link']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'medium',
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
    'archive_farmers_success_stories' => 'archive_farmers_success_stories',
  );
  $handler->display->display_options['path'] = 'success-stories/%';

  /* Display: Banner: Archive Promotional Film */
  $handler = $view->new_display('block', 'Banner: Archive Promotional Film', 'block_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
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

  /* Display: Page: Archive Promotional Activity  */
  $handler = $view->new_display('page', 'Page: Archive Promotional Activity ', 'page_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'photo_gallery_archive_\',\'block_3\');

$url = $_SERVER["REQUEST_URI"];
$output = basename($url);
$term = taxonomy_term_load($output);
print \'<div class="node-title">\'.$term->name.\' Gallery</div>\';



?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Feature Video link */
  $handler->display->display_options['fields']['field_feature_video_link']['id'] = 'field_feature_video_link';
  $handler->display->display_options['fields']['field_feature_video_link']['table'] = 'field_data_field_feature_video_link';
  $handler->display->display_options['fields']['field_feature_video_link']['field'] = 'field_feature_video_link';
  $handler->display->display_options['fields']['field_feature_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_video_link']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_feature_video_link']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_feature_video_link']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'medium',
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
    'archive_promotional_and_thematic' => 'archive_promotional_and_thematic',
  );
  $handler->display->display_options['path'] = 'film/%';

  /* Display: Documents Page */
  $handler = $view->new_display('page', 'Documents Page', 'page_4');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'photo_gallery_archive_\',\'block_4\');
?>
<?php
$url = $_SERVER["REQUEST_URI"];
$output = basename($url);
$term = taxonomy_term_load($output);
print \'<div class="node-title">\'.$term->name.\' Gallery</div>\';

?>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pdf_description']['id'] = 'field_pdf_description';
  $handler->display->display_options['fields']['field_pdf_description']['table'] = 'field_data_field_pdf_description';
  $handler->display->display_options['fields']['field_pdf_description']['field'] = 'field_pdf_description';
  $handler->display->display_options['fields']['field_pdf_description']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_description']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: PDF File */
  $handler->display->display_options['fields']['field_pdf_file']['id'] = 'field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['table'] = 'field_data_field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['field'] = 'field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_file']['type'] = 'file_url_plain';
  /* Field: Content: PDF Image */
  $handler->display->display_options['fields']['field_pdf_image']['id'] = 'field_pdf_image';
  $handler->display->display_options['fields']['field_pdf_image']['table'] = 'field_data_field_pdf_image';
  $handler->display->display_options['fields']['field_pdf_image']['field'] = 'field_pdf_image';
  $handler->display->display_options['fields']['field_pdf_image']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_image']['settings'] = array(
    'image_style' => 'publication_listing_image',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub-main-wrap">
<div class="pub-img">[field_pdf_image] </div>
<div class="pub-wrap">
<div class="pub-title">[title] </div>
<div class="pub-desc">[field_pdf_description] </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $base_url;
print \'<div class="pub-download"><a class="colorbox-node" href="\'.$base_url.\'/node/68?width=400&height=500&nid=\'.$row->nid.\'">Download PDF</a></div></div></div></div>\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'node';
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
    'archive_documents' => 'archive_documents',
  );
  $handler->display->display_options['path'] = 'documents/%';

  /* Display: Banner : Documents */
  $handler = $view->new_display('block', 'Banner : Documents', 'block_4');
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
  $export['photo_gallery_archive_'] = $view;

  return $export;
}
