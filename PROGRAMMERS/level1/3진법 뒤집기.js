function solution(n) {
    let three_rev = n
                .toString(3)
                .split('')
                .reverse()
                .join('');
                
    return parseInt(three_rev, 3);
}

let n = 45;

solution(n);