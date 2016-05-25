<?php
/**
 * @file
 * homepage_content_slider.default_blockqueues.inc
 */

/**
 * Implements hook_default_blockqueue().
 */
function homepage_content_slider_default_blockqueue() {
  $export = array();

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'homepage_approach';
  $blockqueue->admin_title = 'homepage Approach';
  $blockqueue->size = 2;
  $blockqueue->blocks = array(
    0 => 'views|homepage_content-block_2',
  );
  $blockqueue->settings = array();
  $export['homepage_approach'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'homepage_impact';
  $blockqueue->admin_title = 'Homepage Impact';
  $blockqueue->size = 3;
  $blockqueue->blocks = array(
    0 => 'views|homepage_content-block_1',
  );
  $blockqueue->settings = array();
  $export['homepage_impact'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'homepage_its_all_about_water';
  $blockqueue->admin_title = 'Homepage Its all about water';
  $blockqueue->size = 2;
  $blockqueue->blocks = array(
    0 => 'views|homepage_content-block',
  );
  $blockqueue->settings = array();
  $export['homepage_its_all_about_water'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'homepage_programs';
  $blockqueue->admin_title = 'Homepage Programs';
  $blockqueue->size = 3;
  $blockqueue->blocks = array(
    0 => 'views|homepage_content-block_3',
  );
  $blockqueue->settings = array();
  $export['homepage_programs'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'homepage_water';
  $blockqueue->admin_title = 'homepage Water';
  $blockqueue->size = 2;
  $blockqueue->blocks = array(
    0 => 'views|homepage_content-block_4',
  );
  $blockqueue->settings = array();
  $export['homepage_water'] = $blockqueue;

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'partners';
  $blockqueue->admin_title = 'Homepage Partners';
  $blockqueue->size = 4;
  $blockqueue->blocks = array(
    0 => 'views|homepage_content-block_5',
  );
  $blockqueue->settings = array();
  $export['partners'] = $blockqueue;

  return $export;
}
