//포인터의 이해 2
#include <stdio.h>

int     main()
{
    int     num1 = 10, num2 = 20;
    int     *ptr1;
    int     *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    (*ptr1) += 10;
    (*ptr2) -= 10;

    ptr1 = ptr2; //ptr1 = &num2
    ptr2 = &num1;

    printf("ptr1: %d, ptr2: %d", (*ptr1), (*ptr2));
    return (0);
}