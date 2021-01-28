#include <stdio.h>
#include <string.h>

int     main()
{
    char    str1[20];
    char    str2[20];
    char    str3[20];
    int     len;

    fgets(str1, sizeof(str1), stdin);
    len = strlen(str1);
    str1[len - 1] = 0;

    fgets(str2, sizeof(str2), stdin);
    len = strlen(str2);
    str2[len - 1] = 0;

    strcpy(str3, str1);
    strcat(str3, str2);
    printf("%s", str3);
    return (0);
}