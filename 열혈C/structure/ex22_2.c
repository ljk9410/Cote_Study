#include <stdio.h>

struct  employee
{
    char    name[20];
    char    num[14];
    int     wage;
};

int     main()
{
    struct employee arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("name: "); scanf("%s", &arr[i].name);
        printf("num: "); scanf("%s", &arr[i].num);
        printf("wage: "); scanf("%d", &arr[i].wage);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("name: %s\n", arr[i].name);
        printf("num: %s\n", arr[i].num);
        printf("wage: %d\n", arr[i].wage);
    }
    return (0);
}