function solution(n, lost, reserve) {
    let clothNum = [];
    for (let i = 0; i < n; i++)
        clothNum.push(1);

    lost.forEach(lost => {
        clothNum[lost - 1]--;
    })

    reserve.forEach(reserve => {
        clothNum[reserve - 1]++;
    })

    clothNum.forEach((n, index) => {
        let before = index - 1;
        let after = index + 1;

        if (n === 0 && clothNum[before] === 2)
        {
            clothNum[before]--;
            clothNum[index]++;
        }

        if (n === 0 && clothNum[after] === 2)
        {
            clothNum[after]--;
            clothNum[index]++;
        }
    })
    return clothNum.filter(n => n != 0).length;
}

const n = 5;
const lost = [2, 4];
const reserve = [1, 3, 5];
console.log(solution(n, lost, reserve));