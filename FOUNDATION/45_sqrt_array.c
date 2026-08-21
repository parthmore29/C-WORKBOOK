#include <stdio.h>
#include <math.h>

int main()
{
    int num[10], square[10], cube[10];
    float root[10];
    int i;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);

        square[i] = num[i] * num[i];
        root[i] = sqrt(num[i]);
        cube[i] = num[i] * num[i] * num[i];
    }

    printf("\nNumber\tSquare\tSquare Root\tCube\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\t%d\t%.2f\t\t%d\n",
               num[i], square[i], root[i], cube[i]);
    }

    return 0;
}