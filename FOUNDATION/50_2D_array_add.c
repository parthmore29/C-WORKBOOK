#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sum;

    printf("Enter 9 elements of the 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nRow-wise addition:\n");

    for (i = 0; i < 3; i++)
    {
        sum = 0;

        for (j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn-wise addition:\n");

    for (j = 0; j < 3; j++)
    {
        sum = 0;

        for (i = 0; i < 3; i++)
        {
            sum = sum + a[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}