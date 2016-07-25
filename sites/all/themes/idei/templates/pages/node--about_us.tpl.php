<?php
$title = $node->title;
$image = $node->field_profile_picture['und'][0]['uri'];
$image_style = 'profile_picture';
$image_path = image_style_url($image_style,$image);
$designation = $node->field_designation['und'][0]['value'];
$body = $node->body['und'][0]['value'];
$image = '<img src="'.$image_path.'">';
?>
<div class="banner-image">
<?php print views_embed_view('header_banner','block_2'); ?>
</div>

<div class="pic-title"><?php print $title; ?></div>
<div class="pic-designation"><?php print $designation; ?></div>
<div class="pic-main-wrap">
  <div class="pic-picture"><?php print $image; ?></div>
  <div class="pic-description"><?php print $body; ?></div>
</div>
