#include <stdio.h>

int main()
{
    float principal, rate, amount, compound_interest;

    printf("PRINCIPAL AMOUNT: ");
    scanf("%f", &principal);

    printf("INTEREST RATE: ");
    scanf("%f", &rate);

    amount = principal * (1 + rate / 100) * (1 + rate / 100);

    compound_interest = amount - principal;
    printf("\nCOMPOUND INTEREST CALCULATION\n");
    printf("\nAmount after the 2 years     : %.2f\n", amount);
    printf("Compound Interest              : %.2f\n", compound_interest);

    return 0;
}