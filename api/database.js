const mysql = require('mysql');
const myConnectionString = "mysql://antti:EliasN11l0@localhost:3306/bank";
const connection = mysql.createConnection(myConnectionString);

module.exports = connection;
