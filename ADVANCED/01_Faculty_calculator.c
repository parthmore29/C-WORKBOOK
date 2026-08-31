#include <stdio.h>

int main()
{
    int a, b;
    char op;
    long long result;

    printf("===== FAULTY CALCULATOR =====\n\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    /* Faulty cases */

    if (a == 23 && b == 56 && op == '+')
    {
        result = 2356;
        printf("\nFaulty Result = %lld", result);
    }

    else if (a == 7 && b == 45 && op == '*')
    {
        result = -56;
        printf("\nFaulty Result = %lld", result);
    }

    else if (a == 12 && b == 22 && op == '*')
    {
        result = 345;
        printf("\nFaulty Result = %lld", result);
    }

    else if (a == 234 && b == 89 && op == '-')
    {
        result = 323;
        printf("\nFaulty Result = %lld", result);
    }

    //Correct calculation for all other cases 

    else
    {
        switch (op)
        {
            case '+':
                result = (long long)a + b;
                printf("\nCorrect Result = %lld", result);
                break;

            case '-':
                result = (long long)a - b;
                printf("\nCorrect Result = %lld", result);
                break;

            case '*':
                result = (long long)a * b;
                printf("\nCorrect Result = %lld", result);
                break;

            case '/':
                if (b == 0)
                {
                    printf("\nError: Division by zero is not allowed.");
                    return 0;
                }

                printf("\nCorrect Result = %.2f",
                       (double)a / b);
                break;

            case '%':
                if (b == 0)
                {
                    printf("\nError: Modulo by zero is not allowed.");
                    return 0;
                }

                result = a % b;
                printf("\nCorrect Result = %lld", result);
                break;

            default:
                printf("\nInvalid operator!");
        }
    }

    printf("\n");

    return 0;
}
