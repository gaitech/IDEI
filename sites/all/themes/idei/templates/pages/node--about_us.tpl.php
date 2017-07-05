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
<div class="about-main-wrapper">
	<div class="about-wrapper">
		<div class="about-pic-wrapper">
		  <div class="about-picture"><?php print $image; ?></div>
		</div>
		<div class="about-text-wrapper">
			<div class="about-title"><?php print $title; ?></div>
			<div class="about-designation"><?php print $designation; ?></div>
			<div class="about-description"><?php print $body; ?></div>
		</div>
	</div>
</div>
