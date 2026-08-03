#include <stdio.h>

int main()
{
    int amount;
    int coins_10, coins_5, coins_1;
    int remaining;

    printf("====================================\n");
    printf("        COIN COUNTER PROGRAM        \n");
    printf("====================================\n");

    printf("\nAMMOUNT IN RUPEES : Rs. ");
    scanf("%d", &amount);

    if (amount < 0)
    {
        printf("\nInvalid amount! Please enter a positive amount.\n");
    }
    else
    {
        remaining = amount;

        //to Calculate number of Rs. 10 coins:
        coins_10 = remaining / 10;
        remaining = remaining % 10;

        // to Calculate number of Rs. 5 coins:
        coins_5 = remaining / 5;
        remaining = remaining % 5;

        // To Calculate number of Rs. 1 coins:
        coins_1 = remaining;

        printf("\n====================================\n");
        printf("           COIN BREAKDOWN           \n");
        printf("====================================\n");

        printf("TOTAL AMOUNT : Rs. %d\n", amount);
        printf("------------------------------------\n");
        printf("Rs. 10 Coins : %d\n", coins_10);
        printf("Rs. 5 Coins  : %d\n", coins_5);
        printf("Rs. 1 Coins  : %d\n", coins_1);
        printf("------------------------------------\n");

        printf("TOTAL COINS  : %d\n", coins_10 + coins_5 + coins_1);

        printf("====================================\n");
    }

    return 0;
}