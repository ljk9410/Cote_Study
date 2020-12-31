function solution(s) {
    let cut = 1;
    let arr;
    let press;
    let i, j;
    let check;
    let answer, curr;

    //cut의 개수를 올려가며 반복
    while (cut <= s.length)
    {
        arr = [];
        press = [];
        //문자열을 cut개씩 자르기
        for (let i = 0; i < s.length; i = i + cut)
            arr.push(s.substr(i, cut));
    
        //문자열 압축하기
        i = 0;
        while (i < arr.length)
        {
            check = 1;
            j = 1;
            while (1)
            {
                if (arr[i] === arr[i + j])
                {
                    check++;
                    j++;
                }
                else
                    break ;
            }
            if (check > 1)
            {
                press.push(check);
                press.push(arr[i]);
            } 
            else 
                press.push(arr[i]);
            i = i + j;
        }
    
        //  answer
        if (cut === 1)
        {
            answer = press.join('').length;
            curr = press.join('').length;
        }    
        else
         curr = press.join('').length;
         if (curr < answer)
            answer = curr;
        cut++;
    }
    return (answer);
}

let s = "abcabcdede";
solution(s);