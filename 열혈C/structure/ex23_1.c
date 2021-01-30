#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void    swapPoint(Point *pos1, Point *pos2)
{
    Point temp;

    temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

int     main()
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    swapPoint (&pos1, &pos2);
    printf("pos1: %d %d, pos2: %d %d", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}