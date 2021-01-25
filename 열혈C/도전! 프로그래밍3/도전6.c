#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void    check_strike(int *computer, int *answer, int *strike)
{
    for (int i = 0; i < 3; i++)
    {
        if (computer[i] == answer[i])
            *strike += 1;
    }
}

void    check_ball(int *computer, int *answer, int *ball)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != j && computer[i] == answer[j])
            {
                *ball += 1;
                break ;
            }
        }
    }
}

int     main()
{
    int     computer[3];
    int     answer[3];
    int     strike, ball; 
    int     i = 1;

    printf("Start Game!\n");

    //computer 입력값 - 난수
    srand((int)time(NULL));
    for (int i = 0; i < 3; i++)
        computer[i] = rand() % 10;

    //유저 입력값
    while (strike != 3)
    {
        printf("choose 3 numbers: ");
        for (int i = 0; i < 3; i++)
            scanf("%d", &answer[i]);
        strike = 0;
        ball = 0;
        check_strike(computer, answer, &strike);
        check_ball(computer, answer, &ball);
        printf("Challenge %d: %dstrike, %dball!!\n", i, strike, ball);
        i++;
    }

    printf("Game Over!!");
    return (0);
}