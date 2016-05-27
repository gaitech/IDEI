(function($) {
	jQuery(window).load(function() {

		jQuery(".search-logo img").click(function(){
		   jQuery('#block-search-form').animate({
		      width: "toggle"
		    });
		});  

})
})(jQuery);