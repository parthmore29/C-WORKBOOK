#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], copy[100], combined[200];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // strlen()
    printf("\nLength of first string = %d\n", (int)strlen(str1));

    // strcpy()
    strcpy(copy, str1);
    printf("Copied string = %s\n", copy);

    // strcat()
    strcpy(combined, str1);
    strcat(combined, str2);
    printf("Concatenated string = %s\n", combined);

    // strcmp()
    result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result < 0)
        printf("First string comes before second string.\n");
    else
        printf("First string comes after second string.\n");

    return 0;
}