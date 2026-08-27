#include <stdio.h>

int findHCF(int a, int b)
{
    int remainder;

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    int number1, number2;
    int hcf, lcm;

    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    if (number1 <= 0 || number2 <= 0)
    {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    hcf = findHCF(number1, number2);

    lcm = (number1 / hcf) * number2;

    printf("\nHCF of %d and %d = %d\n",
           number1, number2, hcf);

    printf("LCM of %d and %d = %d\n",
           number1, number2, lcm);

    return 0;
}