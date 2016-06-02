(function($) {
	jQuery(window).load(function() {

		jQuery(".search-logo").click(function(){
		   jQuery('#block-search-form').animate({
		      width: "toggle"
		    });
		});  

    /*js for ticker to change particular word bold*/
    jQuery('#block-views-ticker-block h2:contains("IDEI")').each(function(){
      jQuery(this).html(
          jQuery(this).html().replace(/IDEI/g,'<strong>IDEI</strong>')
      );
    });

    // jQuery('#block-menu-menu-programs h2:contains("IDEI\'s")').each(function(){
    //   jQuery(this).html(
    //       jQuery(this).html().replace(/IDEI's/g,'<div>IDEI\'s</div>')
    //   );
    // });

  })
})(jQuery);