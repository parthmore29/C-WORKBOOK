#include <stdio.h>

int main()
{
    int x, n, i, j;
    int power;
    long long factorial;
    float sum = 0, term;

    printf("Enter angle in degrees: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    float radians = x * 3.14159 / 180;

    for (i = 0; i < n; i++)
    {
        power = 2 * i;
        factorial = 1;

        j = 1;

        while (j <= power)
        {
            factorial = factorial * j;
            j++;
        }

        term = 1;

        j = 1;

        while (j <= power)
        {
            term = term * radians;
            j++;
        }

        term = term / factorial;

        if (i % 2 == 0)
            sum = sum + term;
        else
            sum = sum - term;
    }

    printf("Cos(%d) = %.4f", x, sum);

    return 0;
}