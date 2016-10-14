<?php
/**
 * @file
 * water_best_practices.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function water_best_practices_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'water_best_practices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Water - Best Practices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annual Report Page ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_1\');
echo \'<div class="economic-inner-title">Annual Reports</div>\';
?>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub-main-wrap">
   <div class="pub-img">[field_report_image] </div>
   <div class="pub-wrap">
     <div class="pub-title">[title] </div>
     <div class="pub-desc">[body] </div>
     <div class="pub-download"><a href="[field_report_pdf] " target="_blank">Download PDF</a></div>
   </div>
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
    'annual_reports' => 'annual_reports',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Water - Best Practices';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_8\');
echo \'<div class="economic-inner-title">Water - Best Practices</div>\';
?>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>In this section IDEI will provide information on best practices on agriculture, water related issues and other thematically relevant topics. We will try and collate especially those materials that focus on increasing water productivity in agriculture that are being developed and followed by different people across the globe. These articles are compiled basis our own secondary research, visits, and even those referred to by other people/ agencies.</p>
<p>We welcome information, articles, links and so and so forth on the mentioned topics to be featured under this section. You could share them with us by emailing at mailbox@ide-india.org</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Best Practices Image */
  $handler->display->display_options['fields']['field_best_practices_image']['id'] = 'field_best_practices_image';
  $handler->display->display_options['fields']['field_best_practices_image']['table'] = 'field_data_field_best_practices_image';
  $handler->display->display_options['fields']['field_best_practices_image']['field'] = 'field_best_practices_image';
  $handler->display->display_options['fields']['field_best_practices_image']['label'] = '';
  $handler->display->display_options['fields']['field_best_practices_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_best_practices_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_best_practices_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_best_practices_image']['settings'] = array(
    'image_style' => 'publication_listing_image',
    'image_link' => '',
  );
  /* Field: Content: Best Practices PDF */
  $handler->display->display_options['fields']['field_best_practices_pdf']['id'] = 'field_best_practices_pdf';
  $handler->display->display_options['fields']['field_best_practices_pdf']['table'] = 'field_data_field_best_practices_pdf';
  $handler->display->display_options['fields']['field_best_practices_pdf']['field'] = 'field_best_practices_pdf';
  $handler->display->display_options['fields']['field_best_practices_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_best_practices_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_best_practices_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_best_practices_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_best_practices_pdf']['type'] = 'file_url_plain';
  /* Field: Content: Practices Video */
  $handler->display->display_options['fields']['field_practices_video']['id'] = 'field_practices_video';
  $handler->display->display_options['fields']['field_practices_video']['table'] = 'field_data_field_practices_video';
  $handler->display->display_options['fields']['field_practices_video']['field'] = 'field_practices_video';
  $handler->display->display_options['fields']['field_practices_video']['label'] = '';
  $handler->display->display_options['fields']['field_practices_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_practices_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_practices_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_practices_video']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_practices_video']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'medium',
  );
  /* Field: Content: Practices Image */
  $handler->display->display_options['fields']['field_practices_image']['id'] = 'field_practices_image';
  $handler->display->display_options['fields']['field_practices_image']['table'] = 'field_data_field_practices_image';
  $handler->display->display_options['fields']['field_practices_image']['field'] = 'field_practices_image';
  $handler->display->display_options['fields']['field_practices_image']['label'] = '';
  $handler->display->display_options['fields']['field_practices_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_practices_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_practices_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_practices_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_practices_image']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub-main-wrap">
   <div class="pub-img">[field_best_practices_image] </div>
   <div class="pub-wrap">
     <div class="pub-title">[title] </div>
     <div class="pub-desc">[body]</div>
     <div class="practices-wrapper">
          <div class="practices-video">[field_practices_video]</div>
          <div class="practices-image">[field_practices_image] </div>
      </div>
     <div class="pub-download"><a href="[field_best_practices_pdf] " target="_blank">Download PDF</a></div>
   </div>
 </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'water_best_practices' => 'water_best_practices',
  );
  $handler->display->display_options['path'] = 'best-practices';
  $export['water_best_practices'] = $view;

  return $export;
}
