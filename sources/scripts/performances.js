import './modules/jquery-global.js';
import 'script-loader!./modules/loader.js';
import 'script-loader!./modules/Project.js';

import lightSlider from 'lightslider';
import 'script-loader!./modules/initSliders.js';

import 'script-loader!./modules/Menu.js';
import 'script-loader!./modules/Slidecards.js';
import 'script-loader!./modules/Faqs.js';
import 'script-loader!./modules/desktop-video.js';
import './modules/Wizard.js';
import 'script-loader!./modules/jquery.basictable.min.js';




$(document).ready(function(){

  $('.body-rte table').basictable();

  Project.init();
  Menu.init(); 
  Faqs.init();
  initSliders.init();
  
});






