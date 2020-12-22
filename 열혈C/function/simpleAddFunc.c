#include <stdio.h>

int     Add(int num1, int num2)
{
    return num1 + num2;
}

void    showResult(int num)
{
    printf("Add number is: %d\n", num);
}

int     readNum(void)
{
    int     num;
    scanf("%d", &num);
    return num;
}

void    howToUse(void)
{
    printf("If you put 2 numbers, this function add the two numbers.\n");
    printf("Put two numbers!\n");
}

int     main()
{
    int     num1, num2, result;

    howToUse();
    num1 = readNum();
    num2 = readNum();
    result = Add(num1, num2);
    showResult(result);
    return (0);
}