#include <stdio.h>

// Function to print numbers below a thousand
void printBelowThousand(int n)
{
    char *ones[] = {
        "", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    char *teens[] = {
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
        "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };

    char *tens[] = {
        "", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    if (n >= 100)
    {
        printf("%s Hundred", ones[n / 100]);
        n = n % 100;

        if (n!= 0)
            printf(" ");
    }

    if (n >= 10 && n <= 19)
    {
        printf("%s", teens[n - 10]);
    }
    else
    {
        if (n >= 20)
        {
            printf("%s", tens[n / 10]);
            n = n % 10;

            if (n!= 0)
                printf(" ");
        }

        if (n > 0 && n < 10)
        {
            printf("%s", ones[n]);
        }
    }
}

int main()
{
    int n;

    printf("\n======== NUMBER TO WORDS ========\n\n");

    printf("ENTER A NUMBER (from 0 to 99999): ");
    scanf("%d", &n);

    if (n < 0 || n > 99999)
    {
        printf("\nNumber out of range! Please enter a number between 0 and 99999.\n");
        return 0;
    }

    printf("\nNUMBER IN WORDS: ");

    if (n == 0)
    {
        printf("Zero");
    }
    else
    {
        if (n >= 1000)
        {
            printBelowThousand(n / 1000);
            printf(" Thousand");

            n = n % 1000;

            if (n!= 0)
                printf(" ");
        }

        if (n!= 0)
        {
            printBelowThousand(n);
        }
    }

    printf("\n");

    return 0;
}

