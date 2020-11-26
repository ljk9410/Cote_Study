function check_num(a, b, c)
{
    return Math.min(a, b, c) + 1;
}

function solution(board)
{
    let res = board;
    let square = 0;

    for (let i = 1; i < res.length; i++)
    {
        for (let j = 1; j < res[0].length; j++)
        {
            if (res[i][j] === 1)
                res[i][j] = check_num(res[i - 1][j - 1], res[i][j - 1], res[i - 1][j]);
        }
    }
    res.forEach(a => {
        a.forEach(b => {
            if (b > square)
                square = b;
        })
    });
    if (square === 0) return 0;
    return square * square;
}

const board = [[0,1,1,1],[1,1,1,1],[1,1,1,1],[0,0,1,0]];
solution(board);