#include <stdio.h>

int     main()
{
    int     A;
    int     temp;
    int     new;
    int     cycle = 0;

    scanf("%d\n", &A);
    new = A;
    while (1)
    {
        temp = new / 10 + new % 10;
        new = new % 10 * 10 + temp % 10;
        cycle++;
        if (new == A)
            break ;
    }
    printf("%d", cycle);
    return 0;
}