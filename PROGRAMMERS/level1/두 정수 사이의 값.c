#include <stdio.h>
#include <stdlib.h>

long long   solution(int a, int b)
{
    long long   i;
    long long   answer;  
    
    answer = 0;
    if (a <= b)
    {
        i = a;
        while (i <= b)
        {
            answer += i;
            i++;
        }
        return answer;
    }
    else
    {
        i = b;
        while (i <= a)
        {
            answer += i;
            i++;
        }
        return answer;
    }
}