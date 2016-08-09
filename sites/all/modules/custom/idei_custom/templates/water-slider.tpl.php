<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
 <?php global $base_url; 
 print '<script src="'.$base_url.'/sites/all/modules/custom/idei_custom/js/jquery.waterwheelCarousel.js"></script>';?>
 <script type="text/javascript">
      $(document).ready(function () {
        jQuery(".3d-content-wrap .3dd").hide();
        jQuery(".3d-content-wrap .3dd.3d-item-0").show();
          jQuery('.3d-check a').click(function() {
            var a =jQuery(this).attr('class');
            jQuery(".3d-content-wrap .3dd").fadeOut();
            jQuery(".3d-content-wrap ."+a).fadeIn();
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
<?php
print '<div id="carousel" class="3d-check">';
  $result = db_select('node', 'n') 
    ->fields('n',array('nid'))  
     ->condition('n.type', 'water_3d_gallery')
    ->execute() 
    ->fetchAll();
    $count = count($result);
    for($i=0; $i<=$count; $i++) {
    $nid = $result[$i]->nid;
    $node = node_load($nid);
    $image = $node->field_water_image['und'][0]['uri'];

    $body_style = 'program_image_410___320_';
    $body_image_path = image_style_url($body_style,$image);

    print '<a href="#" class="3d-item-'.$i.'"><img src="'.$body_image_path.'" id="item-'.$i.'"  /></a>';
    }
    print '</div>';
    print '<div class="3d-content-wrap">';
    for($i=0; $i<=$count; $i++) {
    $nid1 = $result[$i]->nid;
    $node1 = node_load($nid1);
    $title = $node1->title;
    $description = $node1->body['und'][0]['value'];
    $text = $node1->field_global_water_foot_print_li['und'][0]['value'];
    print '<div class="3dd 3d-item-'.$i.'">
    <div class="3d-title">'.$title.'</div><div class="measure">'.$text.'</div><div class="3d-description">'.$description.'</div>
    </div>';
    }
    print "</div>";
?> 

