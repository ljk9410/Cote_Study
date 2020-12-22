#include <stdio.h>

void    fibo(int n)
{
    int     before = 0;
    int     curr = 1;
    int     next;

    if (n == 1)
        printf("%d", before);
    if (n == 2)
        printf("%d %d", before, curr);
    if (n > 2)
    {
        printf ("%d %d ", before, curr);
        while (n > 2)
        {
            next = before + curr;
            before = curr;
            curr = next;
            printf("%d ", next);
            n--;
        }
    }
}

int     main()
{
    int     n;

    scanf("%d", &n);
    fibo(n);
    return (0);
}