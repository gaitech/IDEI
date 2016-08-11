<ul class="program-menu-navigation">
<?php 
global $base_url;
$menuItems = menu_tree_all_data('menu-archive-');

print '<li><a href="#">ARCHIVE : </a></li>';
$i=1;
foreach($menuItems as $child) {
   $title  = $child['link']['link_title'];
    print '<li><a href="#program-'.$i.'" rel="" id="anchor1" class="anchorLink">'.$title.'</a></li>';
    $i++;
    }
    
echo "</ul>"; 
?>
