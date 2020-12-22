//문자열 뒤집기
#include <stdio.h>

int     main()
{
    char    word[255];
    char    temp;
    int     len;

    scanf("%s", word);
    len = 0;
    while (word[len])
        len++;
    for (int i = 0; i < len / 2; i++)
    {
        temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
    printf("%s", word);
    return (0);
}