#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*   solution(const char* s)
{
    char*   answer;
    int     i;
    int     j;

    answer = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(answer, s);
    i = 0;
    while (answer[i] != 0)
    {
        j = 0;
        while ((answer[i + j] != ' ') && (answer[i + j] != 0))
        {
            if (j % 2 == 0)
            {
                if (answer[i + j] >= 'a' && answer[i + j] <= 'z')
                    answer[i + j] -= 32;
            }
            else
            {
                if (answer[i + j] >= 'A' && answer[i + j] <= 'Z')
                    answer[i + j] += 32;
            }
            j++;
        }
        i += j;
        if (answer[i] != 0)
        {
            i++;   
        }
    }
    answer[i] = 0;
    return answer;
}