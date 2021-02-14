#include <stdio.h>
#include <string.h>

int     main()
{
    char    str[1000001];
    int     len, i = 0;
    int     cnt = 0;

    gets(str);
    len = strlen(str);

    while (str[i] != 0)
    {
        if (str[i] == ' ')
            cnt++;
        i++;
    }
    if (str[0] != ' ')
    {
        if (str[len - 1] == ' ')
            printf("%d", cnt);
        else
            printf("%d", cnt + 1);        
    }
    else
    {
        if (str[len - 1] == ' ')
            printf("%d", cnt - 1);
        else
            printf("%d", cnt);
    }
    return (0);
}