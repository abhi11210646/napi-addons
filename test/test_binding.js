const addon = require("../lib/binding.js");


function testBasic()
{
    const result =  addon.sum(100000);
    const result2 =  addon.factorial(20);
    console.log('result=>', result, result2);
}

testBasic();
