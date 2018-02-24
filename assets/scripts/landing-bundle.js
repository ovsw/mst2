webpackJsonp([1],[
/* 0 */,
/* 1 */,
/* 2 */,
/* 3 */
/***/ (function(module, exports, __webpack_require__) {

module.exports = __webpack_require__(4);


/***/ }),
/* 4 */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
Object.defineProperty(__webpack_exports__, "__esModule", { value: true });
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_0_jquery__ = __webpack_require__(0);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_0_jquery___default = __webpack_require__.n(__WEBPACK_IMPORTED_MODULE_0_jquery__);
/* harmony import */ var __WEBPACK_IMPORTED_MODULE_1__modules_Person__ = __webpack_require__(5);



var john = new __WEBPACK_IMPORTED_MODULE_1__modules_Person__["a" /* default */]("John Doe", "blue");
// john.greet();

// var jane = new Person("Jane Smith", "green");
// jane.greet();



/***/ }),
/* 5 */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
class Person {
  constructor (fullName, favColor) {
    this.name = fullName;
    this.favoriteColor = favColor;
  }

  greet() {
    console.log("Hello hi, my name is " + this.name + " and my favorite color is " + this.favoriteColor + ".");
  }
}

/* harmony default export */ __webpack_exports__["a"] = (Person);

/***/ })
],[3]);