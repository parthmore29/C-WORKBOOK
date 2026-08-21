#include <stdio.h>

int main()
{
    int num[10], i, sum = 0;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    printf("\nThe numbers are:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n\nSum of all numbers = %d\n", sum);

    return 0;
}