function solution(n) {
    let answer = 0;
    let fibonaci = [0, 1];

    if (n < 2)
        return fibonaci[n];
    else
    {
        for (let i = 2; i <= n; i++)
            fibonaci.push((fibonaci[i - 1] + fibonaci[i - 2]) % 1234567);
    }
    answer = fibonaci[n];
    return answer;
}

n = 5;
solution(n);