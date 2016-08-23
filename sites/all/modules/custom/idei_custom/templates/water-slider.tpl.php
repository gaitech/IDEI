<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
 <?php global $base_url; 
 print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery.waterwheelCarousel.js"></script>';?>
 <script type="text/javascript">
    $(document).ready(function () {
      $(".3d-content-wrap .3dd").hide();
      $(".3d-content-wrap .3dd.3d-item-0").show();

      $('.3d-check a').click(function() {
        var a =jQuery(this).attr('class');
          $(".3d-content-wrap .3dd").slideUp();
          $(".3d-content-wrap ."+a).slideDown();
      });
      var carousel = $("#carousel").waterwheelCarousel({
        flankingItems: 3,
        movingToCenter: function ($item) {
          $('#callback-output').append('test');
        },
      });

      $('#reload').bind('click', function () {
        newOptions = eval("(" + $('#newoptions').val() + ")");
        carousel.reload(newOptions);
        return false;
      });

      $('#prev').bind('click', function () {
        carousel.prev();
        return false
      });

      $('#next').bind('click', function () {
        carousel.next();
        return false;
        });
      
      $('#prev').click(function() {      
        setTimeout(function(){
           $(".3d-check a").each(function() {
            var slider_class = $(this).children().attr("class");
            if(slider_class == 'carousel-center'){
              var cls =$(this).attr("class");
              $(".3d-content-wrap .3dd").slideUp();
              $(".3d-content-wrap .3dd."+cls).slideDown();
            }
          });
        }, 300);
      });

      $('#next').click(function() {      
        setTimeout(function(){
           $(".3d-check a").each(function() {
            var slider_class = $(this).children().attr("class");
            if(slider_class == 'carousel-center'){
              var cls =$(this).attr("class");
              $(".3d-content-wrap .3dd").fadeOut();
              $(".3d-content-wrap .3dd."+cls).fadeIn();
            }
          });
        }, 300);
      });  
    });
  </script>

  <style type="text/css">
      #carousel {
         height:300px;
        position:relative;
        clear:both;
        overflow:hidden;
      }
      #carousel img {
        visibility:hidden; 
        cursor:pointer; 
      }
    </style>
    
    <div class="navigation-button">
      <div class="prev-button"><a href="#" id="prev">Prev</a></div>
      <div class="next-button"> <a href="#" id="next">Next</a></div>
    </div>
<?php
print '<div id="carousel" class="3d-check">';
  $query = db_select('field_data_field_water_image', 't');
  $query->join('file_managed', 'n', 'n.fid = t.field_water_image_fid');
  $result = $query
    ->fields('n', array('uri'))
    ->fields('t', array('entity_id'))
    ->execute()
    ->fetchAll();
    foreach ($result as $key => $value) {
    $image =  $result[$key]->uri;
    $body_style = 'program_image_410___320_';
    $body_image_path = image_style_url($body_style,$image);
    print '<a href="#" class="3d-item-'.$key.'"><img src="'.$body_image_path.'" id="item-'.$key.'" /></a>';
    }

    
    print '</div>';
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
 

