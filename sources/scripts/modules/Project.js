var Project = {

	init: function () {
		$('html').removeClass('no-js')
		$('html, body').attr({
			'user-agent': window.navigator.userAgent,
			'code-appName': navigator.appName
		});
	},

};