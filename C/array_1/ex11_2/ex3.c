//ascii가 가장 큰 문자 찾기
#include <stdio.h>

int     main()
{
    char    word[255];
    int     max, i;

    scanf("%s", word);
    max = word[0];
    i = 0;
    while (word[i])
    {
        if (word[i] > max)
            max = word[i];
        i++;
    }
    printf("%c", max);
    return (0);
}