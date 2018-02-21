import $ from 'jquery';
import mixitup from 'mixitup';
import mixitupMultifilter from './modules/mixitup-multifilter';


mixitup.use(mixitupMultifilter);
var wizardContainerEl = document.querySelector('.performance-wizard');
if (wizardContainerEl != null) {
  var mixer = mixitup(wizardContainerEl, {
      multifilter: {
          enable: true // enable the multifilter extension for the mixer
      },
      controls: {
          toggleDefault: 'all'
      },
      callbacks: {
        onMixEnd: function(state) {
            renderTotalShow(state);
            renderActiveFilters();
        }
    }
  });
}



function renderTotalShow(state) {
  $('.itemCount').html(state.totalShow);
  $('.wizard-status-message, .performance-wizard').addClass("highlight").delay(1000).queue(function(){
    $(this).removeClass("highlight").dequeue();
  });
}

function renderActiveFilters() {
  var activeControls = Array.from(document.querySelectorAll('.mixitup-control-active'));
    var activeFiltersDiv = document.querySelector('.active-filters');

    activeFiltersDiv.innerHTML = '';

    var activeLabels = activeControls.map(function(activeControl) {
        return activeControl.getAttribute('data-label');
    });

    activeFiltersDiv.innerHTML = activeLabels.join(', '); // eg: 'Filter 1, Filter 2, Filter 3'
}

// extra criteria toggle
$('.themeFilterToggle').click(function(){
  $('.performance-wizard__ThemeFilters').slideToggle();
  $('.performance-wizard__ThemeFilters').find('.mixitup-control-active').trigger('click');
});
$('.holidayFilterToggle').click(function(){
  $('.performance-wizard__holidayFilters').slideToggle();
  $('.performance-wizard__holidayFilters').find('.mixitup-control-active').trigger('click');
});

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