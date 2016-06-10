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

// homepage menu add active class
  $('.custom-navigation li a').click(function(e) {
    e.preventDefault(); 
    $('.custom-navigation li a').removeClass('active');
    $(this).addClass('active');
  });

  var pgurl = window.location.href.substr(window.location.href.lastIndexOf("/")+1);
  $(".custom-navigation li a").each(function() {
    $(this).removeClass("active");
    if($(this).attr("href") == pgurl || $(this).attr("href") == '' )
    $(this).addClass("active");
  });

 })
})(jQuery);