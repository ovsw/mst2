import './modules/jquery-global.js';
import lightSlider from 'lightslider';


$(document).ready(function(){


  // mobile menu toggle
  $('.header__menu-icon').click(function(){
    $('.top-nav').toggleClass('top-nav__visible');
    $(this).toggleClass('header__menu-icon--close-x');
  });

  // mobile menu sub-items toggle
  $('.top-nav__submenu-button').click(function(){
  var menuItem = $(this).parent();

  if (menuItem.hasClass('submenu-open')) {
    $('.top-nav__has-children').removeClass('submenu-open');
  }else{
    $('.top-nav__has-children').removeClass('submenu-open');
    menuItem.addClass('submenu-open');
  }
  });


  $("#light-slider").lightSlider({
    item: 3,
    autoWidth: false,
    slideMove: 1, // slidemove will be 1 if loop is true
    slideMargin: 10,

    addClass: '',
    mode: "fade",
    useCSS: true,
    cssEasing: 'ease', //'cubic-bezier(0.25, 0, 0.25, 1)',//
    easing: 'linear', //'for jquery animation',////

    speed: 400, //ms'
    auto: true,
    pauseOnHover: false,
    loop: true,
    slideEndAnimation: true,
    pause: 4000,

    keyPress: false,
    controls: true,
    prevHtml: '',
    nextHtml: '',

    rtl:false,
    adaptiveHeight:true,

    vertical:false,
    verticalHeight:500,
    vThumbWidth:100,

    thumbItem:10,
    pager: true,
    gallery: false,
    galleryMargin: 5,
    thumbMargin: 5,
    currentPagerPosition: 'middle',

    enableTouch:true,
    enableDrag:true,
    freeMove:true,
    swipeThreshold: 40,

    responsive : [],

    onBeforeStart: function (el) {},
    onSliderLoad: function (el) {},
    onBeforeSlide: function (el) {},
    onAfterSlide: function (el) {},
    onBeforeNextSlide: function (el) {},
    onBeforePrevSlide: function (el) {}
  });

});

