#include <stdio.h>

int     main()
{
    FILE    *fp;
    char    buf[20];
    
    fp = fopen("mystory.txt", "rt");
    while (fgets(buf, sizeof(buf), fp) != NULL)
    {
        printf("%s", buf);
    }
    fclose(fp);
    return (0);
}