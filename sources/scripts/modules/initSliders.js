var initSliders = {

  init : function() {

    this.cachedom();
    this.initSlider(initSliders.$testimonialSlider, initSliders.$testimonialSliderConfig);

  },

  cachedom: function() {

    this.$testimonialSlider = $("#light-slider");

    this.$testimonialSliderConfig = {
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
      pause: 9000,
    
      keyPress: false,
      controls: false,
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
    };
  },

  initSlider : function($slider, $config) {
    $slider.lightSlider($config);
  }

};

