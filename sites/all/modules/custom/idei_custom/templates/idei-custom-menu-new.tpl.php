

	<ul class="custom-navigation">
<?php $menuItems = menu_tree_all_data('main-menu');
$i=1;
foreach($menuItems as $child) {

    $title  = $child['link']['link_title'];
	$a=$i+1;
    print '<li><a href="#home-block-block-'.$a.'" rel="" id="anchor1" class="anchorLink">'.$title.'</a></li>';
    $i++;
}
  echo "</ul>";
  
?>

	



