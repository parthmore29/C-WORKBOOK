#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nLower Triangular Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j <= i)
                printf("%d\t", a[i][j]);
            else
                printf("0\t");
        }

        printf("\n");
    }

    return 0;
}