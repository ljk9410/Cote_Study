#include <stdio.h>

struct  employee
{
    char    name[20];
    char    num[14];
    int     wage;
};

int     main()
{
    struct employee man;

    printf("name: "); scanf("%s", man.name);
    printf("num: "); scanf("%s", man.num);
    printf("wage: "); scanf("%d", &(man.wage));

    printf("name: %s\n", man.name);
    printf("num: %s\n", man.num);
    printf("wage: %d\n", man.wage);
    return (0);
}