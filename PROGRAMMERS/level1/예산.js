function solution(d, budget) {
    let count = 0;
    const test = d.sort((a, b) => a - b).reduce((pre,curr) => {
        if (curr <= pre)
        {
            count++;
            return pre - curr;
        }
    }, budget)
    return count;
}

const d = [1, 3, 2, 5, 4];
const budget = 9;

const result = solution(d, budget);
console.log(result);