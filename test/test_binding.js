const addon = require("../lib/binding.js");
const addonJS = require("./jsfunc.js");


function testBasic() {
    const t = process.hrtime();
    const result = addon.sum(2);
    const t2 = process.hrtime();
    console.log('time for sum[c++]', time(process.hrtime(t))); // time for sum[c++] 40.748703ms
    const result2 = addonJS.sum(2);
    console.log('time for sum[JS]', time(process.hrtime(t2))); // time for sum[JS] 166.403469ms
    console.log('result=>', result, result2);
}

function time(hrTime) {
    return (hrTime[0] * 1000 + hrTime[1] / 1000000) + 'ms';
}
testBasic();
