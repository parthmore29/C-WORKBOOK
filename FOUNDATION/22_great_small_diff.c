#include<stdio.h>

int main()
{
    int a, b, c, greatest, smallest, diffrence;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            greatest = a;
        else
            greatest = c;
    }
    else
    {
        if(b > c)
            greatest = b;
        else
            greatest = c;
    }

    if(a < b)
    {
        if(a < c)
            smallest = a;
        else
            smallest = c;
    }
    else
    {
        if(b < c)
            smallest = b;
        else
            smallest = c;
    }
    diffrence = greatest - smallest;
    printf("GREATEST: %d\n", greatest);
    printf("SMALLEST: %d\n", smallest);
    printf("DIFFERENCE: %d\n", diffrence);

    return 0;
}
    
