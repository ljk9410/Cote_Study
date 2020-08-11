#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool    solution(const char* s)
{
    bool    answer;

    for (int i = 0; s[i]; i++)
    {
        if (!((s[i] >= '0' && s[i] <= '9') && 
            (strlen(s) == 4 || strlen(s) == 6)))
        {
            answer = false;
            return answer;
        }
    }
    return true;
}