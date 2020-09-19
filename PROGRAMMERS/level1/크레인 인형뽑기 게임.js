'use strict';

function checkSame(answer) {
    let check = 0;
    for (let i = 0; i < answer.length; i++)
    {
        if (answer[i] === answer[i + 1])
        {
            answer.pop();
            check++;
            answer.pop();
            check++;
        }
    }
    return check;
}

function solution(board, moves) {
    let answer = [];
    let check = 0;
    for (let i = 0; i < moves.length; i++)
    {
        for (let j = 0; j < board.length; j++)
        {
            let position = board[j][moves[i] - 1];
            if (position !== 0)
            {
                answer.push(position);
                board[j][moves[i] - 1] = 0;
                check += checkSame(answer);
                break;
            }
        }
    }
    return check;
}


let board = [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]];
const moves = [1,5,3,5,1,2,1,4];
console.log(solution(board, moves));