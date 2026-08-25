#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, blanks = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("b.dat", "w");

    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter text (press Ctrl+Z then Enter to finish):\n");

    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }

    fclose(fp);

    fp = fopen("b.dat", "r");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ')
            blanks++;

        if (ch == '\n')
            lines++;

        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            if (inWord == 0)
            {
                words++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("\nCharacters = %d\n", characters);
    printf("Blanks = %d\n", blanks);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}