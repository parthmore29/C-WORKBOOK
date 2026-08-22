#include <stdio.h>

char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    else if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    else
        return ch;
}

int main()
{
    char ch, result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = changeCase(ch);

    printf("Changed character = %c", result);

    return 0;
}