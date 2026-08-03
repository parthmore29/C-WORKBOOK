#include <stdio.h>

int main()
{
    int number;
    int digit1, digit2, digit3;
    int sum;

    printf("====================================\n");
    printf("      SUM OF DIGIT SQUARES          \n");
    printf("====================================\n");

    printf("\nENTER A 3-DIGIT NUMBER: ");
    scanf("%d", &number);

    if (number < 100 || number > 999)
    {
        printf("\nInvalid input! Please enter a 3-digit number.\n");
    }
    else
    {
        //to Extract the digits
        digit1 = number /100;
        digit2 = (number /10) % 10;
        digit3 = number %10;

        // Calculate sum of squares
        sum = (digit1 * digit1) +
              (digit2 * digit2) +
              (digit3 * digit3);

        printf("\n====================================\n");
        printf("           CALCULATION               \n");
        printf("====================================\n");

        printf("Number : %d\n", number);

        printf("Digits : %d, %d, %d\n",
               digit1, digit2, digit3);

        printf("\nCalculation:\n");
        printf("(%d x %d) + (%d x %d) + (%d x %d)\n",
               digit1, digit1,
               digit2, digit2,
               digit3, digit3);

        printf("\nSum of squares = %d\n", sum);

        printf("====================================\n");
    }

    return 0;
}