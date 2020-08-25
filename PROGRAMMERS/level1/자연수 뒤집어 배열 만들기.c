#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int*    solution(long long n)
{
    long long   len = 0;
    long long   temp;
    int*        answer;
      
    temp = n;
    while (temp)
    {
        len++;
        temp /= 10;
    }
    answer = (int*)malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++)
    {
        answer[i] = (int)(n % 10);
        n /= 10;
    }
    return answer;
}
