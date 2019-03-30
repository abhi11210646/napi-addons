const addon = require("../lib/binding.js");


async function testBasic() {
    try {
        const result = addon.sum(2, 8);
        console.log("[sum]Result from direct=>", result);
        addon.sumCB(17, 8, (msg) => {
            console.log("[sumCB]result from callback=>", msg);
        });
        const result2 = addon.convertToObj("value");
        console.log('[convertToObj]Result from direct=>', result2);
    } catch (e) {
        console.log("Error=>", e.message);
    }

}
testBasic();
