#include <stdio.h>

int main()
{
    int number;

    printf("====================================\n");
    printf("      % THE DIVISIBILITY CHECKER %    \n");
    printf("====================================\n");

    printf("\nENTER A NUMBER: ");
    scanf("%d", &number);

    printf("\n====================================\n");

    if (number % 7 == 0)
    {
        printf("%d is divisible by 7.\n", number);
        printf("Remainder = 0\n");
    }
    else
    {
        printf("%d is not divisible by 7.\n", number);
        printf("Remainder = %d\n", number % 7);
    }

    printf("====================================\n");

    return 0;
}