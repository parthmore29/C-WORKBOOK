#include <stdio.h>
#include <string.h>
int main()
{
    char names[50][100];
    char evenNames[50][100];
    char oddNames[50][100];

    int n;
    int evenCount = 0;
    int oddCount = 0;
    int i;

    printf("ENTER NUMBER OF NAMES: ");
    scanf("%d", &n);

    /* Remove newline left by scanf */
    while (getchar() != '\n');

    /* Input names */
    for (i = 0; i < n; i++)
    {
        printf("ENTER NAME %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        /* Remove newline */
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    /* Separate names according to length */
    for (i = 0; i < n; i++)
    {
        if (strlen(names[i]) % 2 == 0)
        {
            strcpy(evenNames[evenCount], names[i]);
            evenCount++;
        }
        else
        {
            strcpy(oddNames[oddCount], names[i]);
            oddCount++;
        }
    }
    /* Display original array */
    printf("\n========== ORIGINAL ARRAY ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
    /* Display even-length names */
    printf("\n========== EVEN LENGTH NAMES ==========\n");

    if (evenCount == 0)
    {
        printf("No names with even length.\n");
    }
    else
    {
        for (i = 0; i < evenCount; i++)
        {
            printf("%s\n", evenNames[i]);
        }
    }

    /* Display odd-length names */
    printf("\n========== ODD LENGTH NAMES ==========\n");

    if (oddCount == 0)
    {
        printf("No names with odd length.\n");
    }
    else
    {
        for (i = 0; i < oddCount; i++)
        {
            printf("%s\n", oddNames[i]);
        }
    }
   return 0;
}

