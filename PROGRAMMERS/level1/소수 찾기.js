function solution(n) {
    let arr = [];

    for (let i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (let i = 1; i * i < n; i++)
    {
        if (arr[i])
        {
            let num = arr[i];
            for (let j = num * num; j <= n; j += num)
                arr[j - 1] = 0;
        }
    }
    const result = arr.filter(n => n);
    result.shift();
    return result.length;
}


const n = 5;
console.log(solution(n));