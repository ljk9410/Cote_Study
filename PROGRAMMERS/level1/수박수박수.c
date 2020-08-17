#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n)
{
    char*   answer;
    int     i;

    answer = (char*)malloc(sizeof(char) * n * 3);
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            strcpy(answer + (i * 3), "수");
        else
            strcpy(answer + (i * 3), "박");
    }
    return answer;
}
