#include <stdio.h>
#include <string.h>

int main()
{
    char str[3][50];
    char temp[50];
    int i, j;

    printf("Enter 3 strings:\n");

    for (i = 0; i < 3; i++)
    {
        printf("String %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);

        str[i][strcspn(str[i], "\n")] = '\0';
    }

    /* Alphabetical sorting */
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

    printf("\nStrings in alphabetical order:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}