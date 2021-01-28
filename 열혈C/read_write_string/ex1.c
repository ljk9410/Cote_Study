#include <stdio.h>

int     main()
{
    int ch;

    ch = getchar();
    if(ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
        putchar(ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
        putchar(ch);
    }
    else
        printf("Please put word.");
    return (0);
}