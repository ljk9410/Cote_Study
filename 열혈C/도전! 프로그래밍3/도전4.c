#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int     main()
{
    int seed;

    srand((int)time(NULL));

    printf("dice1: %d\n", rand() % 6 + 1);
    printf("dice2: %d", rand() % 6 + 1);
    return (0);
}