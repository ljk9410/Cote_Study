function solution(arr) {
    const min = Math.min.apply(null, arr);
    const result = arr
                    .filter(n => n !== min)
    
    return  result.length === 0 ? [-1] : result;
}

const arr = [4, 3, 2, 1]
solution(arr);