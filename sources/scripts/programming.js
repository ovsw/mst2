//import $ from 'jquery';

// Blank
$(document).ready(function(){

  //used to disable scroll while mobile side menu is open
    function noscroll() {
      window.scrollTo( 0, 0 );
    }

    // mobile nav toggle
    $('.nav-icon').click(function(){
      $(this).toggleClass('open');
      $("#sideNav").toggleClass("navOpen");
      $(".mainWrapper").toggleClass("withMobileMenuOpen");

      // disable scroll while mobile side menu is open
      if ($('#sideNav').hasClass('navOpen')) {window.addEventListener('scroll', noscroll);}
      else{window.removeEventListener('scroll', noscroll);}
    });

    // *************************
    // box animation magicscroll
    // *************************

    // init ScrollMagic
    //var controller = new ScrollMagic.Controller({container: ".mainWrapper"});
    var controller = new ScrollMagic.Controller();
    
  // scroll button in hero
  controller.scrollTo(function (newScrollPos) {
    $("html, body").animate({scrollTop: newScrollPos}, 1000);
  });
  $('.scrollBtn').click(function(){
    controller.scrollTo('.packageSlide1');
  });
   $('.staff-slideLink').click(function(){
    controller.scrollTo('.packageSlide2');
  });
  $('.programDev-slideLink').click(function(){
    controller.scrollTo('.packageSlide3');
  });
  $('.supplies-slideLink').click(function(){
    controller.scrollTo('.packageSlide4');
  });  
  $('.supervision-slideLink').click(function(){
    controller.scrollTo('.packageSlide5');
  });
  $('.support-slideLink').click(function(){
    controller.scrollTo('.packageSlide6');
  });
  // loop through all package sections
  // $($('.package-slide')).each(function(){

  // 	var packageSlidePin  = new ScrollMagic.Scene({
  //     triggerElement: this,
  //     triggerHook: '0',
  //     pushFollowers: true,
  //     duartion: '100%'
  //     })
  //     .setPin(this)
  //     .addIndicators({
  //       colorTrigger: 'pink',
  //       colorStart: 'red'
  //     })
  //     .addTo(controller);
  // });

	// pin hero
  // var heroPin  = new ScrollMagic.Scene({
  //   triggerElement: '.hero-section',
  //   triggerHook: '0',
  //   pushFollowers: true,
  //   duartion: '100%'
  //   })
  //   .setPin('.hero-section')
  //   .addIndicators()
  //   .addTo(controller);

    // build scene
    // var scene = new ScrollMagic.Scene({
    // 	triggerElement: '.package1'
    // 	// ,duration: 300
    // 	,triggerHook: 0
    // })
    // .setClassToggle('.package1','scrolled')
    // .addIndicators({
    // 	name: 'myindicator',
    // 	colorTrigger: 'black',
    // 	colorStart: 'red'
    // })
    // .addTo(controller);



});
