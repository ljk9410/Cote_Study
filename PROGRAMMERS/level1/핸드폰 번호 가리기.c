#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*   solution(const char* phone_number)
{
    char*   answer;
    
    answer = (char*)malloc(sizeof(char) * strlen(phone_number) + 1);
    strcpy(answer, phone_number);
    for (int i = 0; i < strlen(phone_number) - 4; i++)
    {
        answer[i] = '*';
    }
    return answer;
}
