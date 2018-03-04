webpackJsonp([2],{

/***/ 22:
/***/ (function(module, exports, __webpack_require__) {

module.exports = __webpack_require__(23);


/***/ }),

/***/ 23:
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
Object.defineProperty(__webpack_exports__, "__esModule", { value: true });
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_0__modules_jquery_global_js__ = __webpack_require__(2);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_1_script_loader_modules_Project_js__ = __webpack_require__(3);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_1_script_loader_modules_Project_js___default = __webpack_require__.n(__WEBPACK_IMPORTED_MODULE_1_script_loader_modules_Project_js__);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_2_lightslider__ = __webpack_require__(4);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_2_lightslider___default = __webpack_require__.n(__WEBPACK_IMPORTED_MODULE_2_lightslider__);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_3_script_loader_modules_initSliders_js__ = __webpack_require__(5);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_3_script_loader_modules_initSliders_js___default = __webpack_require__.n(__WEBPACK_IMPORTED_MODULE_3_script_loader_modules_initSliders_js__);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_4_script_loader_modules_Menu_js__ = __webpack_require__(6);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_4_script_loader_modules_Menu_js___default = __webpack_require__.n(__WEBPACK_IMPORTED_MODULE_4_script_loader_modules_Menu_js__);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_5_script_loader_modules_Faqs_js__ = __webpack_require__(7);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_5_script_loader_modules_Faqs_js___default = __webpack_require__.n(__WEBPACK_IMPORTED_MODULE_5_script_loader_modules_Faqs_js__);











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



/***/ })

},[22]);