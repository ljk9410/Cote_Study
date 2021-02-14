#include <stdio.h>

int     main()
{
    char    str[101];
    int     result[26];
    int     i = 0;
    int     c;

    scanf("%s", str);
    for (int j = 0; j < 26; j++)
        result[j] = -1;
    while (str[i] != 0)
    {
        c = str[i] - 'a';
        if (result[c] == -1)
            result[c] = i;
        i++;
    }
    for (int j = 0; j < 26; j++)
    {
        printf("%d", result[j]);
        if (j < 25)
            printf(" ");
    }
    return (0);
}