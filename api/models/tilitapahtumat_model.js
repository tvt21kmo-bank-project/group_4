const db = require('../database');
//luodaan siirto-niminen objekti
//ja sen sisään tarvittavat funktiot
const tilitapahtumat = {
    get: function(callback) {
        return db.query('select * from tilitapahtumat', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from tilitapahtumat where idTili=?', [id], callback);
    }
};
//exportilla viedään ulos siirto objekti
module.exports = tilitapahtumat;