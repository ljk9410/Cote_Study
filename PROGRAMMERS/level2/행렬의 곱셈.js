function solution(arr1, arr2) {
    let answer = new Array(arr1.length);
    for (let i = 0; i < arr1.length; i++)
        answer[i] = new Array(arr2[0].length).fill(0);
    for (let i = 0; i < arr1.length; i++)
    {
        for (let j = 0; j < arr2[0].length; j++)
        {
            for (let k = 0; k < arr1[0].length; k++)
            {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    return (answer);
}

let arr1 = [[1, 4], [3, 2], [4, 1]];
let arr2 = [[3, 3], [3, 3]];
solution(arr1, arr2);