#include <stdio.h>

int main()
{
    int num[5], i, oldValue, newValue;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Enter the value to replace: ");
    scanf("%d", &oldValue);

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    for (i = 0; i < 5; i++)
    {
        if (num[i] == oldValue)
        {
            num[i] = newValue;
        }
    }

    printf("\nUpdated array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}