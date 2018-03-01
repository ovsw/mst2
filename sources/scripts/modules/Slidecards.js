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