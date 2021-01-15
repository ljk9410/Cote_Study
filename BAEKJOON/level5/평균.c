#include <stdio.h>

double    max(double * arr, int n)
{
    double result = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (result < arr[i])
            result = arr[i];
    }
    return result;
}

int     main()
{
    int N;
    double arr[1000];
    double Max, avg;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &arr[i]);
    }

    Max = max(arr, N);
    avg = 0;
    for (int i = 0; i < N; i++)
    {
        avg += (arr[i] / Max) * 100;
    }
    printf("%.2lf", avg / N);
    return (0);
}