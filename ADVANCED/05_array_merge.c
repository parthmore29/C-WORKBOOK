#include <stdio.h>

int main()
{
    int a[100],b[100],c[200];
    int n1, n2;
    int i, j, k;

    printf("===== MERGE TWO SORTED ARRAYS =====\n\n");

    /* Input first sorted array */
    printf("ENTER SIZE OF FIRST SORTED ARRAY: ");
    scanf("%d", &n1);

    printf("ENTER %d ELEMENTS IN SORTED ORDER:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Input second sorted array */
    printf("\nENTER SIZE OF SECOND SORTED ARRAY: ");
    scanf("%d", &n2);

    printf("ENTER %d ELEMENTS IN SORTED ORDER:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    /*
       i -> current element of first array
       j -> current element of second array
       k -> position in third array
    */
    i = 0;
    j = 0;
    k = 0;

    /* Merge both sorted arrays */
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    /* Copy remaining elements of first array */
    while (i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    /* Copy remaining elements of second array */
    while (j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    /* Display first array */
    printf("\nFirst sorted array : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", a[i]);
    }

    /* Display second array */
    printf("\nSecond sorted array: ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", b[i]);
    }

    /* Display merged array */
    printf("\nMerged sorted array: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
    
    printf("\n");

    return 0;
}

