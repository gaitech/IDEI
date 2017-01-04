<?php
/**
 * @file
 * views_programs_list_and_blockquque_for_programs_image_style_prog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_programs_list_and_blockquque_for_programs_image_style_prog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "blockqueue" && $api == "default_blockqueues") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_programs_list_and_blockquque_for_programs_image_style_prog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function views_programs_list_and_blockquque_for_programs_image_style_prog_image_default_styles() {
  $styles = array();

  // Exported image style: program_image_410___320_.
  $styles['program_image_410___320_'] = array(
    'label' => 'program image(410 * 320)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 410,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
