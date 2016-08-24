

<?php

$page_title = $node->title;

$page_body = $node->body['und'][0]['value'];

 $link = $node->field_read_more['und'][0]['url']

?>
<div class="economic-inner-main-wrapper">
	<div class="awards-inner-slider"><?php print views_embed_view('header_banner','block_9'); ?></div>
	<div class="title-body-wrapper">
	  <div class="economic-inner-title approach-title"><?php echo $page_title; ?></div>
	  <?php print views_embed_view('awards_timeline','block_1');?>
	  <div class="economic-inner-content approach-content-wrapper">
		  	<div class="approach-content">
                <?php print views_embed_view('awards_timeline','block_2');?>
		  		<?php print $page_body; echo '<span class="external-link"><a href="'.$link.'">Read More...</a></span>'; ?>
		  		
		  	</div>
		</div>
	</div>
</div>



