function solution(x, n) {
    let answer = [];
    for (let i = 1; i <= n; i++)
    {
        answer.push(x * i);
    }
    return answer;
}

function solution2(x, n) {
    return Array(n).fill(x).map((x, i) => x * (i + 1));
}
