//문자열의 길이
#include <stdio.h>

int     main()
{
    char    word[255];
    int     len = 0;

    scanf("%s", word);
    while (word[len])
        len++;
    printf("%d\n", len);
    return (0);
}