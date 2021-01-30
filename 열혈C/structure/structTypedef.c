#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point;

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
} Person;

int     main()
{
    Point pos = {10 ,20};
    Person man = {"lee", "010-3343-5459", 28};
    
    printf("pos: %d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d", man.name, man. phoneNum, man.age);
    return (0);
}