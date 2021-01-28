#include <stdio.h>

int     make_number(int index)
{
    int     temp;

    temp = index;
    while (temp)
    {
        index += temp % 10;
        temp /= 10;
    }
    return (index);
}

int     main()
{
    int     arr[10001];
    int     check;
    

    //생성자를 index - 1에 넣기
    for (int index = 1; index < 10001; index++)
    {
        check = make_number(index);
        if (check < 10000)
            arr[check] = 1;
    }
    
    //셀프 넘버 출력하기
    for (int i = 1; i < 10000; i++)
    {
        if (arr[i] != 1)
            printf("%d\n", i);
    }
    return (0);
}