<?php
/**
 * @file
 * footer_get_involved_menu.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_get_involved_menu_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'copyright block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright_block';
  $fe_block_boxes->body = '<p>idei is a not-for-profit organisation registered u/s 25 of the indian companies act, 1956, licence no ???????anmph</p>

<p>© 2016 by International Development Enterprise (India). All Right Reserved Web Development by GAI.</p>
';

  $export['copyright_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'static block for footer careers ';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_facebook_block';
  $fe_block_boxes->body = '<div class="foot-wrap">
<div class="facebook-wrapper">
<div class="footer-logo"><img alt="" src="/IDEI/sites/default/files/footer-logo.png" style="height:85px; width:91px" /></div>

<ul>
	<li><a href="#"><img alt="" src="/IDEI/sites/default/files/pump.png" style="height:26px; width:18px" />read our blog</a></li>
	<li><a href="#"><img alt="" src="/IDEI/sites/default/files/fb.png" style="height:24px; width:12px" />facebook</a></li>
	<li><a href="#"><img alt="" src="/IDEI/sites/default/files/tweet.png" style="height:19px; width:22px" />twitter</a></li>
</ul>
</div>

<div class="connect-wrapper">
<h2>connect</h2>

<ul>
	<li>contact info</li>
	<li>646.688.2323</li>
	<li>need help?</li>
</ul>
</div>
</div>
';

  $export['footer_facebook_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Links on header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_social_links';
  $fe_block_boxes->body = '<p><a href="#"><img alt="" src="/IDEI/sites/default/files/gmail.png" style="height:30px; width:30px" /></a> <a href="#"><img alt="" src="/IDEI/sites/default/files/youtube.png" style="height:30px; width:30px" /></a> <a href="#"><img alt="" src="/IDEI/sites/default/files/facebook.png" style="height:30px; width:30px" /></a> <a href="#"> <img alt="" src="/IDEI/sites/default/files/twitter.png" style="height:30px; width:30px" /></a></p>
';

  $export['header_social_links'] = $fe_block_boxes;

  return $export;
}
