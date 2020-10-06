const position = {
    1: [0, 0], 2: [0, 1], 3: [0, 2],
    4: [1, 0], 5: [1, 1], 6: [1, 2],
    7: [2, 0], 8: [2, 1], 9: [2, 2],
    '*': [3, 0], 0: [3, 1], '#': [3, 2]
};

function solution(numbers, hand) {
    let positionL = "*";
    let positionR = "#";
    const result = numbers.map(n => {
        //1, 4, 7 && 3, 6, 9
        if (n === 1 || n === 4 || n === 7) {
            positionL = n;
            return "L"
        }
        else if (n === 3 || n === 6 || n === 9) {
            positionR = n;
            return "R"
        }

        //2, 5, 8, 0
        let distanceL = 0;
        let distanceR = 0;
        if (n === 2 || n === 5 || n === 8 || n === 0) {
            distanceL = Math.abs(position[n][0] - position[positionL][0]) + Math.abs(position[n][1] - position[positionL][1]);
            distanceR = Math.abs(position[n][0] - position[positionR][0]) + Math.abs(position[n][1] - position[positionR][1]);
            if (distanceL < distanceR) {
                positionL = n;
                return "L";
            }
            else if (distanceL > distanceR) {
                positionR = n;
                return "R";
            }
            else {
                if (hand === "right") {
                    positionR = n;
                    return "R";
                }
                else {
                    positionL = n;
                    return "L";
                }
            }
        }
    })
    return result.join("");
}

const numbers = [1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5];
const hand = "right";

solution(numbers, hand);