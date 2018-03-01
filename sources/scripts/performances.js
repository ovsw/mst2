import './modules/jquery-global.js';

import 'script-loader!./modules/Project.js';

import lightSlider from 'lightslider';
import 'script-loader!./modules/initSliders.js';

import 'script-loader!./modules/Menu.js';
import 'script-loader!./modules/Slidecards.js';
import 'script-loader!./modules/Faqs.js';
import './modules/Wizard.js';

$(document).ready(function(){

  Project.init();
  Menu.init(); 
  Faqs.init();
  initSliders.init();
  
});






