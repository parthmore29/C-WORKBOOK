#include <stdio.h>

int main()
{
    int a[100], n;
    int element, position;
    int i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    if (position < 0 || position > n)
    {
        printf("Invalid position!\n");
        return 1;
    }

    /* Shift elements to the right */
    for (i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = element;
    n++;

    printf("\nArray after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}