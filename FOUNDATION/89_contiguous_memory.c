#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Value\tAddress\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t%p\n", arr[i], (void *)&arr[i]);
    }

    return 0;
}