<?php
/**
 * @file
 * social_links_on_header.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function social_links_on_header_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Links on header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_social_links';
  $fe_block_boxes->body = '<p><a href="#"><img alt="" src="/IDEI/sites/default/files/gmail.png" style="height:30px; width:30px" /></a> <a href="#"><img alt="" src="/IDEI/sites/default/files/youtube.png" style="height:30px; width:30px" /></a> <a href="#"><img alt="" src="/IDEI/sites/default/files/facebook.png" style="height:30px; width:30px" /></a> <a href="#"> <img alt="" src="/IDEI/sites/default/files/twitter.png" style="height:30px; width:30px" /></a></p>
';

  $export['header_social_links'] = $fe_block_boxes;

  return $export;
}
