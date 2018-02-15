var path = require('path');
var CommonsPlugin = new require("webpack/lib/optimize/CommonsChunkPlugin");

module.exports = {
	entry: {
    landing: [
      './sources/scripts/landing.js'
    ],
    performances: [
      './sources/scripts/performances.js'
    ],
    programming: [
      './sources/scripts/programming.js'
    ]
  },
	output: {
		path: path.resolve(__dirname, './assets/scripts'),
		filename: '[name]-bundle.js'
  },
  plugins: [
    new CommonsPlugin({
      minChunks: 2,
      name: "common"
    })
  ]
  // module: {
  //   rules: [
  //     {
  //     test: /\.js$/,
  //     loader: 'babel-loader',
  //     query: {
  //       presets: ['es2015']
  //     }
        
  //     }
  //   ]
  // }
}