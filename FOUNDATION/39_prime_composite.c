#include <stdio.h>

int main()
{
    int num, i, count;

    for (count = 1; count <= 5; count++)
    {
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        if (num <= 1)
        {
            printf("%d is neither Prime nor Composite.\n\n", num);
            continue;
        }

        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("%d is Composite.\n\n", num);
                break;
            }
        }

        if (i == num)
            printf("%d is Prime.\n\n", num);
    }

    return 0;
}