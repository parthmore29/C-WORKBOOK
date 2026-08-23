#include <stdio.h>

int main()
{
    char name[10][50];
    float basic[10], da, hra, tax, total;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %49[^\n]", name[i]);

        printf("Enter basic salary: ");
        scanf("%f", &basic[i]);
    }

    printf("\n===============================================\n");
    printf("                 PAY SHEET\n");
    printf("===============================================\n");

    for (i = 0; i < 10; i++)
    {
        da = basic[i] * 0.65;
        hra = basic[i] * 0.10;
        tax = basic[i] * 0.30;

        total = basic[i] + da + hra - tax;

        printf("\nEmployee Name : %s\n", name[i]);
        printf("Basic Salary  : %.2f\n", basic[i]);
        printf("DA            : %.2f\n", da);
        printf("HRA           : %.2f\n", hra);
        printf("Income Tax    : %.2f\n", tax);
        printf("Total Salary  : %.2f\n", total);
    }

    return 0;
}