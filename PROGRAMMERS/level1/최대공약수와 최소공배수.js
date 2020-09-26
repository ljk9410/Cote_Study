function solution(n, m) {
    let arr = new Array(n, m);
    arr.sort((a, b) => a - b);

    const small = arr[0];
    const large = arr[1];

    let answer = [];
    if (large % small === 0)
    {
        answer.push(small);
        answer.push(large);
    }
    else
    {
        let max_i = 1;
        for (let i = 1; i <= small / 2; i++)
        {
            if (small % i === 0 && large % i === 0)
                max_i = i;
        }
        answer.push(max_i);
        answer.push((small / max_i) * (large / max_i) * max_i);
    }
    return answer;
}

const n = 2;
const m = 5;

solution(n, m);