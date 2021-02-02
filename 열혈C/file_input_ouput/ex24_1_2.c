#include <stdio.h>

int     main()
{
    FILE *fp;

    fp = fopen("mystory.txt", "at");
    if (fp == NULL)
    {
        puts("Fail to open file");
        return (-1);
    }
    fputs("#Favorite food: A, B \n", fp);
    fputs("#Hobby: soccer \n", fp);
    fclose(fp);
    return (0);
}