<ul class="program-menu-navigation">
<?php $menuItems = menu_tree_all_data('menu-programs');

$i=1;
foreach($menuItems as $child) {
   $title  = $child['link']['link_title'];
    print '<li><a href="#program-'.$i.'" rel="" id="anchor1" class="anchorLink">'.$title.'</a></li>';
    $i++;
    }
echo "</ul>"; 
?>

	



