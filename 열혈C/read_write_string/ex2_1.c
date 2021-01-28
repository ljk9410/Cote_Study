#include <stdio.h>

int     main()
{
    int     sum = 0;
    char    str[255];
    int     i = 0;

    fgets(str, sizeof(str), stdin);
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += str[i] - '0';
        }
        i++;
    }
    printf("%d", sum);
    return (0);
}