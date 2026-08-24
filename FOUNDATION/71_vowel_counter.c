#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int a = 0, e = 0, ii = 0, o = 0, u = 0;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            a++;
            vowels++;
        }
        else if (str[i] == 'e' || str[i] == 'E')
        {
            e++;
            vowels++;
        }
        else if (str[i] == 'i' || str[i] == 'I')
        {
            ii++;
            vowels++;
        }
        else if (str[i] == 'o' || str[i] == 'O')
        {
            o++;
            vowels++;
        }
        else if (str[i] == 'u' || str[i] == 'U')
        {
            u++;
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
    }

    printf("\nOccurrences of vowels:\n");
    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", ii);
    printf("o = %d\n", o);
    printf("u = %d\n", u);

    printf("\nTotal vowels = %d\n", vowels);
    printf("Total consonants = %d\n", consonants);

    if (vowels > consonants)
        printf("Number of vowels is more.\n");
    else if (consonants > vowels)
        printf("Number of consonants is more.\n");
    else
        printf("Both are equal.\n");

    return 0;
}