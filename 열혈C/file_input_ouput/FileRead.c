#include <stdio.h>

int     main()
{
    int ch, i;
    FILE *fp;

    fp = fopen("data.txt", "rt");
    if (fp == NULL)
    {
        puts("Fail to open file");
        return (-1);
    }

    for (int i = 0; i < 3; i++)
    {
        ch = fgetc(fp);
        printf("%c \n", ch);
    }
    fclose(fp);
    return (0);
}