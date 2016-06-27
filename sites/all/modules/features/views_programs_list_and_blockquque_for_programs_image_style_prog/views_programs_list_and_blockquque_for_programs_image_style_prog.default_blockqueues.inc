<?php
/**
 * @file
 * views_programs_list_and_blockquque_for_programs_image_style_prog.default_blockqueues.inc
 */

/**
 * Implements hook_default_blockqueue().
 */
function views_programs_list_and_blockquque_for_programs_image_style_prog_default_blockqueue() {
  $export = array();

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'program_brand';
  $blockqueue->admin_title = 'Program Brand';
  $blockqueue->size = 2;
  $blockqueue->blocks = array(
    0 => 'views|programs_list_-block_3',
    1 => 'views|programs_list_-block_4',
  );
  $blockqueue->settings = array();
  $export['program_brand'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'program_ipmas';
  $blockqueue->admin_title = 'Program IPMAS';
  $blockqueue->size = 0;
  $blockqueue->blocks = array(
    0 => 'views|programs_list_-block_7',
    1 => 'views|programs_list_-block_8',
  );
  $blockqueue->settings = array();
  $export['program_ipmas'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'program_market_development';
  $blockqueue->admin_title = 'Program Market Development';
  $blockqueue->size = 2;
  $blockqueue->blocks = array(
    0 => 'views|programs_list_-block_5',
    1 => 'views|programs_list_-block_6',
  );
  $blockqueue->settings = array();
  $export['program_market_development'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'program_technology';
  $blockqueue->admin_title = 'Program Technology';
  $blockqueue->size = 2;
  $blockqueue->blocks = array(
    0 => 'views|programs_list_-block_1',
    1 => 'views|programs_list_-block_2',
  );
  $blockqueue->settings = array();
  $export['program_technology'] = $blockqueue;

  return $export;
}
