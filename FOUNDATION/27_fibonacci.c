#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;


    printf("\n\t    FIBONACCI SERIES    \n");
    printf("\t________________________\n");

    printf("\n\tEnter number of terms: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("\n\tPlease enter a positive number.\n");
        return 0;
    }

    printf("\n\tFirst %d terms:\n", n);

    for(i = 1; i <= n; i++)
    {
        printf("%d", first);

        if(i < n)
            printf("  ");

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n\nFibonacci series completed.\n");

    return 0;
}