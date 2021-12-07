const db = require('../database');

const nosto = {
    debit: function(postData, callback){
        return db.query('call debit_nosto(?,?)',[postData.summa, postData.id], callback);

    },
    credit: function(postData, callback){
        return db.query('call credit_nosto(?,?)',[postData.summa, postData.id], callback);

    }
};

module.exports = nosto;