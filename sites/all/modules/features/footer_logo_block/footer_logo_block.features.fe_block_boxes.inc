<?php
/**
 * @file
 * footer_logo_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_logo_block_default_fe_block_boxes() {
  $export = array();

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

  return $export;
}
