<?php
/**
 * @file
 * content_type_water_3d_gallery.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_water_3d_gallery_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_global_water_foot_print_li'.
  $field_bases['field_global_water_foot_print_li'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_global_water_foot_print_li',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_water_image'.
  $field_bases['field_water_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_water_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
