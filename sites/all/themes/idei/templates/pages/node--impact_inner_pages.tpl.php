<?php

$page_title = $node->field_graph_sub_title['und'][0]['value'];
$header_image = $node->field_impact_header_image['und'][0]['uri'];
$header_slogan = $node->field_header_label['und'][0]['value'];
$header_style = 'overview_header';
$header_image_path = image_style_url($header_style, $header_image);

?>
<div class="economic-inner-main-wrapper">
	<div class="header-wrap">
	  <div class="header-image"> <img src="<?php echo $header_image_path; ?>"> </div>
	  <div class="header-title"><?php echo $header_slogan; ?></div>
	</div>
	<div class="title-body-wrapper">
	  <div class="economic-inner-title"><?php echo $page_title; ?></div>
	  <div class="economic-inner-content"><?php print views_embed_view('impact_inner_page','block'); ?></div>
	</div>

  <div class="also-read-wrap">
    <div class="also-read-title">ALSO READ:</div>
    <div class="also-content"><?php print views_embed_view('also_read_block','block'); ?></div>
</div>

</div>