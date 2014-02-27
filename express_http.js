var express = require('express');

var app = express();

app.configure(function () {
	// logger
	// Method Path
	app.use(function(req, res, next){
		console.log('%s %s', req.method, req.url);
		next();
	});
	app.use(express.bodyParser());
	app.use(express.methodOverride());
	app.use(app.router);
	app.use(express.errorHandler({ dumpExceptions: true, showStack: true }));
});

app.get('/', function(req, res){
	var html = '<h1>Hello World!</h1>';
	res.type('html');
	res.send(200, html);
});

app.listen(8081, function() {
  console.log('listening at http://localhost:8081');
});
