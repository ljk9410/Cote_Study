#include <stdio.h>
#include <string.h>

struct  person
{
    char    name[20];
    char    phoneNum[20];
    int     age;
};

int     main()
{
    struct person man1, man2;

    strcpy(man1.name, "Lee Jung Kyu");
    strcpy(man1.phoneNum, "010-3343-5459");
    man1.age = 28;

    printf("name: "); scanf("%s", man2.name);
    printf("phoneNum: "); scanf("%s", man2.phoneNum);
    printf("age: "); scanf("%d", &(man2.age));

    printf("name: %s\n", man1.name);
    printf("phoneNum: %s\n", man1.phoneNum);
    printf("age: %d\n", man1.age);

    printf("name: %s\n", man2.name);
    printf("phoneNum: %s\n", man2.phoneNum);
    printf("age: %d\n", man2.age);
    return (0);
}