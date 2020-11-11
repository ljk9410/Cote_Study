#include <stdio.h>

int     main()
{
    int     input;
    int     max ,index;

    index = 1;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &input);
        if (i == 0)
            max = input;
        if (input > max)
        {
            max = input;
            index = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d", index);
    return 0;
}