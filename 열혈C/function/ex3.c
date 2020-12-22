//static 변수의 활용
#include <stdio.h>

int     AddToTotal(int num)
{
    static int  total = 0;
    total += num;
    return (total);
}

int     main()
{
    int     num;

    for (int i = 0; i < 3; i++)
    {
        printf("input%d:  ", i + 1);
        scanf("%d", &num);
        printf("accumlate: %d \n", AddToTotal(num));
    }
    return (0);
}