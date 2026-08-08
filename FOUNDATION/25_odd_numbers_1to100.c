#include<stdio.h>

int main()
{
    int i;

    printf("The odd numbers from 1 between 100 are:\n");
    for(i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d \n", i);
        }
    }
    printf("\n");
    return 0;
}