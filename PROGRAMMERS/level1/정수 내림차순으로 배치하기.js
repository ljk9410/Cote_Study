function solution(n) {
    const nToS = String(n);
    const result = nToS
                    .split('')
                    .sort((a, b) => b - a)
                    .join('');

    return Number(result);
}

const n = 118372;
solution(n)