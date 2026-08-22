#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = i; j < n; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of upper triangular elements = %d\n", sum);

    return 0;
}