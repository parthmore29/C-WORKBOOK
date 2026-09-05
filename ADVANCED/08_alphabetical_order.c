#include <stdio.h>
#include <string.h>

int main()
{
    char str[3][100];
    char temp[100];

    int i, j;

    printf("Enter 3 strings:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);

        /* Remove newline */
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    /*
       Compare every string with the remaining strings.
       If they are in the wrong alphabetical order,
       swap them.
    */
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\n========== ALPHABETICALLY SORTED STRINGS ==========\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}