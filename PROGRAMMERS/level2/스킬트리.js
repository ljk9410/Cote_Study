function solution(skill, skill_trees) {
    const arr_skill = skill.split('');
    
    //각 스킬이 몇번째에 있는지 검사
    const index_order = [];
    skill_trees.forEach(arr => {
        let skill_index = [];
        arr_skill.forEach(arr_s => {
            skill_index.push(arr.indexOf(arr_s));
        })
        index_order.push(skill_index);
    })
    console.log(index_order);

    //선행스킬에 맞게 됐는지 검사
    const right_order = index_order.map(a => {
        for (let i = 0; i < a.length; i++) {
            if (a[i] === -1 && i < a.length - 1 && a[i + 1] !== -1)
                return 0;
            else if ((a[i] > a[i + 1]) && a[i + 1] !== -1)
                return 0;
        }
        return 1;
    })
    console.log(right_order);
    let result = 0;
    right_order.forEach(a => {
        if (a === 1)
            result++;
    })
    console.log(result);
    return result
}

const skill = "CBD";
const skill_trees = ["BACDE", "CBADF", "AECB", "BDA"];
solution(skill, skill_trees);