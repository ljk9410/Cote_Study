//Call-By-Value & Call-By-Reference
#include <stdio.h>

void    SquareByReference(int *num)
{
    *num = *num * *num;
}

int     SquareByValue(int num)
{
    num = num * num;
    return (num);
}

int     main()
{
    int     num = 4;
    int     value;

    value = SquareByValue(num);
    printf("num: %d, value: %d \n", num, value);
    SquareByReference(&num);
    printf("%d", num);
    return (0);
}