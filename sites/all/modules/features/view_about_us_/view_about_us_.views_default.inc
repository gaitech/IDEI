<?php
/**
 * @file
 * view_about_us_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_about_us__views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_5\');
echo \'<div class="economic-inner-title">Board Members</div>\';
?>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]" class="biography" > biography</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'profile_picture',
    'image_link' => '',
  );
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="profile-wrapper">
  <div class="profile-pic">[field_profile_picture] </div>
  <div class="profile-title-wrap">
    <div class="profile-title">[title]</div>
    <div class="profile-designation">[field_designation] </div>
    <div class="profile-path">[path]</div>
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
    'about_us' => 'about_us',
  );

  /* Display: our team */
  $handler = $view->new_display('page', 'our team', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print views_embed_view(\'header_banner\',\'block_2\');
echo \'<div class="economic-inner-title">Our Team</div>\';
?>';
  $handler->display->display_options['path'] = 'about-us';

  /* Display: Board members */
  $handler = $view->new_display('page', 'Board members', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Board Members';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]" class="biography" > biography</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Member Designation */
  $handler->display->display_options['fields']['field_member_designation']['id'] = 'field_member_designation';
  $handler->display->display_options['fields']['field_member_designation']['table'] = 'field_data_field_member_designation';
  $handler->display->display_options['fields']['field_member_designation']['field'] = 'field_member_designation';
  $handler->display->display_options['fields']['field_member_designation']['label'] = '';
  $handler->display->display_options['fields']['field_member_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'colorbox_node_style' => 'profile_picture',
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="profile-wrapper">
  <div class="profile-pic">[field_member_image] </div>
  <div class="profile-title-wrap">
    <div class="profile-title">[title]</div>
    <div class="profile-designation">[field_member_designation]  </div>
    <div class="profile-path">[path]</div>
  </div>
</div>';
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
    'board_members' => 'board_members',
  );
  $handler->display->display_options['path'] = 'board-members';
  $export['about_us'] = $view;

  return $export;
}
