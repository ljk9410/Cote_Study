#include <stdio.h>
#include <stdlib.h>

int     str_len(const char* s)
{
    int     i;

    i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    return i;
}

char*   solution(const char* s)
{
    char* answer;

    if (str_len(s) % 2 == 0)
    {
        answer = (char*)malloc(sizeof(char) * 2);
        answer[0] = s[str_len(s) / 2 - 1];
        answer[1] = s[str_len(s) / 2];
        return answer;
    }
    else
    {
        answer = (char*)malloc(sizeof(char) * 1);
        answer[0] = s[str_len(s) / 2];
        return answer;
    }
}