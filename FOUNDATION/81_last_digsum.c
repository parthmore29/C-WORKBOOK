#include <stdio.h>

int main()
{
    int number, firstDigit, lastDigit, sum;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    lastDigit = number % 10;
    firstDigit = number / 1000;

    sum = firstDigit + lastDigit;

    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);
    printf("Sum = %d\n", sum);

    return 0;
}