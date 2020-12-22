//포인터의 이해
#include <stdio.h>

int     main()
{
    int num = 10;
    int *ptr1 = &num;
    int *ptr2 = ptr1;

    (*ptr1)++;
    (*ptr2)++;
    printf("%d \n", num);
    return (0);
}