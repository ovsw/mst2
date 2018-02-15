var gulp  = require('gulp'),
postcss = require('gulp-postcss'),
fs = require('fs'),
autoprefixer = require('autoprefixer'),
cssvars = require('postcss-simple-vars'),
nested = require('postcss-nested'),
cssimport = require('postcss-import'),
csscolor = require('postcss-color-function'),
mixins = require('postcss-mixins'),
sourcemaps = require('gulp-sourcemaps');

gulp.task('stylesLanding', function(){
	return gulp.src('./sources/styles/landing/styles-landing.css') //return gulp.src(['./sources/styles/**/*.css','!_*'])
		.pipe(sourcemaps.init())
		.pipe(postcss([cssimport, cssvars, mixins, csscolor, nested, autoprefixer]))
		.on('error', function(errorInfo){
			console.log(errorInfo.toString());
			this.emit('end');
		})
		.pipe(sourcemaps.write('maps'))
		.pipe(gulp.dest('./assets/styles'));
});

gulp.task('stylesProgramming', function(){
	return gulp.src('./sources/styles/programming/styles-programming.css') //return gulp.src(['./sources/styles/**/*.css','!_*'])
		.pipe(sourcemaps.init())	
		.pipe(postcss([cssimport, cssvars, mixins, csscolor, nested, autoprefixer]))
		.on('error', function(errorInfo){
			console.log(errorInfo.toString());
			this.emit('end');
		})
		.pipe(sourcemaps.write('maps'))
		.pipe(gulp.dest('./assets/styles'));
});

gulp.task('stylesPerformances', function(){
	return gulp.src('./sources/styles/performances/styles-performances.css') //return gulp.src(['./sources/styles/**/*.css','!_*'])
		.pipe(sourcemaps.init())
		.pipe(postcss([cssimport, cssvars, mixins, csscolor, nested, autoprefixer]))
		.on('error', function(errorInfo){
			console.log(errorInfo.toString());
			this.emit('end');
		})
		.pipe(sourcemaps.write('maps'))
		.pipe(gulp.dest('./assets/styles'));
});