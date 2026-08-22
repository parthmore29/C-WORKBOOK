#include <stdio.h>

int main()
{
    int x, n, i = 0, j;
    int power;
    long long factorial;
    float sum = 0, term;

    printf("Enter angle in degrees: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    float radians = x * 3.14159 / 180;

    do
    {
        power = 2 * i + 1;
        factorial = 1;

        for (j = 1; j <= power; j++)
        {
            factorial = factorial * j;
        }

        term = 1;

        for (j = 1; j <= power; j++)
        {
            term = term * radians;
        }

        term = term / factorial;

        if (i % 2 == 0)
            sum = sum + term;
        else
            sum = sum - term;

        i++;

    } while (i < n);

    printf("Sin(%d) = %.4f", x, sum);

    return 0;
}