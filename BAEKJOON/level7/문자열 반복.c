#include <stdio.h>
#include <string.h>

int     main()
{
    int     T, R, len;
    char    S[21];

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &R, S);
        len = strlen(S);
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < R; j++)
                printf("%c", S[i]);
        }
        printf("\n");
    }
    return (0);
}