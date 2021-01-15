#include <stdio.h>

int     main()
{
    int arr[10];
    int answer, count;

    answer = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] %= 42;
    }

    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 0)
            answer++;
    }
    printf("%d", answer);
    return (0);
}