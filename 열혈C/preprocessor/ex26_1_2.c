#include <stdio.h>
#define PI 3.14
#define AREA(r) ((r)*(r)*PI)

int     main()
{
    double      r;

    scanf("%lf", &r);
    printf("r = %lf: %lf", r, AREA(r));
    return(0);
}