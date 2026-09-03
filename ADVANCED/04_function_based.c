#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Function to convert string to uppercase */
void upperCase(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper((unsigned char)str[i]);
    }
}

/* Function to convert string to lowercase */
void lowerCase(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower((unsigned char)str[i]);
    }
}

/* Function to toggle the case */
void toggleCase(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isupper((unsigned char)str[i]))
        {
            str[i] = tolower((unsigned char)str[i]);
        }
        else if (islower((unsigned char)str[i]))
        {
            str[i] = toupper((unsigned char)str[i]);
        }
    }
}

/* Function to convert string to title case */
void titleCase(char str[])
{
    int i;
    int newWord = 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isspace((unsigned char)str[i]))
        {
            newWord = 1;
        }
        else if (newWord)
        {
            str[i] = toupper((unsigned char)str[i]);
            newWord = 0;
        }
        else
        {
            str[i] = tolower((unsigned char)str[i]);
        }
    }
}

/* Function to convert string to sentence case */
void sentenceCase(char str[])
{
    int i;
    int firstLetterFound = 0;

    /* First make the entire sentence lowercase */
    lowerCase(str);

    /* Make only the first alphabetic character uppercase */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)str[i]))
        {
            str[i] = toupper((unsigned char)str[i]);
            firstLetterFound = 1;
            break;
        }
    }

    (void)firstLetterFound;
}

/* Function to display the menu */
void displayMenu()
{
    printf("\n========== STRING CASE MENU ==========\n");
    printf("1. Upper Case\n");
    printf("2. Lower Case\n");
    printf("3. Toggle Case\n");
    printf("4. Title Case\n");
    printf("5. Sentence Case\n");
    printf("6. Exit\n");
    printf("======================================\n");
}

int main()
{
    char str[200];
    char temp[200];
    int choice;

    printf("===== STRING CASE CONVERTER =====\n\n");

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline added by fgets() */
    str[strcspn(str, "\n")] = '\0';

    do
    {
        displayMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        /* Remove remaining newline from input buffer */
        while (getchar() != '\n');

        /* Copy original string before modification */
        strcpy(temp, str);

        switch (choice)
        {
            case 1:
                upperCase(temp);
                printf("\nUpper Case    : %s\n", temp);
                break;

            case 2:
                lowerCase(temp);
                printf("\nLower Case    : %s\n", temp);
                break;

            case 3:
                toggleCase(temp);
                printf("\nToggle Case   : %s\n", temp);
                break;

            case 4:
                titleCase(temp);
                printf("\nTitle Case    : %s\n", temp);
                break;

            case 5:
                sentenceCase(temp);
                printf("\nSentence Case : %s\n", temp);
                break;

            case 6:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Please select 1-6.\n");
        }

    } while (choice != 6);

    return 0;
}

