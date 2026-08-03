#include <stdio.h>

int main()
{
    float num1, num2;

    printf("ENTER THE TWO FLOAT VALUES: ");
    scanf("%f %f", &num1, &num2);

    printf("\nSQUARE AND CUBE CALCULATION\n");
    printf("\n-------------------------------------------------------------------\n");
    printf("\nNumber     Square     Cube\n");
    printf("%.2f       %.2f       %.2f\n", num1, num1 * num1, num1 * num1 * num1);
    printf("%.2f       %.2f       %.2f\n", num2, num2 * num2, num2 * num2 * num2);
    printf("\n-------------------------------------------------------------------\n");
    
    return 0;
}