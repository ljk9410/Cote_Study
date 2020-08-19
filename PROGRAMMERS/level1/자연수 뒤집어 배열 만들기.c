#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int*    solution(long long n)
{
    long long   len;
    int*        answer;
       
    while (n)
    {
        len++;
        n /= 10;
    }
    answer = (int*)malloc(sizeof(int) * len + 1);
    for (int i = 0; i < len; i++)
    {
        answer[i] = n % 10 + '0';
        n /= 10;
    }
    return answer;
}
