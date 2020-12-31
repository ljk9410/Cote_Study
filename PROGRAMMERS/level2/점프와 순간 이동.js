function solution(n)
{
    let battery = 0;

    while (n !== 1)
    {
        if (n % 2 === 1)
        {
            n = n - 1;
            battery += 1;
        }
        else
            n /= 2;
    }
    battery += 1;
    return (battery);
}

n = 5000;
console.log(solution(n));