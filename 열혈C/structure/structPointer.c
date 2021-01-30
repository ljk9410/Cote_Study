#include <stdio.h>

struct point1
{
    int xpos;
    int ypos;
};

struct point2
{
    int xpos;
    int ypos;
};

struct circle
{
    double radius;
    struct point1 *cen;
};

int     main()
{
    struct point1 cen = {5, 7};
    double rad = 5.5;

    struct circle ring ={rad, &cen};
    printf("center [%d, %d] \n", ring.cen->xpos, ring.cen->ypos);
    return (0);
}