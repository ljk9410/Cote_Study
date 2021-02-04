#include <stdio.h>
#include <stdlib.h>

int     main()
{
    int *arr;
    int n , i = 0, j = 5, cnt = 0;

    arr = (int *)malloc(sizeof(int) * 5);
    while (1)
    {
        printf("Put a number: ");
        scanf("%d", &n);
        if (n == -1)
            break ;
        if (i >= j)
        {
            arr = (int *)realloc(arr, sizeof(int) * 3);
            j += 3;
        }
        arr[i] = n;
        i++;
        cnt++;
    }
    for (int k = 0; k < cnt; k++)
        printf("%d ", arr[k]);
    return (0);
}