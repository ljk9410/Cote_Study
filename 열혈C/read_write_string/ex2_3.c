#include <stdio.h>
#include <string.h>

int    check_name(char *p1, char *p2)
{
    int     i;

    i = 0;
    while (p1[i] != ' ' && p2[i] != ' ')
    {
        if (p1[i] != p2[i])
        {
            printf("Not same name\n");
            return (0);
        }
        i++;
    }
    printf("Same Name!!!\n");
    return(0);
}

int    check_age(char *p1, char *p2)
{
    int     i = 0, j = 0;

    while (p1[i] != ' ')
        i++;
    i++;
    while (p2[j] != ' ')
        j++;
    j++;
    while (p1[i] && p2[j])
    {
        if (p1[i] != p2[j])
        {
            printf("Not same age\n");
            return (0);
        }
        i++;
        j++;
    }
    printf("Same Age!!!\n");
    return (0);
}

int     main()
{
    char    per1[255];
    char    per2[255];
    int     len;

    fgets(per1, sizeof(per1), stdin);
    len = strlen(per1);
    per1[len - 1] = 0;

    fgets(per2, sizeof(per2), stdin);
    len = strlen(per2);
    per2[len - 1] = 0;

    check_name(per1, per2);
    check_age(per1, per2);
    return (0);
}