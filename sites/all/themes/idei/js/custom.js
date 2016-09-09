(function($) {
	$(window).ready(function() {

  //hide applications block in static and dynamic avtivity page
  if( $( ".promotional-hide-label" ).is( ":visible" ) ) {
    $('.detail-product-applications-wrap').show();
    $('.promotional-wrapper').hide();
   }
   else {
    $('.detail-product-applications-wrap').hide();
   }

  
  // automatically active paralax on scroll
  var type = window.location.hash.substr(1);
  if(type.length > 0){
   var divPosition = $('#'+type).offset(); 
   $('html, body').animate({scrollTop: divPosition.top}, "fast");
  }

  // Wrap the content of homepage infographics
  $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(1) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(1) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(1) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");
  $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(2) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(2) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(2) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");
  $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(3) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(3) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(3) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");
  $(".view-infographics.view-display-id-block_1 .field-content li:nth-of-type(4) .field-item:nth-of-type(5), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(4) .field-item:nth-of-type(6), .view-infographics.view-display-id-block_1 .field-content li:nth-of-type(4) .field-item:nth-of-type(7)").wrapAll("<div class='bottom-wrap'></div>");

  //Toggle search in header
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

  // Auto collapse menu for mobile
  if($( document ).width() <= 767) {
    $('#block-idei-custom-home-custom-menu .anchorLink').click(function() {
     $('.navbar-collapse').removeClass('in');
    });
  }

  /*js for ticker to change particular word bold*/
    $('#block-views-ticker-block h2:contains("IDEI")').each(function(){
      $(this).html(
        $(this).html().replace(/IDEI/g,'<strong>IDEI</strong>')
      );
    });

  //change text of products
  $('.read-more-complex a').text('Know more');

// homepage menu add active class
  $('.custom-navigation li a').click(function() {
    $('.custom-navigation li a').removeClass('active');
    $(this).addClass('active');
  });
  
  //Add active class on page load
  var pgurl = window.location.href.substr(window.location.href.lastIndexOf("/")+1);
  $(".custom-navigation li a").each(function() {
    $(this).removeClass("active");
    if($(this).attr("href") == pgurl || $(this).attr("href") == '' )
    $(this).addClass("active");
  });

  //add active class for non paralax items in main custom menu
  var chk_url = window.location.href;
  $("#block-idei-custom-home-custom-menu li a").each(function() {
    $(this).removeClass("active");
    if($(this).attr("href") == chk_url)
    $(this).addClass("active");
  });

  //add active class on click paralex inner page
  $('.program-menu-navigation li a').click(function(e) {
    e.preventDefault(); 
    $('.program-menu-navigation li a').removeClass('active');
    $(this).addClass('active');
  });

  $(".second-views-menu .views-field-php a").each(function() {
    $(this).removeClass("active");
    if($(this).attr("href") == chk_url)
    $(this).addClass("active");
  });
  



  var pgurl2 = window.location.href.substr(window.location.href.lastIndexOf("#")+1);
  var ac_url = '#'+pgurl2;
  $(".program-menu-navigation li a").each(function() {
    $(this).removeClass("active");
    if($(this).attr("href") == ac_url) {
    $(this).addClass("active");}
  });

  // toggle on program landing page
  $(".view-programs-list- .views-field-nothing-1").hide();

  $(".technology-main-wrapper .more").click(function() {
    $(this).parent().parent().parent().next().slideToggle();
  });

  // hide container if empty
  $('.product-empty').next().hide();
  
  /*..........js for aaproach submenu................*/
  $(".second-views-menu .block-title").insertBefore(".second-views-menu .view .views-row-1");

  /*------------js for typewriter effect to media caption------------*/
 
  function splitwords(splitclass, divclass) {
    var text = document.querySelector('.'+splitclass+' .'+divclass).innerHTML;
    var chars = text.split('');
    var container = document.querySelector('.'+divclass);
    var i = 0;
    container.innerHTML = "";
    setInterval(function () {
      if (i < chars.length) {
        container.innerHTML += chars[i++];
      } 
      else {
        i = 0;
          container.innerHTML = "";
      }
    }, 250);
  }

  if($('body.page-media-listing').length > 0) {
    splitwords('page-media-listing', 'haeder-caption');
  }
  else if($('body.page-awards-media').length > 0) {
    splitwords('page-awards-media', 'haeder-caption');
  }

});


$(window).load(function() {


  //js for hiding case study//
  var chk_pdf =  jQuery(".case-study .views-field-field-case-study-upload-pdf .field-content").text();
  if(chk_pdf.length<=0){
  jQuery(".case-study .views-field-field-case-study-upload-pdf").hide();
  }

  //js for hiding pagination from no result behaviour in product slider//
  var ch_photo = $(".product-img-gallery .product-no-result").text(); 
  if(ch_photo.length>0) {
    $(".product-img-gallery .jcarousel-prev").hide();
    $(".product-img-gallery .jcarousel-next").hide();
  }

  var ch_video = $(".product-video-gallery .product-no-result").text(); 
  if(ch_photo.length>0) {
    $(".product-video-gallery .jcarousel-prev").hide();
    $(".product-video-gallery .jcarousel-next").hide();
  }
  /////////////////////////////////////////////////////////////////////
  
  //add class to product slider//
  $('.product-no-result').parent().parent().parent().parent().addClass('full-width');
  $('.product-no-result').parent().parent().parent().addClass('height');

  // move to particular part of the page on load
  var type = window.location.hash.substr(1);
  if(type.length > 0){
   var divPosition = $('#'+type).offset(); 
   $('html, body').animate({scrollTop: divPosition.top}, "fast");
  }
});

})(jQuery);