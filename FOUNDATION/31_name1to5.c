#include <stdio.h>

int main()
{
    int i;
    char name[50];

    printf("THE NAME LOOP\n");
    printf("_______________\n");

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("\n Your numbers with your name:  \n\n");

    for(i = 1; i <= 5; i++)
    {
        printf("%d. %s\n", i, name);
    }

    return 0;
}
