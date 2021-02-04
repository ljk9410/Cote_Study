#include <stdio.h>
#define COM(A, B) ((A) > (B) ? (A) : (B))

int     main()
{
    int     A, B;
    
    scanf("%d %d", &A, &B);
    printf("what is the bigger one?: %d", COM(A, B));
    return (0);
}