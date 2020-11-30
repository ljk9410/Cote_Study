//Swap as call-by-reference
#include <stdio.h>

void    swap3(int *n1, int *n2, int *n3)
{
    int     temp1, temp2;

    temp1 = *n1;
    *n1 = *n3;
    temp2 = *n2;
    *n2 = temp1;
    *n3 = temp2;
}

int     main()
{
    int num1 = 1, num2 = 2, num3 = 3;

    swap3(&num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    return (0);
}