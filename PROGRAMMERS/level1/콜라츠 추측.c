#include <stdio.h>

int     solution(int num)
{
    long long   n;
    int         i;

    n = num;
    for (i = 0; n != 1; i++)
    {
        n = n % 2 == 0 ? n / 2 : (n * 3) + 1;
        if (i >= 500)
            return -1;
    }
    return i;
}