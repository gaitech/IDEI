<ul class="program-menu-navigation">
<?php 
global $base_url;
$menuItems = menu_tree_all_data('menu-water');
$menuItemsInner = menu_tree_all_data('menu-water-second-menu');

print '<li><a href="'.$base_url.'/#home-block-block-5">WATER : </a></li>';
$i=1;
foreach($menuItems as $child) {
   $title  = $child['link']['link_title'];
   $url_alias = drupal_get_path_alias($child['link']['link_path']);
    print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
    $i++;
    } 
foreach($menuItemsInner as $child) {
   $title  = $child['link']['link_title'];
   $url_alias = drupal_get_path_alias($child['link']['link_path']);
    print '<li><a href="'.$base_url.'/'.$url_alias.'" >'.$title.'</a></li>';
    $i++;
    } 

echo "</ul>"; 
?>

	



