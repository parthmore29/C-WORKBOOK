#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}