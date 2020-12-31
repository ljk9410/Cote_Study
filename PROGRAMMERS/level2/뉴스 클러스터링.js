function solution(str1, str2) {
    let newStr1 = [];
    let newStr2 = [];
    let str1_two = [];
    let str2_two = [];
    let str1_eng = [];
    let str2_eng = [];
    let intersection = [];
    let union = [];
    let check_eng = /[a-zA-Z]/;
    //문자열 전처리
    str1.split('').forEach(a => {
        newStr1.push(a.toLowerCase());
    })
    str2.split('').forEach(a => {
        newStr2.push(a.toLowerCase());
    })

    //문자열 2개씩 나누기
    for (let i = 0; i < newStr1.length - 1; i++)
        str1_two.push(newStr1.join('').substr(i, 2));
    for (let i = 0; i < newStr2.length - 1; i++)
        str2_two.push(newStr2.join('').substr(i, 2));

    // 영어만 걸러내기
    str1_two.forEach(a => {
        if (check_eng.test(a[0]) && check_eng.test(a[1]))
            str1_eng.push(a);
    })
    str2_two.forEach(a => {
        if (check_eng.test(a[0]) && check_eng.test(a[1]))
            str2_eng.push(a);
    })
    console.log(str1_eng, str2_eng);
    //교집합 합집합
    // for (let i = 0; i < str1_eng.length; i++)
    // {
    //     for (let j = 0; j <str2_eng.length; j++)
    //     {
    //         if (str1_eng[i] === str2_eng[j])
    //         {
    //             intersection.push(str1_eng[i]);
    //             str1_eng.splice(i, 1, '-');
    //             str2_eng.splice(j, 1, '-');
    //         }
    //     }
    // }
    // str1_eng.forEach(a => {
    //     if (a !== "-")
    //         union.push(a);
    // })
    // str2_eng.forEach(a => {
    //     if (a !== "-")
    //         union.push(a);
    // })
    // intersection.forEach(a => union.push(a));
    for (let i = 0; i < str2_eng.length; i++) {
        if (str1_eng.indexOf(str2_eng[i]) >= 0) {
          intersection.push(str1_eng.splice(str1_eng.indexOf(str2_eng[i]), 1));
        }
        union.push(str2_eng[i]);
    }
    
    for (let i = 0; i < str1_eng.length; i++) {
        union.push(str1_eng[i]);
    }
    if (intersection.length === 0 && union.length === 0)
        return 65536;
    return (Math.floor(intersection.length / union.length * 65536));
}

let str1 = "E=M*C^2";
let str2 = "e=m*c^2";
solution(str1, str2);