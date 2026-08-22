#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n, i, j, greatest;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    greatest = a[0][0];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > greatest)
            {
                greatest = a[i][j];
            }
        }
    }

    printf("Greatest element = %d", greatest);

    return 0;
}