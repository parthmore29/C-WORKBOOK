#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
    int i;

    if (number < 2)
        return 0;

    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int isArmstrong(int number)
{
    int originalNumber = number;
    int temp = number;
    int digits = 0;
    int digit;
    int sum = 0;

    if (number == 0)
        return 1;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = number;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNumber;
}

int isDoubleArmstrong(int number)
{
    int firstDigit, secondDigit;
    int sum;

    if (number < 10 || number > 99)
        return 0;

    firstDigit = number / 10;
    secondDigit = number % 10;

    sum = (firstDigit * firstDigit) +
          (secondDigit * secondDigit);

    return sum == number;
}

int main()
{
    int m, n;
    int choice;
    int i;

    printf("Enter starting number (m): ");
    scanf("%d", &m);

    printf("Enter ending number (n): ");
    scanf("%d", &n);

    if (m > n)
    {
        int temp = m;
        m = n;
        n = temp;
    }

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Display all Prime Numbers\n");
        printf("2. Display all Armstrong Numbers\n");
        printf("3. Display all Double Armstrong Numbers\n");
        printf("4. Exit\n");
        printf("==========================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nPrime numbers between %d and %d:\n", m, n);

                for (i = m; i <= n; i++)
                {
                    if (isPrime(i))
                        printf("%d ", i);
                }

                printf("\n");
                break;

            case 2:
                printf("\nArmstrong numbers between %d and %d:\n", m, n);

                for (i = m; i <= n; i++)
                {
                    if (isArmstrong(i))
                        printf("%d ", i);
                }

                printf("\n");
                break;

            case 3:
                printf("\nDouble Armstrong numbers between %d and %d:\n", m, n);

                for (i = m; i <= n; i++)
                {
                    if (isDoubleArmstrong(i))
                        printf("%d ", i);
                }

                printf("\n");
                break;

            case 4:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}