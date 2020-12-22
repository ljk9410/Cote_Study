#include <stdio.h>

int     main()
{
    int     arr[6] = {1, 2, 3, 4, 5, 6};
    int     *ptr_f = arr;
    int     *ptr_b = arr + 5;
    int     temp;

    for (int i = 0; i < 3; i++)
    {
        temp = *ptr_f;
        *ptr_f = *ptr_b;
        *ptr_b = temp;
        ptr_f++;
        ptr_b--;
    }
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    return (0);
}