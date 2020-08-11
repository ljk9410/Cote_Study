#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char*   solution(const char* s)
{
    int i, j;
    char* answer;
    char temp;

    answer = (char*)malloc(sizeof(char) * strlen(s) + 1);
    strcpy(answer, s);
    for (i = 0; answer[i]; i++)
    {
        for (j = i + 1; answer[j]; j++)
        {
            if (answer[i] < answer[j])
            {
                temp = answer[j];
                answer[j] = answer[i];
                answer[i] = temp;
            }
        }
    }
    return answer;
}