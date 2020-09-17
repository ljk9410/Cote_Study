function solution(numbers) {
    let result = [];
    for (let i = 0; i < numbers.length; i++)
    {
        for (let j = i + 1; j < numbers.length; j++)
        {
            if (result.includes(numbers[i] + numbers[j]))
                continue;
            else
                result.push(numbers[i] + numbers[j]);
        }
    }
    return result.sort((a, b) => a - b);
}

const numbers = [2, 1, 3, 4, 1];
console.log(solution(numbers));