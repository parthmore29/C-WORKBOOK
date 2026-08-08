#include<stdio.h>

int main()
{
    int n, i, limit;

    printf("MULTIPLICATION TABLE\n");
    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d", &n);

    printf("Enter the limit up to which you want the table: ");
    scanf("%d", &limit);

    for(i = 1; i <= limit; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("\n Table completed successfully.\n");
    
    return 0;
}