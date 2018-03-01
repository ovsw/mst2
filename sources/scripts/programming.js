import './modules/jquery-global.js';

import 'script-loader!./modules/Project.js';

import lightSlider from 'lightslider';
import 'script-loader!./modules/initSliders.js';

import 'script-loader!./modules/MobileMenu.js';
import 'script-loader!./modules/Faqs.js';


$(document).ready(function(){

  Project.init();
  Faqs.init();
  initSliders.init();


});

