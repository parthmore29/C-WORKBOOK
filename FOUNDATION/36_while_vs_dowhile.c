#include <stdio.h>

int main()
{
    int a = 6, b = 6;

    printf("WHILE LOOP:\n");

    while (a <= 5)
    {
        printf("%d ", a);
        a++;
    }

    printf("\nThe while loop did not execute.\n");


    printf("\nDO-WHILE LOOP:\n");

    do
    {
        printf("%d ", b);
        b++;
    } while (b <= 5);

    printf("\nThe do-while loop executed at least once.\n");

    return 0;
}