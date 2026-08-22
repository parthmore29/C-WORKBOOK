#include <stdio.h>

int main()
{
    int choice, num, i;
    long long factorial;

    do
    {
        printf("\n--- MAIN MENU ---\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or Not\n");
        printf("3. Odd or Even\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                factorial = 1;

                for (i = 1; i <= num; i++)
                {
                    factorial = factorial * i;
                }

                printf("Factorial of %d = %lld\n", num, factorial);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num <= 1)
                {
                    printf("%d is neither prime nor composite.\n", num);
                }
                else
                {
                    for (i = 2; i < num; i++)
                    {
                        if (num % i == 0)
                        {
                            break;
                        }
                    }

                    if (i == num)
                        printf("%d is Prime.\n", num);
                    else
                        printf("%d is Not Prime.\n", num);
                }

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("%d is Even.\n", num);
                else
                    printf("%d is Odd.\n", num);

                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}