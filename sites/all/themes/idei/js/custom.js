(function($) {
	$(window).ready(function() {
  // automatically active paralax on scroll
  $(document).on('scroll', function() {
    if($(this).scrollTop()>=$('#home-block-block-2').position().top){
      $(".custom-navigation li a").each(function() {
        $(this).removeClass("active");
        if($(this).attr("href") == '#home-block-block-2' )
        $(this).addClass("active");
      });
    }
    if($(this).scrollTop()>=$('#home-block-block-3').position().top){
      $(".custom-navigation li a").each(function() {
        $(this).removeClass("active");
        if($(this).attr("href") == '#home-block-block-3' )
        $(this).addClass("active");
      });
    }
    if($(this).scrollTop()>=$('#home-block-block-4').position().top){
      $(".custom-navigation li a").each(function() {
        $(this).removeClass("active");
        if($(this).attr("href") == '#home-block-block-4' )
        $(this).addClass("active");
      });
    }
    if($(this).scrollTop()>=$('#home-block-block-5').position().top){
      $(".custom-navigation li a").each(function() {
        $(this).removeClass("active");
        if($(this).attr("href") == '#home-block-block-5' )
        $(this).addClass("active");
      });
    }
    if($(this).scrollTop()>=$('#home-block-block-6').position().top){
      $(".custom-navigation li a").each(function() {
        $(this).removeClass("active");
        if($(this).attr("href") == '#home-block-block-6' )
        $(this).addClass("active");
      });
    }
  })

  // move to particular part of the page in paralax on load
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
  
  //add active class on clic paralex inner page
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

  // toggle on program landing page
  $(".view-programs-list- .views-field-nothing-1").hide();
  
  $(".view-programs-list- .views-field.views-field-nothing").click(function() {
    $(this).next().slideToggle();
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