function SDT(str) {
    switch (str) {
        case "S":
            return 1;
        case "D":
            return 2;
        case "T":
            return 3;
    }
}

function solution(dartResult) {
    const calPoint = [];
    for (let i = 0; i < dartResult.length; i++) {
        if (dartResult[i] >= 0 && dartResult[i] <= 9) {
            if (dartResult[i] === "1" && dartResult[i + 1] === "0") {
                calPoint.push("10");
                calPoint.push(dartResult[i + 2]);
                if (!(dartResult[i + 3] >= 0 && dartResult[i + 3] <= 9))
                    calPoint.push(dartResult[i + 3]);
                else
                    calPoint.push("1");
                i++;
            }
            else {
                calPoint.push(dartResult[i]);
                calPoint.push(dartResult[i + 1]);
                if (!(dartResult[i + 2] >= 0 && dartResult[i + 2] <= 9))
                    calPoint.push(dartResult[i + 2])
                else
                    calPoint.push("1");
            }
        }
    }

    let point1 = Math.pow(calPoint[0], SDT(calPoint[1]));
    let point2 = Math.pow(calPoint[3], SDT(calPoint[4]));
    let point3 = Math.pow(calPoint[6], SDT(calPoint[7]));
    if (calPoint[2] === "*") {
        point1 = point1 * 2;
    }
    else if(calPoint[2] === "#") {
        point1 = point1 * -1;
    }

    if (calPoint[5] === "*") {
        point1 = point1 * 2;
        point2 = point2 * 2;
    }
    else if(calPoint[5] === "#") {
        point2 = point2 * -1;
    }

    if (calPoint[8] === "*") {
        point2 = point2 * 2;
        point3 = point3 * 2;
    }
    else if(calPoint[8] === "#") {
        point3 = point3 * -1;
    }

    return point1 + point2 + point3;
}


const dartResult = "10D10S*10S*";