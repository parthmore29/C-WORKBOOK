//A C program to check the strength of a password 
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char password[100];
    int length;
    int upper =0, lower =0, digit =0, special =0;
    int score= 0;
    int i;

    printf("=================================\n");
    printf("     Password Strength Checker     \n");
    printf("=================================\n");
    printf("Enter your Password here :  ");
    fgets(password, sizeof(password), stdin);
    /*Remove newline added by fgets */
    password[strcspn(password, "\n")] = 0; // Remove newline character if present
    length = strlen(password);
    /*check each character*/
    for(i = 0; i < length; i++)
    {
        if(isupper(password[i]))
            upper=1;
        else if(islower(password[i]))
            lower=1;
        else if(isdigit(password[i]))
            digit=1;
        else
            special =1;
    }
    /*Calculate Score*/
    if (length >= 8)
        score++;
        if(length >= 12)
            score++;
        if(upper)
            score++;
            if(lower)
                score++;
            if (digit)
                score++;
            if (special)
                score++;
    printf("\n=============ANALYSIS====================\n");
    printf("Length : %d\n", length);
    printf("Uppercase : %s\n", upper ? "Yes" : "No");
    printf("Lowercase : %s\n", lower ? "Yes" : "No");
    printf("Digit : %s\n", digit ? "Yes" : "No");
    printf("Special Character : %s\n", special ? "Yes" : "No");
    
    printf("\nScore : %d/6\n", score);
    if(score <= 2)
        printf("YOUR PASSWORD IS WEAK\n");
    else if(score <= 4)
        printf("YOUR PASSWORD IS MODERATE\n");
    else
        printf("YOUR PASSWORD IS STRONG\n");
          printf("\nSuggestions:\n");

    if (length < 8)
        printf("- Use at least 8 characters.\n");

    if (!upper)
        printf("- Add an uppercase letter.\n");

    if (!lower)
        printf("- Add a lowercase letter.\n");

    if (!digit)
        printf("- Add a number.\n");

    if (!special)
        printf("- Add a special character.\n");

    if (length >= 12 && upper && lower && digit && special)
        printf("- Good combination of length and character types!\n");

    return 0;
}
