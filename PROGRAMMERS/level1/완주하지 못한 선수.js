function solution1(participant, completion) {  
    const completionObj = completion.reduce((obj, curr) => {
        obj[curr] = obj[curr] ? (obj[curr] + 1) : 1; //obj[curr] = 1 과는 무엇이 다른지?
        return obj;
    }, {});
    console.log(completionObj);
    
    return participant.find(person => {
        if (completionObj[person])
            completionObj[person] -= 1;
        else
            return true
    })
}

function solution2(participant, completion) {
    const partSort = participant.sort();
    const comSort = completion.sort();
    console.log(partSort, comSort);
    for(let i in partSort)
    {
        if (partSort[i] !== comSort[i])
            return partSort[i];
    }
}
    
const participant = ["m", "s", "m", "a"];
const completion = ["s", "a", "m"];
console.log(solution2(participant, completion));