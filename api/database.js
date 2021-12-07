const mysql = require('mysql');
const myConnectionString = "mysql://root:matti1985@localhost:3306/bank";
const connection = mysql.createConnection(myConnectionString);

module.exports = connection;