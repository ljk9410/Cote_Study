#include <stdio.h>

int     main()
{
    int     max, min, target, N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &target);
        if (i == 0)
        {
            max = target;
            min = target;
        }
        if (target >= max)
            max = target;
        if (target <= min)
            min = target;
    }
    printf("%d %d", min, max);
    return 0;
}