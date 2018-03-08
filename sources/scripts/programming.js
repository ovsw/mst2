import './modules/jquery-global.js';
import 'script-loader!./modules/loader.js';
import 'script-loader!./modules/Project.js';

import lightSlider from 'lightslider';
import 'script-loader!./modules/initSliders.js';

import 'script-loader!./modules/Menu.js';
import 'script-loader!./modules/Faqs.js';


function iOSversion() {
    
  if(navigator.userAgent.match(/Windows Phone/i)){
    // There is some iOS in Windows Phone...
    // https://msdn.microsoft.com/en-us/library/hh869301(v=vs.85).aspx
   return false;
  }

  if (/iP(hone|od|ad)/.test(navigator.platform)) {
    // supports iOS 2.0 and later: <http://bit.ly/TJjs1V>
    var v = (navigator.appVersion).match(/OS (\d+)_(\d+)_?(\d+)?/);
    var ver = [parseInt(v[1], 10), parseInt(v[2], 10), parseInt(v[3] || 0, 10)];
    return ver;
  }
}

$(document).ready(function(){
  
  // alert(navigator.userAgent);

  var iosVersion = iOSversion();

  if (iosVersion !== undefined && iosVersion !== null) {
    if (iosVersion[0] >= 13) {
      //alert(iosVersion + ' - This is running iOS 10 or later.');
      
    }else{
      //alert('not running later than 10: ' + iosVersion[0]);
      $('.package-slide__content-wrapper').css('background-attachment', 'scroll');
    }
  }else{
    //alert('not iOS!');
  }

  Project.init();
  Menu.init();
  Faqs.init();
  initSliders.init();


});

