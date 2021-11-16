const db = require('../database');
const bcrypt = require('bcryptjs');

//const saltRounds = 10;
const kortti={
    get: function(callback) {
        return db.query('select * from kortti', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from kortti where idKortti=?', [id], callback);
    },
    add: function(kortti, callback) {
        return db.query('insert into kortti (idKortti, pin, idAsiakas) values (?,?,?)', [asiakas.enimi, asiakas.snimi, asiakas.osoite, asiakas.puhnro], callback);
    },
    delete: function(id, callback) {
        return db.query('delete from kortti where idKortti=?', [id], callback);
    },
    update: function(id, kortti, callback) {
        return db.query('update kortti set idAsiakas=?, pin=?, where idKortti=?', [kortti.idKortti, kortti.pin, kortti.idAsiakas], callback);
    }
}

module.exports = kortti;