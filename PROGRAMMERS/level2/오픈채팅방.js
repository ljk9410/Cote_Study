function solution(record) {
    let result = [];
    let actionList = [];
    let nickname = {};
    let split = record.map(a => a.split(' '));
    
    split.forEach(a => {
        if (a[0] === "Enter")
        {
            nickname[a[1]] = a[2];
            actionList.push({Action : a[0], Id : a[1]});
        }
        else if (a[0] === "Leave")
        {
            actionList.push({Action : a[0], Id : a[1]});
        }
        else
            nickname[a[1]] = a[2];
    })

    actionList.forEach(a => {
        if (a.Action === "Enter")
            result.push(`${nickname[a.Id]}님이 들어왔습니다.`);
        else
            result.push(`${nickname[a.Id]}님이 나갔습니다.`);
    });
    return (result);
}

const record = ["Enter uid4567 Muzi", "Enter uid1234 Prodo", "Change uid4567 Ryan"];
solution(record);