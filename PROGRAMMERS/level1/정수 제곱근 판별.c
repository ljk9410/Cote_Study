#include <stdio.h>

long long   solution(long long n)
{
    long long   i = 0;

    while (i * i <= n)
    {
        if (i * i == n)
            return (i + 1) * (i + 1);
        i++;
    }
    return -1;
}