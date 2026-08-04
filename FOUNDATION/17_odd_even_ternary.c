// C program to check whether a number is odd or even using ternary operator ie. &(and)

#include<stdio.h>
int main()
{
    int number;

printf("====================================\n");
printf("   CHECK IF A NUMBER IS ODD OR EVEN  \n");
printf("====================================\n");

printf("\nENTER A NUMBER: ");
scanf("%d", &number);
(number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);
printf("=========================================\n");
return 0;
}