#include <stdio.h>

//구조체 선언
//struct 구조체이름
struct  structure
{
    int num;
    char character;
    double radius;
    char string[10];
    struct structure *ptr;
    //구조체 멤버로 모든 타입의 변수들이 될 수 있다.
}; //세미콜론 빼먹지 않기!

//typedef - 기존에 존재하는 자료형의 이름을 새롭게 정의
//typedef를 이용해서 struct 생략하기
typedef struct structure Struct;

//구조체 이름 생략
typedef struct
{
    int xpos;
    int ypos;
} Point;

void    change(Point *pos) //인자값의 자료형은 구조체로 선언하면 된다.
{
    int temp;

    temp = pos->xpos;
    pos->xpos = pos->ypos;
    pos->ypos = temp;
}

int     main()
{
    struct structure str1 = {2, 'b', 3.14, "str1"};
    Struct str2 = {1, 'a', 3.14, "hello", &str1}; //구조체 변수 선언과 초기화
    Struct arr[3] = {
        {1, 'a', 3.14, "hello", &str1},
        {2, 'b', 3.14, "hello", &str1},
        {3, 'c', 3.14, "hello", &str1}
    };
    Point pos = {1, 2};

    //구조체 변수 값 접근 방식
    printf("str2.num: %d\n", str2.num);
    printf("arr[1].num: %d\n", arr[1].num);

    //'->'연산자로 포인터 변수 내 값에 접근
    printf("str1.string: %s\n", (*str2.ptr).string);
    printf("str1.string: %s\n", str2.ptr->string);

    //함수의 인자값으로 구조체 전달
    change(&pos);
}