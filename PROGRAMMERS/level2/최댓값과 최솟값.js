function solution(s) {
    let arr = s.split(' ');
    let arr_sort;
    let answer = [];
    
    arr_sort = arr.map(a => parseInt(a));
    arr_sort.sort((a, b) => a - b);
    answer.push(arr_sort[0], arr_sort[arr_sort.length - 1]);
    return answer.join(" ");
}

let s = "1 2 3 4";
solution(s);