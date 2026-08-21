#include <stdio.h>

int main()
{
    float a[3][4];
    int i, j;

    printf("Enter 12 float values:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    printf("\nThe array is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}