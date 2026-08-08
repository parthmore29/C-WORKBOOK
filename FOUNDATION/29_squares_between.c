#include <stdio.h>

int main()
{
    int i, square;

    printf("\tSQUARES FROM 20 TO 1\n");
    printf("\t___________________\n\n");

    for(i = 20; i >= 1; i--)
    {
        square = i * i;

        printf("\t%2d x %2d = %4d\n", i, i, square);
    }

    printf("\n\tAll squares have been displayed.\n");

    return 0;
}