#include <stdio.h>

int     is_num(int num)
{
    int     diff, temp;
    int     first = num, curr, before;
    
    if (num < 100)
        return (1);
    while (num)
    {
        before = num % 10;
        num /= 10;
        curr = num % 10;
        temp = curr - before;
        if (num == (first / 10))
            diff = temp;
        if (temp != diff)
            return (0);
        if (num < 10)
            break ;
    } 
    return (1);
}

int     main()
{
    int     n;
    int     result = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (is_num(i))
            result++;
    }
    printf("%d", result);
    return (0);
}