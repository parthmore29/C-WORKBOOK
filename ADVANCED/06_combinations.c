#include <stdio.h>

int main()
{
    int num;
    int a, b, c;
    int combinations[6];
    int i;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    /* Extract the three digits */
    a = num /100;
    b = (num /10) % 10;
    c = num %10;
    
    /* Generate all possible arrangements */
    combinations[0] = a * 100 + b * 10 + c;
    combinations[1] = a * 100 + c * 10 + b;
    combinations[2] = b * 100 + a * 10 + c;
    combinations[3] = b * 100 + c * 10 + a;
    combinations[4] = c * 100 + a * 10 + b;
    combinations[5] = c * 100 + b * 10 + a;

    printf("\nThe three digits are: %d, %d, %d\n", a, b, c);

    printf("\nAll possible combinations:\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d\n", combinations[i]);
    }

    return 0;
}
