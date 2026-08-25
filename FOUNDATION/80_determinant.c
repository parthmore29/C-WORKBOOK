#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, determinant;
    FILE *fp;

    printf("Enter elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    determinant =
        a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    fp = fopen("matrix.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "Matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            fprintf(fp, "%d ", a[i][j]);
        }

        fprintf(fp, "\n");
    }

    fprintf(fp, "\nDeterminant = %d\n", determinant);

    fclose(fp);

    printf("Matrix and determinant saved in matrix.txt\n");

    return 0;
}