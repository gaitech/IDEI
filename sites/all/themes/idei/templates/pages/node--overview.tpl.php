<?php

$body_1 = $node->body['und'][0]['value'];
$progress_image = $node->field_progress_image['und'][0]['uri'];
$progress_percentage = $node->field_progress_percentage['und'][0]['value'];
$progress_description = $node->field_progress_description['und'][0]['value'];
$heighlighted_text = $node->field_highlighted_text['und'][0]['value'];
$body_after_heighlited = $node->field_after_highlighted_text['und'][0]['value'];
$title = $node->field_sub_title['und'][0]['value'];
$header_image = $node->field_header_image['und'][0]['uri'];
$header_text = $node->field_header_title['und'][0]['value'];
$style = 'overview_progress';
$image_path = image_style_url($style, $progress_image);
$header_style = 'overview_header';
$header_image_path = image_style_url($header_style, $header_image);

?>
<div class="header-wrap">
  <div class="header-image"> <img src="<?php echo $header_image_path; ?>"> </div>
  <div class="header-title"><?php echo $header_text; ?></div>
</div>
<div class="wrap-title">
  <div class="title"><?php echo $title; ?></div>
  <div class="percentage-wrap">
    <div class="progress-image"> <img src="<?php echo $image_path; ?>"> </div>
    <div class="progress-title"><?php echo $progress_percentage; ?></div>
    <div class="progress-description"><?php echo $progress_description; ?></div>
  </div>
</div>

<div class="wrap-body">
  <div class="content-body"><?php echo $body_1; ?></div>
  <div class="heighlight-body"><?php echo $heighlighted_text; ?></div>
  <div class="content-body"><?php echo $body_after_heighlited; ?></div>
</div>
<div class="also-read">
 <?php print views_embed_view('also_read_block','block'); ?>
</div>

