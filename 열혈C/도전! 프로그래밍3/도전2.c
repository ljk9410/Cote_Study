#include <stdio.h>
#include <stdlib.h>

void    showArr(int **arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void    snail(int **arr, int n)
{
    int     row = 0, col = -1;
    int     direction = 1;
    int     num = 1;

    while (n)
    {
        for (int i = 0; i < n; i++)
        {
            col += direction;
            arr[row][col] = num++;
        }
        n -= 1;
        for (int i = 0; i < n; i++)
        {
            row += direction;
            arr[row][col] = num++;
        }
        direction *= -1;
    }
}

int     main()
{
    int     n;
    int     **arr;

    printf("put a number: ");
    scanf("%d", &n);

    //2차원배열 동적할당하기
    arr = malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        arr[i] = malloc(sizeof(int) * n);

    //달팽이 배열 만들기
    snail(arr, n);
    
    // 배열 출력하기
    showArr(arr, n);

    //동적할당 free
    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);
    return (0);
}