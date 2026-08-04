// this program demonstrates the use of compound assignment operators (+=, -=, *=, /=, %=) in C

#include <stdio.h>

int main()
{
    float number;

    printf("====================================\n");
    printf("     COMPOUND ASSIGNMENT DEMO        \n");
    printf("====================================\n");

    printf("\nEnter a number: ");
    scanf("%f", &number);

    printf("\nInitial Value : %.2f\n", number);

    number += 10;
    printf("After += 10  : %.2f\n", number);

    number -= 5;
    printf("After -= 5   : %.2f\n", number);

    number *= 2;
    printf("After *= 2   : %.2f\n", number);

    number /= 5;
    printf("After /= 5   : %.2f\n", number);

    printf("\n====================================\n");

    return 0;
}
    





















