function solution(n, k) {
    let answer = [];
    let curr;
    //스택을 이용한 풀이
    for (let i = 0; i < n.length; i++)
    {
        curr = n[i];
        while (k > 0 && answer[answer.length - 1] < curr)
        {
            answer.pop();
            k--;
        }
        answer.push(curr);
    }
    answer.splice(answer.length - k, k);
    return answer.join("");
}

n = "4177252841";
k = 4;
solution(n, k);