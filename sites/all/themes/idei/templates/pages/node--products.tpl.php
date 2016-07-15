<?php
$product_title = $node->title;
$product_caption = $node->field_product_header_image_capti['und'][0]['value'];
$product_description = $node->field_product_descriptiption['und'][0]['value'];
$product_image = $node->field_product_image['und'][0]['uri'];
$header_image = $node->field_product_header_image['und'][0]['uri'];
$product_applications = $node->field_product_applications['und'][0]['value'];
$product_specification = $node->field_product_specification['und'][0]['value'];

$header_style = 'overview_header';
$header_image_path = image_style_url($header_style, $header_image);
$header_full_image = '<img src="'.$header_image_path.'"/>';

$product_image_style = 'prodect_landing_image';
$product_img_path = image_style_url($product_image_style,$product_image);
$product_full_image = '<img src="'.$product_img_path.'"/>';


?>
<div class="detail-header-image"><?php print $header_full_image; ?> 
<div class="haeder-caption"><?php print $product_caption; ?></div>
</div>
<div class="detail-product-title"> <?php print $product_title; ?> </div>
<div class="detail-product-desc">	<?php print $product_description; ?> </div>
<div class="detail-product-tabs">  
	  <?php $block = block_load('idei_custom', 'Products_gallery_tab_block'); 
    $output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block)))); 
    print $output; ?>
  </div>
  <!-- applications block -->
<div class="detail-product-applications-wrap">
  <div class="product-applications">
  	<div class="application-label">
      <?php if($product_applications){
        print "Applications";
      } ?>
    </div>
    <div class="application-detail"><?php print $product_applications; ?> </div>
  </div>
  <div class="product-images"><?php if($product_image){print $product_full_image;} ?> </div>
</div>
<!-- static and Dyamic Promotional Activites -->

<div class="promotional-wrapper">
<div class="promotional-block"><?php print views_embed_view('static_and_dynamic_promotional_activities_block','block'); ?></div>
</div>
<!-- specifications block -->
<div class="detail-sp-wrapper">
	<div class="detail-sp-label">
    <?php if($product_specification){
      print "Specifications";
    } ?>
  </div>
  <div class="detail-product-specification"><?php print $product_specification; ?> </div>
</div>
<div class="case-study"><?php print views_embed_view('case_study_for_products','block'); ?></div>