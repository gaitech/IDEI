/**
 * Author: bill.kang
 * Date: 2013-1-3
 * Time: 11:09 am
 * reference media:http://24ways.org/2010/intro-to-css-3d-transforms/
 */
(function($){
    var transformProp = Modernizr.prefixed('transform');

    function Carousel3D(el,options){
        this.element=el;
        this.rotation=0;
        this.panelCount=this.element.children.length;
        this.theta=0;
        this.options=options;

        var perspectiveProp=Modernizr.prefixed('perspective');
        this.element.parentNode.style[perspectiveProp]=(options.width*5)+'px';
    }
    Carousel3D.prototype.modify=function(){
        var panel,angle,i;
        this.panelSize=this.element['offsetWidth'];
        this.theta=360/this.panelCount;
        this.radius=Math.round((this.panelSize/2)/Math.tan(Math.PI/this.panelCount));

        for(i=0;i<this.panelCount;i++){
            panel=this.element.children[i];
            angle=this.theta * i;
            panel.style.opacity=this.options.opacity;
            panel.style[transformProp]='rotateY('+angle+'deg) translateZ('+this.radius+'px)';
        }

        // adjust rotation so panels are always flat
        this.rotation = Math.round( this.rotation / this.theta ) * this.theta;
        this.transform();
    }
    Carousel3D.prototype.transform=function(){
        // push the carousel back in 3D space,
        // and rotate it
        this.element.style[transformProp]='translateZ(-'+this.radius+'px) rotateY('+this.rotation+'deg)';
    }
    Carousel3D.prototype.autoPlay=function(){
        this.rotation += this.theta * -1;
        this.transform();
    }

    $.fn.Carousel3D=function(options){
        var defaults={
            width:200,
            height:180,
            autoPlay:false,
            pauseOnHover:false,
            speed:3000,
            opacity:1,
            backfaceVisible:false
        };
        var options= $.extend(defaults,options);

        return this.each(function(){
            var contrainer=$(this);
            var carousel=contrainer.find('ul:first');
            var autoPlayInterval;

            var nav=$('<ul class="nav"></ul>');
            var itemsCount=carousel.find('li').length;
            nav.css({'width':itemsCount*20+'px','left':(options.width-itemsCount*20)/2});
            for(var i= 0,len=itemsCount;i<len;i++){
                nav.append('<li data-increment="'+i+'"></li>');
            }
            // contrainer.append(nav);

            contrainer.addClass('contrainer');
            contrainer.width(options.width);
            contrainer.height(options.height);

            setTimeout( function(){
                contrainer.addClass('ready');
            }, 0);

            carousel.addClass('carousel');
            if(!options.backfaceVisible){
                carousel.addClass('backface-invisible');
            }

            var carousel3D=new Carousel3D(carousel.get(0),options);
            carousel3D.modify();

            if(options.autoPlay){
                autoPlayInterval = setInterval(function(){
                    carousel3D.autoPlay();
                },options.speed);
            }

            if(options.pauseOnHover){
                carousel.hover(function(){
                    clearInterval(autoPlayInterval);
                },function(){
                    autoPlayInterval = setInterval(function(){
                        carousel3D.autoPlay();
                    },options.speed);
                });
            }

            nav.find('li').hover(function(){
                // clearInterval(autoPlayInterval);
                // carousel3D.rotation = carousel3D.theta * -$(this).attr('data-increment');
                // carousel3D.modify();
            },function(){
                autoPlayInterval = setInterval(function(){
                    // carousel3D.autoPlay();
                },options.speed);
            });
            var count =0;
            var length = $(".3dd").length;
            var slider_count = 0;

            $("#myCarousel1").click(function(){
                count -= 1;
                slider_count -= 1;
                carousel3D.rotation = carousel3D.theta * - slider_count;
                carousel3D.modify();
                if(count < 0){
                count = length;
                }
                if(count == length){
                    count = length-1;
                }
                opacity_count=count+1;
                $('.carousel.backface-invisible > li img').css("opacity",".3");
                $('.carousel.backface-invisible > li:nth-of-type('+opacity_count+') img').css("opacity","1");
                $(".3d-content-wrap .3dd").hide();
                $(".3d-content-wrap .3dd.3d-item-"+count).show();

            });
            $("#myCarousel2").click(function(){
            count += 1;
            slider_count += 1;
            carousel3D.rotation = carousel3D.theta * - slider_count;
            carousel3D.modify();
            if(count >= length){
            count = 0;
            }
            console.log(count);

            opacity_count=count+1;
            $('.carousel.backface-invisible > li img').css("opacity",".3");
            $('.carousel.backface-invisible > li:nth-of-type('+opacity_count+') img').css("opacity","1");
            $(".3d-content-wrap .3dd").hide();
            $(".3d-content-wrap .3dd.3d-item-"+count).show();
            });

        });
    }
})(jQuery);
