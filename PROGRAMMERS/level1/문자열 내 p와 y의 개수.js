function solution(s){
    const arr_s = s.toLowerCase().split('');
    let num_p = 0;
    let num_y = 0;

    arr_s.forEach(v => {
        if (v === 'p')
            num_p++;
        else if(v === 'y')
            num_y++;
    })

    if (num_p === num_y)
        return true;
    else if (num_p === 0 && num_y === 0)
        return true;
    else
        return false;
}

const s = "pPooyY";
solution(s);