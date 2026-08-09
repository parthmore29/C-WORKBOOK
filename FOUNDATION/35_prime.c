#include <stdio.h>

int main()
{
    int n, i, count, isPrime;

    printf("====================================\n");
    printf("      CHECK PRIME / COMPOSITE\n");
    printf("====================================\n");

    for(count =1; count<=5; count++)
    {
        printf("\nEnter a number %d: ", count);
        scanf("%d", &n);

        if(n <=1)
        {
            printf("%d is neither Prime nor Composite.\n", n);
            continue;
        }

        isPrime =1;

        for(i =2; i <=n / 2; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime ==1)
            printf("%d is a Prime number.\n", n);
        else
            printf("%d is a Composite number.\n", n);
    }

    printf("\nchecking completed for 5 numbers.\n");
    return 0;
}