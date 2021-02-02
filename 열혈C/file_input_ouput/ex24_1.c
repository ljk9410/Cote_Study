#include <stdio.h>

int     main()
{
    FILE    *fp;

    fp = fopen("mystory.txt", "wt");
    if (fp == NULL)
    {
        puts("Fail to open file");
        return (-1);
    }

    fputs("#Name: Lee Jung Kyu \n", fp);
    fputs("#Num: 111111-1111111 \n", fp);
    fputs("#PhoneNum: 010-3333-5555 \n", fp);
    fclose(fp);
    return (0);
}