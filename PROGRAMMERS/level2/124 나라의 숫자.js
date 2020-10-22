function solution(n) {
    let three = n.toString(3).split('');
    let result = three.map(a => a * 1);
    let isZero = result.find(a => a === 0);
    console.log(result);
    console.log(isZero);
    if (isZero === undefined)
        return result.join('');
    else {
        while (result.find(a => a === 0) !== undefined) {
            let index = result.findIndex(a => a === 0);
            if (index !== 0) {
                result[index] = 4;
                if (result[index - 1] === 4)
                    result[index - 1] = result[index - 1] - 2;
                else
                    result[index - 1] = result[index - 1] - 1;
            }
            else
                result.shift();
            }
        }
        return result.join('');
}

let n = 4;

console.log(solution(n));