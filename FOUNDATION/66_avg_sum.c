#include <stdio.h>

int main()
{
    int i, j, count = 0;
    int sum = 0, isPrime;
    float average;

    for (i = 2; i <= 1000; i++)
    {
        isPrime = 1;

        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            sum = sum + i;
            count++;
        }
    }

    average = (float)sum / count;

    printf("Sum of prime numbers = %d\n", sum);
    printf("Number of prime numbers = %d\n", count);
    printf("Average of prime numbers = %.2f\n", average);

    return 0;
}