#include <stdio.h>

int     main()
{
    int     n;
    int     j;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        j = 0;
        while (j < n - i -1)
        {
            printf(" ");
            j++;
        }
        while (j < n)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
    return 0;
}