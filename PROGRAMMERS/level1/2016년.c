#include <stdio.h>

char*   solution(int a, int b)
{
    int     month_days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char    days[7][3] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    char*    answer;
    int     temp = 0;

    for (int i = 0; i < a - 1; i++)
    {
        temp += month_days[i];
    }
    temp = (temp + b - 1) % 7;

    answer = (char*)malloc(sizeof(char) * 4);
    for (int i = 0; i < 3; i++)
    {
        answer[i] = days[temp][i];
    }
    return answer;
}
