const addon = require("../lib/binding.js");


async function testBasic() {
    try {
        const result = addon.sum(2,8);
        addon.sumCB(17,8,(msg) => {
            console.log("result from callback=>", msg);
        });
        console.log('Result from direct=>', result);
    } catch (e) {
        console.log("Error=>", e.message);
    }
   
}
testBasic();
