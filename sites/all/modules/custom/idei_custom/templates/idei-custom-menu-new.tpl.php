
<div id="wrap">
<?php $menuItems = menu_tree_all_data('main-menu');
$i=1;
foreach($menuItems as $child) {

    $title  = $child['link']['link_title'];

    print '<a href="#block-block-'.$i.'" rel="" id="anchor1" class="anchorLink">'.$title.'</a>';
    $i++;
}
  
  
?>

	
	</div>


