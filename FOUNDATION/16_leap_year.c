// C program to check whether a year is a leap year or not

#include<stdio.h>

int main()
{
    int year;

    printf("====================================\n");
    printf("   THE LEAP YEAR CHECKER  \n");
    printf("====================================\n");

    printf("\nENTER A YEAR: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("\n%d is a leap year.\n", year);
    }
    else
    {
        printf("\n%d is not a leap year.\n", year);
    }
    printf("====================================\n");

    return 0;   
}