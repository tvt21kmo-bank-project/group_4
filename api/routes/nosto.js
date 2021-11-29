const express = require('express');
const router = express.Router();
const siirto = require('../models/nosto');

router.post('/action_nosto', function(request, response){
    siirto.debit(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
}
);

module.exports = router;