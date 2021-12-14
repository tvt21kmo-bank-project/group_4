const mysql = require('mysql');

const myConnectionString = "mysql://root:Re9Muliini92018@localhost:3306/bank";

const connection = mysql.createConnection(myConnectionString);

module.exports = connection;