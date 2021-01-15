#include <stdio.h>

int     main()
{
    double A, B;

    scanf("%lf %lf", &A, &B);
    printf("%.9lf", A / B); // 소수점 아래 9번째 자리까지 표시
    return (0);
}