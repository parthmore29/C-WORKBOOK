#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, sum = 0;

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

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][n - 1 - i];
    }

    printf("Sum of right diagonal elements = %d\n", sum);

    return 0;
}