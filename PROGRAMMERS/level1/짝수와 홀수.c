#include <stdio.h>
#include <stdlib.h>

char*   solution(int num)
{
    char*   answer;

    answer = (char*)malloc(sizeof(char) * (5 - num % 2));
    if (num % 2 == 0)
        answer = "Even";
    else
        answer = "Odd";
    return answer;
}