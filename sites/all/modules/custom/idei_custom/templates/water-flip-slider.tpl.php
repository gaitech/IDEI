<?php global $base_url; 
print  '<link href="'.$base_url.'/sites/all/modules/custom/idei_custom/css/jquery.carousel-3d.default.css" rel="stylesheet" type="text/css" />';
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery.js"></script>'; 
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery.resize.js"></script>';
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery.waitforimages.js"></script>';
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/modernizr.js"></script>';
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery.carousel-3d.js"></script>';

print '<div class="wrapper my-wrapper"> <div data-carousel-3d>';



  $query = db_select('field_data_field_water_image', 't');
  $query->join('file_managed', 'n', 'n.fid = t.field_water_image_fid');
  $result = $query
    ->fields('n', array('uri'))
    ->fields('t', array('entity_id'))
    ->execute()
    ->fetchAll();
    foreach ($result as $key => $value) {
    $image =  $result[$key]->uri;
    $body_style = 'three_d_gallery';
    $body_image_path = image_style_url($body_style,$image);

    $nid1 = $result[$key]->entity_id;
    $node1 = node_load($nid1);
    $title = $node1->title;
    $description = $node1->body['und'][0]['value'];
    $text = $node1->field_global_water_foot_print_li['und'][0]['value'];

if($key < 25){
       print '<div><img src="'.$body_image_path.'" /><div class="display-text"><div class="water-intro-title">'.$title.'</div><div class="measure">'.$text.'</div><div class="water-intro-description">'.$description.'</div></div></div>';
     }
    }
    print '</div></div>';
 




?>