// toggle FAQs

var Faqs = {

  init : function() {

    this.cachedom();
    this.bindEvents();

  },

  cachedom: function() {
    this.$questions = $('.faqs__question');
    this.$answers = $('.faqs__answer');
  },

  bindEvents: function() {
    this.$questions.on('click', this.hideAllShowCurrent);
  },

  hideAllShowCurrent: function() {
    var toggle = $(this).nextUntil('.faqs__question');
    toggle.slideToggle();
    Faqs.$answers.not(toggle).slideUp();
  }

};



// $('.faqs__answer').hide();
// $('.faqs__question').click(function() {
//   var toggle = $(this).nextUntil('.faqs__question');
//   toggle.slideToggle();
//   $('.faqs__answer').not(toggle).slideUp();
// });