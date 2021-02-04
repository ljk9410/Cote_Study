#include <stdio.h>
#include <stdlib.h>

void    print_reverse(char *str, int len)
{
    for (int i = len; i > 0; i--)
    {
        if (str[i] == ' ')
        {
            printf("%s ", &str[i + 1]);
            str[i] = 0;
        }
    }
    printf("%s", str);
}

int     main()
{
    int     len;
    char    *str;

    printf("Put length of the string: ");
    scanf("%d", &len);
    getchar();

    if (!(str = (char *)malloc(sizeof(char) * len + 1)))
    {
        printf("Fail to allocate memory");
        return (-1);
    }
    fgets(str, len + 1, stdin);
    str[len] = 0;
    print_reverse(str, len);
    free(str);
    return (0);
}