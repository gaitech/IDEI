<?php if ($is_front){  ?>
	<ul class="custom-navigation">
  <?php $menuItems = menu_tree_all_data('main-menu');
  global $base_url;
  $i=2;
  foreach($menuItems as $child) {
     $title  = $child['link']['link_title'];
     $url_alias = drupal_get_path_alias($child['link']['link_path']);
     $link = $child['link']['title'];
     $link = trim(strtolower($link));
 
     if( $link == 'about us')
     {
      print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'annual reports'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'archives'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'partners'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'engage'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else {
      print '<li><a href="#home-block-block-'.$i.'" rel="" id="anchor1" class="anchorLink">'.$title.'</a></li>';
      $i++;
     }
  }
  echo "</ul>";
}
else { ?>
  <div id="block-system-main-menu">
  <ul class="main-navigation">
  <?php $menuItems = menu_tree_all_data('main-menu');
  global $base_url;
  $i=2;
  foreach($menuItems as $child) {
     $title  = $child['link']['link_title'];
     $url_alias = drupal_get_path_alias($child['link']['link_path']);
     $link = $child['link']['title'];
     $link = trim(strtolower($link));
     if( $link == 'about us')
     {
      print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'annual reports'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'archives'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'partners'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else if ( $link == 'engage'){
       print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
     }
     else {
      print '<li><a href="'.$base_url.'/#home-block-block-'.$i.'" >'.$title.'</a></li>';
      $i++;
     }
  }
  echo "</ul></div>";
}
