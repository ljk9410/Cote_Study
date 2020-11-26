function solution(priorities, location) {
    let que = location;
    let count = 0;
    
    while (priorities.length)
    {
        let curr = priorities[0];
        let shift;
        if (priorities.find(a => a > curr))
        {
            shift = priorities.shift();
            priorities.push(shift);
            if (que === 0)
                que = priorities.length - 1;
            else
                que--;
        }
        else
        {
            count++;
            if (que === 0)
                return count;
            priorities.shift();
            que--;
        }
    }
}

let priorities = [1, 1, 9, 1, 1, 1];
solution(priorities, 0);