module.exports = function(grunt) {

	grunt.initConfig({
		// jshint: {
		// 	all: ['javascript/scripts.js']
		// },
		// concat: {
		// 	dist: {
		// 		files: {
		// 			'javascript/all.js': ['javascript/scripts.js','javascript/plugins.js']
		// 		}
		// 	}
		// },
		// csslint: {
		// 	all: ['css/reset.css','css/style.css']
		// },
		// cssmin: {
		// 	target: {
		// 		files: {
		// 			'css/style.min.css': ['css/reset.css', 'css/style.css']
		// 		}
		// 	}
		// },
		// autoprefixer: {
		// 	all: {
		// 		src: 'css/style.min.css'
		// 	}
		// },
		sass: {
			options: {
				sourceMap: true
			},
			dist: {
				files: {
					'styles/main.css': ['sources/styles/main.scss']
				}
			}
		},
		watch: {
			scss: {
				files: ['sources/styles/*.scss'],
				tasks: ['sass'],
				options: {
					spawn: false,
					livereload: {
						host: 'odc.dev'
					}
				}
			},
			//Watch your theme files
            livereload: {
                files: ['**/*.php', 'images/**/*.{png,jpg,jpeg,gif,webp,svg}'],
                options: {
                    livereload: {host: 'mst2.ovs'}
                }
            }
			// ,
			// js: {
			// 	files: ['sources/scripts/*.js'],
			// 	tasks: 
			// }

		}
	});

	// grunt.loadNpmTasks('grunt-contrib-concat');
	// grunt.loadNpmTasks('grunt-autoprefixer');
	// grunt.loadNpmTasks('grunt-contrib-jshint');
	// grunt.loadNpmTasks('grunt-contrib-csslint');
	// grunt.loadNpmTasks('grunt-contrib-cssmin');
	// grunt.loadNpmTasks('grunt-contrib-watch');
	require('load-grunt-tasks')(grunt);

	grunt.registerTask('default', [
		// 'jshint',
		// 'concat',
		// 'csslint',
		// 'cssmin',
		// 'autoprefixer',
		'sass'
	]);

}