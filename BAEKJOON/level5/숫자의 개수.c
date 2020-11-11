#include <stdio.h>

int     main()
{
    int     A, B, C, multiply;
    int     result[10];
    int     i;

    scanf("%d %d %d", &A, &B, &C);
    multiply = A * B * C;
    for (int i = 0; i < 10; i++)
        result[i] = 0;
    while (multiply > 0)
    {
        i = multiply % 10;
        result[i]++;
        multiply /= 10;
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n", result[i]);
    return 0;
}