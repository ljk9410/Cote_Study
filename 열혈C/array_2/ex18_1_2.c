#include <stdio.h>

void    simpleFuncOne(int *arr1, int *arr2) {}
void    simpleFuncTwo(int (*arr3)[4], int (*arr4)[4]) {}
int     main(void)
{
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    simpleFuncOne(arr1, arr2);
    simpleFuncTwo(arr1, arr2);
}