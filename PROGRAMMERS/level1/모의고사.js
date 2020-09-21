function countAnswers(answers, num) {
    let check = 0;
    answers.forEach((answer, i) => {
        if (answer === num[i % num.length])
        {
            check++;
        }
    })
    return check;
}

function solution(answers) {
    const num1 = [1,2,3,4,5];
    const num2 = [2,1,2,3,2,4,2,5];
    const num3 = [3,3,1,1,2,2,4,4,5,5];
    
    const numOfAnswers = [
        countAnswers(answers, num1),
        countAnswers(answers, num2),
        countAnswers(answers, num3)
    ]

    const max = Math.max(...numOfAnswers);
    const answer = []
    numOfAnswers.forEach((value, index) => {
        if (value === max)
            answer.push(index + 1);
    });
    return answer.sort((a, b) => a- b);
}

const answers = [1, 2, 3, 4, 5];
solution(answers);