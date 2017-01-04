<?php
/**
 * @file
 * content_type_archive_farmer_success_stories.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_archive_farmer_success_stories_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-archive_farmers_success_stories-field_category_'.
  $field_instances['node-archive_farmers_success_stories-field_category_'] = array(
    'bundle' => 'archive_farmers_success_stories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category_',
    'label' => 'Category ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'node-archive_farmers_success_stories-field_video_link'.
  $field_instances['node-archive_farmers_success_stories-field_video_link'] = array(
    'bundle' => 'archive_farmers_success_stories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'image_style' => '',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field_thumbnail_colorbox',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_link',
    'label' => 'Video link',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 0,
      'description_length' => 128,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category ');
  t('Video link');

  return $field_instances;
}
