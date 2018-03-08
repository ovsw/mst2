var gulp = require('gulp'),
del = require('del'),
usemin = require('gulp-usemin');

gulp.task('deleteDistFolder', function(){
  return del('./dist');
});

gulp.task('usemin', function(){
  return gulp.srcn
});

gulp.task('build', [deleteDistFolder]);