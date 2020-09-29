function solution(N, stages) {
    let totalUser = stages.length;
    
    // const nonPassUser = [];
    // for (let i = 0; i < N + 1; i++)
    //     nonPassUser.push(0);
    const nonPassUser = new Array(N + 1).fill(0);
    stages.forEach(n => nonPassUser[n - 1]++);

    const failRatio = nonPassUser.map(ratio => {
        const fail = ratio / totalUser;
        totalUser = totalUser - ratio;
        return fail
    })
    failRatio.pop();

    const order = failRatio.reduce((pre, curr, i) => {
       pre.push([curr, i+ 1])
       return pre; 
    },[])

    return order.sort((a, b) => b[0] - a[0]).map(o => o[1]);
}

const N = 5;
const stages = [2, 1, 2, 6, 2, 4, 3, 3];

console.log(solution(N, stages));
