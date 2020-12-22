#include <stdio.h>

void    A(int **arr1, int *(*arr2)[5]) {}
void    B(int ***arr3, int ***(*arr4)[5]) {}
int     main(void)
{
    int *arr1[3];
    int *arr2[3][5];
    int **arr3[5];
    int ***arr4[3][5];

    A(arr1, arr2);
    B(arr3, arr4);
}