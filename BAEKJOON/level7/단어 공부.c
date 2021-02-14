#include <stdio.h>
#include <string.h>

int     main()
{
    int     alphabet[26] = {0, };
    char    str[1000001];
    int     len, max, max_index = 0, cnt = 0;

    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
            alphabet[(str[i] - 'a')]++;
        else
            alphabet[(str[i] - 'A')]++;        
    }

    max = alphabet[0];
    for (int i = 0; i < 26; i++)
    {
        if (max < alphabet[i])
        {
            max = alphabet[i];
            max_index = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == max)
            cnt++;
    }


    if (cnt == 1)
        printf("%c\n", max_index + 'A');
    else
        printf("?\n");    
    return (0);
}