(function($) {
	$(window).load(function() {

		$(".search-logo").click(function(){
		   $('#block-search-form').animate({
		      width: "toggle"
		    });
		});  
    $("body").click(function() {
      $('#block-search-form').hide("slow");
    });
    $(".social-links").click(function(e) {
      e.stopPropagation();
    });

    /*js for ticker to change particular word bold*/
    $('#block-views-ticker-block h2:contains("IDEI")').each(function(){
      $(this).html(
          $(this).html().replace(/IDEI/g,'<strong>IDEI</strong>')
      );
    });

    // jQuery('#block-menu-menu-programs h2:contains("IDEI\'s")').each(function(){
    //   jQuery(this).html(
    //       jQuery(this).html().replace(/IDEI's/g,'<div>IDEI\'s</div>')
    //   );
    // });

  })
})(jQuery);