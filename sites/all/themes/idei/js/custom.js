(function($) {
	jQuery(window).load(function() {

		jQuery(".search-logo").click(function(){
		   jQuery('#block-search-form').animate({
		      width: "toggle"
		    });
		}); 

		/*js for footer change color of particular word*/
		jQuery('.copyright p:nth-of-type(2):contains("GAI")').each(function(){
      jQuery(this).html(
        jQuery(this).html().replace(/GAI/g,'<span style="color:#43bfef">GAI</span>')
      );
    }); 

    /*js for ticker to change particular word bold*/
    jQuery('#block-views-ticker-block h2:contains("IDEI")').each(function(){
      jQuery(this).html(
          jQuery(this).html().replace(/IDEI/g,'<strong>IDEI</strong>')
      );
    });

})
})(jQuery);