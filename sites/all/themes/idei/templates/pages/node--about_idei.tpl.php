

<?php

$page_title = $node->title;

$header_image = $node->field_header_banner_image['und'][0]['uri'];
$header_style = 'overview_header';
$header_image_path = image_style_url($header_style, $header_image);

$header_image_caption = $node->field_header_banner_caption['und'][0]['value'];
$page_body = $node->body['und'][0]['value'];

$body_image = $node->field_optional_image['und'][0]['uri'];
$body_style = 'program_image_410___320_';
$body_image_path = image_style_url($body_style,$body_image);

?>
<div class="economic-inner-main-wrapper">
	<div class="detail-header-image"><img src="<?php echo $header_image_path; ?>">
     <div class="haeder-caption"><?php print $header_image_caption; ?></div>
    </div>

	<div class="title-body-wrapper">
	  <div class="economic-inner-title approach-title"><?php echo $page_title; ?></div>
	  <div class="economic-inner-content approach-content-wrapper">
		  	<span class="shift-image">
		  	<?php if($body_image){?>  <img src="<?php echo $body_image_path; ?>"> <?php } ?>
		  	</span>
		  	<div class="approach-content">
		  		<?php print $page_body; ?>
		  	</div>
		</div>
	</div>

</div>