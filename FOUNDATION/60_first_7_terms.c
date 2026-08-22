#include <stdio.h>

int main()
{
    int i, j;
    long long factorial;
    float sum = 0;

    for (i = 1; i <= 7; i++)
    {
        factorial = 1;

        for (j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        sum = sum + (float)i / factorial;
    }

    printf("Sum = %.4f", sum);

    return 0;
}