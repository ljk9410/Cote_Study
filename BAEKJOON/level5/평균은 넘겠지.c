#include <stdio.h>

int     main()
{
    int         C, n, sum, count;
    int         score[1000];
    double      avg = 0;
    
    scanf("%d", &C);
    for (int i = 0; i < C; i++)
    {
        sum = 0;
        count = 0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (double) sum / n;
        for (int k = 0; k < n; k++)
        {
            if (score[k] > avg)
                count++;
        }
        printf("%.3lf%%\n", ((double) count * 100) / n);
    }
    return (0);
}