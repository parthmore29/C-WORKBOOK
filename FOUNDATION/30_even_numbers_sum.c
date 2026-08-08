
#include <stdio.h>

int main()
{
    int m, n, i, temp, sum = 0;

    printf("SUM OF EVEN NUMBERS\n");
    printf("___________________\n");

    printf("Enter the starting number: ");
    scanf("%d", &m);

    printf("Enter the ending number: ");
    scanf("%d", &n);

    // Make the range work in either direction 
    if(m > n)
    {
        temp =m;
        m =n;
        n =temp;
    }

    i = m;

    do
    {
        if(i % 2 == 0)
        {
            sum =sum +i;
        }

        i++;
    }
    while(i <= n);

    printf("\nSum of even numbers from %d to %d is %d\n", m, n, sum);

    return 0;
}

