function solution(s, n) {
    let arr =[];
    for (let i = 0; i < s.length; i++)
    {
        let ascii = s.charCodeAt(i);
        if (ascii >= 65 && ascii <= 90)
        {
            if (ascii + n > 90)
                ascii -= 26;
            arr[i] = ascii + n;
        }

        if (ascii >= 97 && ascii <= 122)
        {
            if (ascii + n > 122)
                ascii -= 26;
            arr[i] = ascii + n;
        }

        if (ascii === 32)
            arr[i] = ascii;
    }

    let result = "";
    for (let i = 0; i < arr.length; i++)
    {
        result += String.fromCharCode(arr[i]);
    }
    return result;
}

// A: 65 ~ Z: 90
// a: 97 ~ z: 122
const s = "a B z";
const n = 1;
solution(s, n);