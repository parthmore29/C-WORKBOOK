#include <stdio.h>

int main()
{
    float num1, num2, average;
    float *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    average = (*ptr1 + *ptr2) / 2;

    printf("Average = %.2f\n", average);

    return 0;
}