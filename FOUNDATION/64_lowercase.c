#include <stdio.h>

void checkLowercase(char ch)
{
    (ch >= 'a' && ch <= 'z')
        ? printf("%c is a lowercase alphabet.\n", ch)
        : printf("%c is not a lowercase alphabet.\n", ch);
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkLowercase(ch);

    return 0;
}