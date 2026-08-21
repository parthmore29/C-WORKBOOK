#include <stdio.h>

int main()
{
    int num[5], i, even = 0, odd = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nEven numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}