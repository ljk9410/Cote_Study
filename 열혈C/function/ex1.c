#include <stdio.h>

int     largestNum(int num1, int num2, int num3)
{
    int     result = num1;

    if (num2 > result)
        result = num2;
    if (num3 > result)
        result = num3;
    return result;
}

int     smallestNum(int num1, int num2, int num3)
{
    int     result = num1;

    if (num2 < result)
        result = num2;
    if (num3 < result)
        result = num3;
    return result;    
}

int     main()
{
    int     num1, num2, num3;
    
    printf("Put 3 numbers\n");
    scanf("%d %d %d\n", &num1, &num2, &num3);
    printf("The largest number is: %d\n", largestNum(num1, num2, num3));
    printf("The smallest number is: %d\n", smallestNum(num1, num2, num3));
    return (0);
}