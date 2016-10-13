<?php global $base_url; 
print  '<link href="'.$base_url.'/sites/all/modules/custom/idei_custom/css/jquery.Carousel3D.css" rel="stylesheet" type="text/css" />';
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery-1.8.3.min.js"></script>'; 
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/modernizr.2.6.2.js"></script>';
print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery.Carousel3D.js"></script>';

?>
  <script>
  $(document).ready(function () {
      $('#con').Carousel3D({
        backfaceVisible:false,
        width:200,
        height:200
      });
      $(".3d-content-wrap .3dd").hide();
      $(".3d-content-wrap .3dd.3d-item-0").show();
   });
  </script>
      <div class="navigation-button">
      <div class="prev-button"><span id="myCarousel1"> < </span></div>
      <div class="next-button"> <span id="myCarousel2"> > </span></div>
    </div>

<?php
print '<div id="con" class="thri"><ul>';
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
      print '<li> <img src="'.$body_image_path.'" /></li>';
    }

    
    print '</ul></div>';
    print '<div class="3d-content-wrap water-intro-content-wrap">';
    foreach ($result as $key => $value) {
    $nid1 = $result[$key]->entity_id;
    $node1 = node_load($nid1);
    $title = $node1->title;
    $description = $node1->body['und'][0]['value'];
    $text = $node1->field_global_water_foot_print_li['und'][0]['value'];
    print '<div class="3dd 3d-item-'.$key.'">
    <div class="3d-title water-intro-title">'.$title.'</div><div class="measure">'.$text.'</div><div class="3d-description water-intro-description">'.$description.'</div>
    </div>';
    }
    print "</div>";


?>