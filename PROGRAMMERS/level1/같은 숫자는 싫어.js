function solution1(arr)
{
    let answer = [];
    for (let i = 0; i < arr.length; i++)
    {
        let j = i + 1;
        while (j < arr.length + 1)
        {
            if (arr[i] !== arr[j])
            {
                answer.push(arr[j - 1]);
                break;
            }
            j++;
        }
        i = j - 1;
    }
    return answer;
}

function solution2(arr)
{
    let answer = [];
    for (let i = 0; i < arr.length; i++)
    {
        if (arr[i] === arr[i + 1])
            continue;
        else
            answer.push(arr[i]);
    }
    return answer;
}

function solution3(arr)
{
    return arr.filter((value, index) => value !== arr[index + 1]);
}