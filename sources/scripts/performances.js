import $ from 'jquery';
import mixitup from 'mixitup';
import mixitupMultifilter from './modules/mixitup-multifilter';

// mixitup.use(mixitupMultifilter);
// var containerEl = document.querySelector('.performance-wizard');
// var mixer = mixitup(containerEl, {
//     multifilter: {
//         enable: true // enable the multifilter extension for the mixer
//     },
//     controls: {
//         toggleDefault: 'all'
//     }
// });

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

$('.slidecards__card').click(function(){
  
  // if($(this).hasClass("open")){ 
  //   $(this).removeClass('open');
  // }else{
  //   $('.slidecards__card').removeClass('open');
  //   $(this).addClass('open');
  // }

  $('.slidecards__card').removeClass('open');
  $(this).addClass('open');
  
});