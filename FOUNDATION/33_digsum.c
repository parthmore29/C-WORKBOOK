#include<stdio.h>

int main()
{
    int n;
    int d1, d2, d3, d4, sum;

    printf("SUM OF 4 DIGITS\n");
    printf("________________\n");
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    d1= n/1000;
    d2= (n/100)%10;
    d3= (n/10)%10;
    d4= n%10;

    sum= d1+d2+d3+d4;
    printf("\nSUM OF DIGITS IS: %d\n", sum);
    return 0;
}
