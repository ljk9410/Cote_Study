function solution(arr, divisor) {
    
    const result = arr.filter(answer => answer % divisor === 0)
    .sort((a, b) => a - b);
    if (result.length === 0)
        return [-1];
    return result.length === 0 ? [-1] : result.sort((a, b) => a - b);
}
