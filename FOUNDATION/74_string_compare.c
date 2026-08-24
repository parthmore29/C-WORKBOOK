#include <stdio.h>
#include<string.h>
#include <ctype.h>

int compareStrings(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (tolower(str1[i]) != tolower(str2[i]))
            return 0;

        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (compareStrings(str1, str2))
        printf("Both strings are equal.\n");
    else
        printf("Both strings are not equal.\n");

    return 0;
}