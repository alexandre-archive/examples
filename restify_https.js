// Create a self signed certificate.
// openssl req -new -x509 -extensions v3_ca -keyout key.pem -out cert.pem -days 3650

var fs = require('fs');
var restify = require('restify');

// Read our certificate.
var options = {
    key: fs.readFileSync('key.pem'),
    cert: fs.readFileSync('cert.pem')
};

// Create a HTTPS server.
var server = restify.createServer(options);

server.get('/', function (req, res, next) {
  res.send('hello world!');
});

server.listen(8000, function() {
  console.log('%s listening at %s', server.name, server.url);
});

// Check our server:
// curl -kis https://localhost:8000/