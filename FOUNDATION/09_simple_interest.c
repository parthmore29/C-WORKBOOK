#include <stdio.h>

int main()
{
    float principal, rate, time, simple_interest;

    printf("PRINCIPAL AMOUNT : ");
    scanf("%f", &principal);

    printf("INTEREST RATE : ");
    scanf("%f", &rate);

    printf("PERIOD (in yrs.): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    printf("\nSIMPLE INTEREST CALCULATION\n");
    printf("\nPRINCIPAL AMOUNT : %.2f\n", principal);
    printf("INTEREST AMOUNT    : %.2f%%\n", rate);
    printf("TIME PERIOD        : %.2f years\n", time);
    printf("SIMPLE INTEREST    : %.2f\n", simple_interest);
    printf("\n--------------------------------\n");

    
    return 0;
}