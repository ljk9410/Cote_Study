function cal_complete(progress, speeds, i) {
    let day = 0;
    while (progress + speeds[i] * day < 100)
        day++;
    return day;
}

function solution(progresses, speeds) {
    const complete = [];
    const result = [];

    progresses.forEach((work, i) => {
        complete.push(cal_complete(work, speeds, i));
    });

    let que = [];
    while (complete.length) {
        if (!que[0]) {
            que.push(complete[0]);
            complete.shift();
        }
        if (que[0] >= complete[0]) {
            que.push(complete[0]);
            complete.shift();
        }
        if (complete.length === 0 || que[0] < complete[0]) {
            result.push(que.length);
            que = [];
        }
    }

    return result;
}

const progresses = [93, 30 ,55];
const speeds = [1, 30, 5];

solution(progresses, speeds);