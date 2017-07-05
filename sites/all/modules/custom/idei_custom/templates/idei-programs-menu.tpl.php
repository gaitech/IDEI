<ul class="program-menu-navigation">
<?php 
global $base_url;
$menuItems = menu_tree_all_data('menu-programs');

print '<li><a href="'.$base_url.'/#home-block-block-4">PROGRAMMES : </a></li>';
$i=1;
foreach($menuItems as $child) {
   $title  = $child['link']['link_title'];
    print '<li><a href="#program-'.$i.'" rel="" id="anchor1" class="anchorLink">'.$title.'</a></li>';
    $i++;
    }
   print '<li><a href="#program-5" rel="" id="anchor1" class="anchorLink">MARKET DEVELOPMENT</a></li>';
   print '<li><a href="#program-7" rel="" id="anchor1" class="anchorLink">PAST PROJECTS</a></li>';
    
echo "</ul>"; 
?>

	



