(function($) {

	$(window).ready(function() {

  // move to particular part of the page on load
  var type = window.location.hash.substr(1);
  if(type.length > 0){
   var divPosition = $('#'+type).offset(); 
   $('html, body').animate({scrollTop: divPosition.top}, "fast");
  }
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
   // var size = $(window).width();
   // if( size <='767'){
   //  $(".secondry-menu").insertAfter('#block-system-main-menu')
   // }
    /*js for ticker to change particular word bold*/
    $('#block-views-ticker-block h2:contains("IDEI")').each(function(){
      $(this).html(
          $(this).html().replace(/IDEI/g,'<strong>IDEI</strong>')
      );
    });
    //change text of products
    jQuery('.read-more-complex a').text('Read more');

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
  
  $('.program-menu-navigation li a').click(function(e) {
    e.preventDefault(); 
    $('.program-menu-navigation li a').removeClass('active');
    $(this).addClass('active');
  });
 var pgurl2 = window.location.href.substr(window.location.href.lastIndexOf("#")+1);
 var ac_url = '#'+pgurl2;
  $(".program-menu-navigation li a").each(function() {
    $(this).removeClass("active");
    if($(this).attr("href") == ac_url) {
    $(this).addClass("active");}
  });
  $(".view-programs-list- .views-field-nothing-1").hide();
  $(".view-programs-list- .views-field.views-field-nothing").click(function() {
  $(this).next().slideToggle();
  });

  $(".pr-photo").click(function() {
    $(".product-video-gallery").hide();
    $(".product-img-gallery").show();
  });
  
  $(".pr-video").click(function() {
    $(".product-img-gallery").hide();
    $(".product-video-gallery").show();
  });

 });


  $(window).load(function() {
  // move to particular part of the page on load
  var type = window.location.hash.substr(1);
  if(type.length > 0){
   var divPosition = $('#'+type).offset(); 
   $('html, body').animate({scrollTop: divPosition.top}, "fast");
  }
  });

})(jQuery);