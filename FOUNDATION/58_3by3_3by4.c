#include <stdio.h>

int main()
{
    int a[3][4];
    int i, j, sum;

    printf("Enter elements of 3 x 3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        sum = 0;

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }

        a[i][3] = sum;
    }

    printf("\n3 x 4 Matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}