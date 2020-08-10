#include <stdio.h>

int     main()
{
    int     arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int*    parr;
    int     i;

    parr = &arr[0];
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d] : %p\n", i, &arr[i]);
        printf("parr + %d : %p\n", i, parr + i);
    }
    return 0;
}