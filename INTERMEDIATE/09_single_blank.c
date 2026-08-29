#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;
    int blank = 0;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (blank == 0)
            {
                str[j++] = ' ';
                blank = 1;
            }
        }
        else
        {
            str[j++] = str[i];
            blank = 0;
        }
    }

    str[j] = '\0';
    printf("\n--------------------------------------------");
    printf("\nAfter removing the extra blanks:\n%s", str);

    return 0;
}