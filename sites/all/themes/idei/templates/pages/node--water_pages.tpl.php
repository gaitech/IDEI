<?php
$header_image = $node->field_caption_image['und'][0]['uri'];
$header_style = 'overview_header';
$header_image_path = image_style_url($header_style, $header_image);

$header_image_caption = $node->field_header_caption_['und'][0]['value'];

?>
	<div class="detail-header-image"><img src="<?php echo $header_image_path; ?>">
     <div class="haeder-caption"><?php print $header_image_caption; ?></div>
    </div>
<div class="field-collection-values">
 <?php print views_embed_view('water_pages_','block_1'); ?>
</div>