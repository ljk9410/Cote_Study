function solution(n) {
    let binary_n = n.toString(2);
    let count_n = 0;

    for (let i = 0; i < binary_n.length; i++)
    {
        if (binary_n[i] === "1")
            count_n++;
    }
}

let n = 78
solution(n);