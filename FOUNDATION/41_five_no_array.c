#include <stdio.h>

int main()
{
    int num[5], i, max;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];

    for (i = 1; i < 5; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("Maximum number = %d\n", max);

    return 0;
}