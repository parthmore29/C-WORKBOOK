#include <stdio.h>

int factorial(int digit)
{
    int fact = 1;
    int i;

    for (i = 1; i <= digit; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int isStrongNumber(int number)
{
    int original = number;
    int sum = 0;
    int digit;

    /* Special case for 0 */
    if (number == 0)
        return 1;

    while (number > 0)
    {
        digit = number % 10;
        sum = sum + factorial(digit);
        number = number / 10;
    }

    return sum == original;
}

int main()
{
    int i;

    printf("Strong numbers between 0 and 10000000:\n\n");

    for (i = 0; i <= 10000000; i++)
    {
        if (isStrongNumber(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}