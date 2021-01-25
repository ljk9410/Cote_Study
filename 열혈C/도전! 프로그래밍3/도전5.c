#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int     main()
{
    int rock = 1, scissors = 2, paper = 3;
    int computer, me;
    int draw = 0, win = 0;

    srand((int)time(NULL));
    computer = rand() % 3 + 1;
    while (1)
    {
        printf("r: 1, s: 2, p: 3 your choice: ");
        scanf("%d\n", &me);
        printf("You: %d, Computer: %d ", me, computer);
        if ((computer - me) == 0)
        {
            printf("draw!\n");
            draw++;
        }
        else if ((computer - me) == -1 || (computer - me) == 2)
        {
            printf("You lose...\n");
            break ; 
        }
        else if ((computer - me) == 1 || (computer - me) == -2)
        {
            printf("You win!\n");
            win++;
        }
    }
    printf("\nwin: %d, draw: %d", win, draw);
    return (0);
}