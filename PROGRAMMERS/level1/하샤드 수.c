#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int temp = x;
    int sum = 0;
    
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if (x % sum == 0)
        return true;
    return false;
}