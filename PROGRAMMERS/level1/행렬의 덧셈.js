function solution(arr1, arr2) {
    let answer =[];
    for (let i = 0; i < arr1.length; i++)
        answer.push([]);

    for (let i = 0; i < arr1.length; i++)
    {
        for(let j = 0; j < arr1[i].length; j++)
            answer[i][j] = arr1[i][j] + arr2[i][j];
    }
    return answer;
}

function solution2(arr1, arr2) {
    return arr1.map((a, i) => {
        return a.map((b, j) => b + arr2[i][j])
    })
}

const arr1 = [[1, 2], [2, 3]];
const arr2 = [[3, 4], [5, 6]];

console.log(solution2(arr1, arr2));