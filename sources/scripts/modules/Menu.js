var Menu = {



	init: function () {

		this.cacheDom();

		this.bindEvents();

		this.expandCurrentMenuItemAncestors();

	},

	cacheDom: function () {

		this.$htmlBody = $('html, body'); //ok

		this.$mainContent = $('#page'); //ok

    this.$menuTrigger = $('.header__menu-trigger'); //ok
    
    
		this.$subMenuTrigger = $('.top-nav__submenu-button'); // ok

		this.$menusWrapper = $('.top-nav__menus'); //ok

		this.$menuWrapper = $('.top-nav__header-menu'); //ok

		this.$overlay = $('#overlay');  //ok

    this.$iconHamburger = $('.header__menu-icon'); //ok
    
    this.$mainMenuWrapper = $('.top-nav__main-menu-wrapper');

    this.$menuCrossLinks = $('.menu-cross-links');

    this.$imageButtonsWrapper = $('.image-buttons-wrapper');

		this.$actualOffset = 0;

	},



	bindEvents: function () {

		this.$menuTrigger.on('click', this.menuVisible);

		this.$subMenuTrigger.on('click', this.subMenuVisible);



		$(window).on('change resize', function () {

			Menu.makeMenuSize();

		});

	},

	makeMenuSize: function () {

    this.$mainMenuWrapper.css('height', $(window).outerHeight());
		this.$imageButtonsWrapper.css('height', $(window).outerHeight());

    // this.$menusWrapper.css('max-height', $('.main-menu-wrapper').outerHeight() - $('header').outerHeight());
    this.$menusWrapper.css('max-height', this.$mainMenuWrapper.outerHeight() - $('header').outerHeight() - this.$menuCrossLinks.outerHeight());

	},

	menuVisible: function (e) {

		e.preventDefault();

		$(document).on('click touchstart', Menu.hideMenuOnOutsideClick);

		Menu.$menuWrapper.toggleClass('visible');

		if (Menu.$menuWrapper.hasClass('visible')) {

			Menu.$actualOffset = $(window).scrollTop();

			Menu.$mainContent.css('margin-top', -Menu.$actualOffset);

		} else {

			Menu.$mainContent.css('margin-top', 0);

			$(document).unbind('click touchstart');

		}



		Menu.$iconHamburger.toggleClass('open');

		Menu.$overlay.toggleClass('visible');

		Menu.$htmlBody.toggleClass('noscroll');

		$(window).scrollTop(Menu.$actualOffset);



		Menu.makeMenuSize();



	},

	subMenuVisible: function (e) {

		e.preventDefault();

		$(this).siblings('.top-nav__inner-list').toggleClass('visible').parent().toggleClass('submenu-open');

	},

	expandCurrentMenuItemAncestors: function() {

		this.$menusWrapper.find('.top-nav__active-parent').addClass('submenu-open');

	},

	hideMenuOnOutsideClick: function (e) {

		if (!Menu.$menuWrapper.is(e.target) && 

			Menu.$menuWrapper.has(e.target).length === 0 && 

			!Menu.$menuTrigger.is(e.target) && 

			Menu.$menuTrigger.has(e.target).length === 0) {

			

			Menu.$mainContent.css('margin-top', 0);

			Menu.$menuWrapper.removeClass('visible');

			Menu.$iconHamburger.removeClass('open');

			Menu.$overlay.removeClass('visible');

			Menu.$htmlBody.removeClass('noscroll');

			$(window).scrollTop(Menu.$actualOffset);

			Menu.makeMenuSize();



		}

	}



};