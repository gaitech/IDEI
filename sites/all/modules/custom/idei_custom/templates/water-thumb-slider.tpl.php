<?php 
global $base_url; 
print '<link href="'.$base_url.'/sites/all/modules/custom/idei_custom/css/thumbnail-slider.css" rel="stylesheet" type="text/css" />';
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/thumbnail-slider.js"></script>';
print ' <div id="thumbnail-slider"><div class="inner"><ul>';
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
      print ' <li><a class="thumb" href="'.$body_image_path.'"></a> </li>';
    }

    print '</ul> </div> </div>';

    // print '<div class="3d-content-wrap water-intro-content-wrap">';
    // foreach ($result as $key => $value) {
    // $nid1 = $result[$key]->entity_id;
    // $node1 = node_load($nid1);
    // $title = $node1->title;
    // $description = $node1->body['und'][0]['value'];
    // $text = $node1->field_global_water_foot_print_li['und'][0]['value'];
    // print '<div class="3dd 3d-item-'.$key.'">
    // <div class="3d-title water-intro-title">'.$title.'</div><div class="measure">'.$text.'</div><div class="3d-description water-intro-description">'.$description.'</div>
    // </div>';
    // }
    // print "</div>";



