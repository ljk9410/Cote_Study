#include <stdio.h>
#define ADD(a, b, c) ((a) + (b) + (c)) 
#define MUL(a, b, c) ((a) * (b) * (c))

int     main()
{
    printf("a + b + c: %d\n", ADD(3, 5, 7));
    printf("a * b * c: %d", MUL(2, 5, 8));
    return(0);
}