function math_gcd(w, h) {
    let small = w;
    let large = h;
    let gcd;

    if (w > h) {
        small = h;
        large = w;
    }

    if (large % small === 0)
        gcd = small;
    else {
        for (let i = 1; i <= small / 2; i++) {
            if (small % i === 0 && large % i === 0)
                gcd = i;
        }
    }
    return gcd;
}

function solution(w, h) {
    const gcd = math_gcd(w, h);
    let lose_square = 0;
    let result = 0;

    if (gcd === 1) {
        lose_square = w + h - 1;
        result = w * h - lose_square;
    }
    else {
        lose_square = w + h - gcd;
        result = w * h - lose_square;
    }
    return result;
}


const w = 8;
const h = 12;
solution(w, h);