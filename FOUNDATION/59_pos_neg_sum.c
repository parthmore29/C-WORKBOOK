#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n, i, j;
    int positiveSum = 0, negativeSum = 0;

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

            if (a[i][j] >= 0)
            {
                positiveSum = positiveSum + a[i][j];
            }
            else
            {
                negativeSum = negativeSum + a[i][j];
            }
        }
    }

    printf("\nMatrix elements with signs:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] >= 0)
            {
                printf("+%d\t", a[i][j]);
            }
            else
            {
                printf("%d\t", a[i][j]);
            }
        }

        printf("\n");
    }

    printf("\nSum of positive elements = %d", positiveSum);
    printf("\nSum of negative elements = %d", negativeSum);

    return 0;
}