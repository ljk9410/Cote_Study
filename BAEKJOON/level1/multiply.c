#include <stdio.h>

int     main()
{
    unsigned int    A, B, C ,D ,E;
    
    scanf("%d %d", &A, &B);
    C = (B % 10) * A;
    D = ((B / 10) % 10) * A;
    E = ((B / 100) % 10) * A;
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%d", C + D * 10 + E * 100);
    return 0;
}