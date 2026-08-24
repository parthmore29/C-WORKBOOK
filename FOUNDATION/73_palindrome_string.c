#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");

    return 0;
}