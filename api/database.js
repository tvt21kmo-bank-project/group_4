const mysql = require('mysql');
const myConnectionString = "mysql://atmuser:atmpass@localhost:3306/atm";
const connection = mysql.createConnection(myConnectionString);
module.exports = connection;