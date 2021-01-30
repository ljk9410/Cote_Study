#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point pos1;
    Point pos2;
} Rectangle;


int     math_square(Rectangle rec)
{
    int result;
    result = (rec.pos2.xpos - rec.pos1.xpos) * (rec.pos2.ypos - rec.pos1.ypos);
    return (result);
}

void    print_pos(Rectangle rec)
{
    printf("[%d %d] [%d %d] [%d %d] [%d %d]", 
                    rec.pos1.xpos, rec.pos1.ypos,
                    rec.pos2.xpos, rec.pos2.ypos,
                    rec.pos1.xpos, rec.pos2.ypos,
                    rec.pos2.xpos, rec.pos1.ypos);
}

int     main()
{
    Rectangle rec = {{0, 0}, {100, 100}};
    int square;

    square = math_square(rec);
    printf("square: %d \n", square);
    print_pos(rec);
    return (0);
}