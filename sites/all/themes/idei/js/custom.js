(function($) {
	$(window).ready(function() {

		$(".search-logo").click(function(){
		   $('#block-search-form').animate({
		      width: "toggle"
		    });
		}); 
 $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(1) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(1) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(1) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");
 $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(2) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(2) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(2) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");
 $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(3) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(3) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(3) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");
 $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(4) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(4) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(4) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");

    $("body").click(function() {
      $('#block-search-form').hide("slow");
    });
    $(".social-links").click(function(e) {
      e.stopPropagation();
    });
   if($( document ).width() <= 767) {
    $('#block-idei-custom-home-custom-menu .anchorLink').click(function() {
     $('.navbar-collapse').removeClass('in');
   });
  }
   var size = $(window).width();
   if( size <='767'){
    $(".secondry-menu").insertAfter('#block-system-main-menu')
   }
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
  
  $(".views-field.views-field-nothing").click(function() {
  $(this).next().slideToggle();
  });

 })
})(jQuery);