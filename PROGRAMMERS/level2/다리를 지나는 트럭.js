function on_bridge_weigth(on_bridge) {
    let weight = 0;
    on_bridge.forEach(a => weight += a);
    return weight;
}

function solution(bridge_length, weight, truck_weights) {
    let time = 0;
    let on_bridge = new Array(bridge_length);

    while (!(on_bridge_weigth(on_bridge) === 0 && on_bridge_weigth(truck_weights) === 0)) {
        on_bridge.unshift(0);
        on_bridge.pop();
        if (on_bridge_weigth(on_bridge) + truck_weights[0] <= weight) {
            on_bridge[0] = truck_weights[0];
            truck_weights.shift();
            truck_weights.push(0);
        }
        time++;
    }
    return time;
}


const bridge_length = 100;
const weight = 100;
const truck_weights = [10, 10, 10, 10, 10, 10, 10, 10, 10, 10];
solution(bridge_length, weight, truck_weights);