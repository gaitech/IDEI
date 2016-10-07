
  <script type="text/javascript">
 //    $(document).ready(function () {
 //      $(".3d-content-wrap .3dd").hide();
 //      $(".3d-content-wrap .3dd.3d-item-0").show();

 //      $('.3d-check a').click(function() {
 //        var a =jQuery(this).attr('class');
 //          $(".3d-content-wrap .3dd").hide();
 //          $(".3d-content-wrap ."+a).show();
 //      });
 //      var carousel = $("#carousel").waterwheelCarousel({
 //        flankingItems: 3,
 //        movingToCenter: function ($item) {
 //          $('#callback-output').append('test');
 //        },
 //      });

 //      $('#reload').bind('click', function () {
 //        newOptions = eval("(" + $('#newoptions').val() + ")");
 //        carousel.reload(newOptions);
 //        return false;
 //      });

 //      $('#prev').bind('click', function () {
 //        carousel.prev();
 //        return false
 //      });

 //      $('#next').bind('click', function () {
 //        carousel.next();
 //        return false;
 //        });
      
 //      $('#prev').click(function() {      
 //        setTimeout(function(){
 //           $(".3d-check a").each(function() {
 //            var slider_class = $(this).children().attr("class");
 //            if(slider_class == 'carousel-center'){
 //              var cls =$(this).attr("class");
 //              $(".3d-content-wrap .3dd").hide();
 //              $(".3d-content-wrap .3dd."+cls).show();
 //            }
 //          });
 //        }, 300);
 //      });

 //      $('#next').click(function() {      
 //        setTimeout(function(){
 //           $(".3d-check a").each(function() {
 //            var slider_class = $(this).children().attr("class");
 //            if(slider_class == 'carousel-center'){
 //              var cls =$(this).attr("class");
 //              $(".3d-content-wrap .3dd").hide();
 //              $(".3d-content-wrap .3dd."+cls).show();
 //            }
 //          });
 //        }, 300);
 //      });  
 //    });
   </script>

  <style type="text/css">

   #cbControlRight { margin-right: 4%; }

.cbcontrol:hover { cursor: pointer; }

.stage {
  float: left;
  height: 330px;
  width: 100%;
  max-width: 1000px;
  z-index: 10;
  position: relative;
  -webkit-backface-visibility: hidden;
}

.cbImage {
  width: 200px;
  height: 268px;
  float: left;
  margin: 25px 0px 25px 0px;
  color: white;
  box-shadow: 0px 5px 10px 0px #D6D6D6;
  position: absolute;
  -webkit-transform-style: preserve-3d;
  transform-style: preserve-3d;
}

.cbImage img {
  width: 100%;
  height: 100%;
}

.inactiveLeft {
  -webkit-transform: perspective(500px) rotateY(60deg);
  -O-transform: perspective(500px) rotateY(60deg);
  transform: perspective(500px) rotateY(60deg);
  -webkit-transition: all .5s ease-out;
  -O-transition: all .5s ease-out;
  transition: all .5s ease-out;
  box-shadow: 12px 0px 20px 0px #d6d6d6;
}

.inactiveRight {
  -webkit-transform: perspective(500px) rotateY(-60deg);
  -O-transform: perspective(500px) rotateY(-60deg);
  transform: perspective(500px) rotateY(-60deg);
  -webkit-transition: all .5s ease-out;
  -O-transition: all .5s ease-out;
  transition: all .5s ease-out;
  box-shadow: -12px 0px 20px 0px #d6d6d6;
}

.active {
  z-index: 100;
  -webkit-transform: perspective(500px) rotateY(0deg);
  -O-transform: perspective(500px) rotateY(0deg);
  transform: perspective(500px) rotateY(0deg);
  -webkit-transition: all .5s ease-out;
  -O-transition: all .5s ease-out;
  transition: all .5s ease-out;
}

.intro { color: #fff; }
</style>
    
  <div class="controls">
    <div class="cbcontrol" id="cbControlRight"><</div>
    <div class="cbcontrol" id="cbControlLeft">></div>
  </div>

<?php
print '<div class="stage">';

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
    print '<div class="cbImage"><img src="'.$body_image_path.'" id="item-'.$key.'" /></div>';
    }


    
    print '</div>';
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
 ?>

<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script> 
 <?php global $base_url; 
 print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/coverflow-slideshow.js"></script>';?>