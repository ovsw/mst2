// toggle FAQs

$('.faqs__answer').hide();
$('.faqs__question').click(function() {
  var toggle = $(this).nextUntil('.faqs__question');
  toggle.slideToggle();
  $('.faqs__answer').not(toggle).slideUp();
});