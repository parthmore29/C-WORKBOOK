#include <stdio.h>

int main()
{
    int n, original, reverse = 0, remainder;

    printf("PALINDROME CHECKER\n");
    printf("___________________\n");

    printf("Enter any number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        remainder = n%10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }

    printf("\n Original number = %d\n", original);
    printf("Reversed number = %d\n", reverse);

    if(original == reverse)
    {
        printf("\n It is a palindrome.\n");
        printf("Square = %d\n", original * original);
    }
    else
    {
        printf("\n It is not a palindrome.\n");
        printf("Cube = %d\n", original * original * original);
    }

    return 0;
}
