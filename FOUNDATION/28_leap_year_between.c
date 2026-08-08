#include <stdio.h>

int main()
{
    int year, count = 0;

    printf("\t      LEAP YEARS: 1947 - 2025\n");
    printf("\t=================================\n\n");

    printf("\tLeap years are:\n");

    for(year = 1947; year <= 2025; year++)
    {
        if((year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0))
        {
            printf("%d  ", year);
            count++;
        }
    }

    printf("\n\n\tTotal leap years = %d\n", count);

    return 0;
}