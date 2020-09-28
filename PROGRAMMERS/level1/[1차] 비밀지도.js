function toBinary(n, arr) {
    const binary = arr.map(x => x.toString(2));
    const newArr = binary.map(x => x.split('')).map(x => {
        if (x.length != n)
        {
            while(x.length != n)
                x.unshift("0");
        }
        return x;
    });
    return newArr;
}

function solution(n, arr1, arr2) {
    const binary1 = toBinary(n, arr1);
    const binary2 = toBinary(n, arr2);
    const map = binary1.map((a, i) => a.map((b, j) => {
        if ((b + binary2[i][j]) === "00")
            return "0"
        else
            return "1"
    }));

    const result = map.map(a => a.map((b, j) => {
        if (b === "1")
            return "#";
        else
            return " ";
    }))
    return result.map(arr => arr.join(""));
}


//replace를 사용하는 방법!!!

const n = 5;
const arr1 = [9, 20, 28, 18, 11];
const arr2 = [30, 1, 21, 17, 28];

solution(n, arr1, arr2);