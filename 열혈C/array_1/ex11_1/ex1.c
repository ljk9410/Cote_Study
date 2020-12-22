//1차원 배열
#include <stdio.h>

int     main()
{
    int     arr[5];
    int     max, min, sum = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr [i] < min)
            min = arr[i];
        sum += arr[i];
    }
    printf("min: %d, max: %d, sum: %d", min, max, sum);
    return (0);
}