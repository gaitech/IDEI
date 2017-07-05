(function($) {
	$(window).ready(function() {
  // automatically active paralax on scroll
  $(document).on('scroll', function() {
    if($('#program-1').length){
      if($(this).scrollTop()>=$('#program-1').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-1') {
          $(this).addClass("active");}
        });  
      }
    }
    if($('#program-2').length){
      if($(this).scrollTop()>=$('#program-2').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-2') {
          $(this).addClass("active");}
        });  
      }
    }
    if($('#program-3').length){
      if($(this).scrollTop()>=$('#program-3').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-3') {
          $(this).addClass("active");}
        });  
      }
    }
        if($('#program-4').length){
      if($(this).scrollTop()>=$('#program-4').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-4') {
          $(this).addClass("active");}
        });  
      }
    }
        if($('#program-5').length){
      if($(this).scrollTop()>=$('#program-5').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-5') {
          $(this).addClass("active");}
        });  
      }
    }
    if($('#program-6').length){
      if($(this).scrollTop()>=$('#program-6').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-6') {
          $(this).addClass("active");}
        });  
      }
    }
    if($('#program-7').length){
      if($(this).scrollTop()>=$('#program-7').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-7') {
          $(this).addClass("active");}
        });  
      }
    }
    if($('#program-8').length){
      if($(this).scrollTop()>=$('#program-8').position().top){
        $(".program-menu-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#program-8') {
          $(this).addClass("active");}
        });  
      }
    }
    if($('#home-block-block-2').length){
      if($(this).scrollTop()>=$('#home-block-block-2').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#home-block-block-2' )
          $(this).addClass("active");
        });
      }
    }
    if($('#home-block-block-3').length){
      if($(this).scrollTop()>=$('#home-block-block-3').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#home-block-block-3' )
          $(this).addClass("active");
        });
      }
    }
    if($('#home-block-block-4').length){
      if($(this).scrollTop()>=$('#home-block-block-4').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#home-block-block-4' )
          $(this).addClass("active");
        });
      }
    }
    if($('#home-block-block-5').length){
      if($(this).scrollTop()>=$('#home-block-block-5').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#home-block-block-5' )
          $(this).addClass("active");
        });
      }
    }
    if($('#home-block-block-6').length){
      if($(this).scrollTop()>=$('#home-block-block-6').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#home-block-block-6' )
          $(this).addClass("active");
        });
      }
    }
    if($('#home-block-block-7').length){
      if($(this).scrollTop()>=$('#home-block-block-7').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#home-block-block-7' )
          $(this).addClass("active");
        });
      }
    }
    if($('#home-block-block-8').length){
      if($(this).scrollTop()>=$('#home-block-block-8').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
          if($(this).attr("href") == '#home-block-block-8' )
          $(this).addClass("active");
        });
      }
    }
    if($('#block-blockqueue-homepage-its-all-about-water').length){
      if($(this).scrollTop()<=$('#block-blockqueue-homepage-its-all-about-water').position().top){
        $(".custom-navigation li a").each(function() {
          $(this).removeClass("active");
        });
      }
    }
  })

})

})(jQuery);