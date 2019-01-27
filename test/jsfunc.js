module.exports = {
    sum: (N) => {
        let res = 1;
        for (let i = 2; i <= N; i++) res += i;
        return res;
    },
    fact: (N) => {
        let res = 1;
        for (let i = 2; i <= N; i++) res *= i;
        return res;
    }
};
