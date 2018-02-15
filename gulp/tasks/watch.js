var gulp  = require('gulp'),
watch = require('gulp-watch'),
browserSync = require('browser-sync').create();


// watch
gulp.task('watch', function(){

	browserSync.init({
		
		proxy: "http://mst2.ovs/"
	});

	watch(['./**/*.php','./**/*.inc'], function(){
		browserSync.reload();
	});

	watch('./sources/styles/landing/**/*.css', function(){
		gulp.start('cssInjectLanding');
	});

	watch('./sources/styles/programming/**/*.css', function(){
		gulp.start('cssInjectProgramming');
	});

	watch('./sources/styles/performances/**/*.css', function(){
		gulp.start('cssInjectPerformances');
	});

	watch('./sources/scripts/**/*.js', function(){
		gulp.start('scriptsRefresh');
	});
	
});
// end gulp watch

// browserSync CSS Inject
gulp.task('cssInjectLanding', ['stylesLanding'], function(){
	gulp.src('./assets/styles/styles-landing.css')
	.pipe(browserSync.stream());
});
gulp.task('cssInjectProgramming', ['stylesProgramming'], function(){
	gulp.src('./assets/styles/styles-programming.css')
	.pipe(browserSync.stream());
});
gulp.task('cssInjectPerformances', ['stylesPerformances'], function(){
	gulp.src('./assets/styles/styles-performances.css')
	.pipe(browserSync.stream());
});

gulp.task('scriptsRefresh',['scripts'], function(){
	browserSync.reload();
});