#include <stdio.h>
#include <string.h>

#define MAX_USERS 50

struct User
{
    char username[30];
    char password[50];
};

int registerUser(struct User users[], int *count)
{
    int i;

    if (*count >= MAX_USERS)
    {
        printf("\nUser limit reached.\n");
        return 0;
    }

    printf("\nEnter username: ");
    scanf("%29s", users[*count].username);

    /* Check whether username already exists */
    for (i = 0; i < *count; i++)
    {
        if (strcmp(users[i].username, users[*count].username) == 0)
        {
            printf("Username already exists.\n");
            return 0;
        }
    }

    printf("Enter password: ");
    scanf("%49s", users[*count].password);

    (*count)++;

    printf("\nRegistration successful!\n");

    return 1;
}

void loginUser(struct User users[], int count)
{
    char username[30];
    char password[50];
    int i;
    int found = 0;

    printf("\nEnter username: ");
    scanf("%29s", username);

    printf("Enter password: ");
    scanf("%49s", password);

    for (i = 0; i < count; i++)
    {
        if (strcmp(users[i].username, username) == 0 &&
            strcmp(users[i].password, password) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("\nLogin successful! Welcome, %s.\n", username);
    else
        printf("\nInvalid username or password.\n");
}

void displayUsers(struct User users[], int count)
{
    int i;

    printf("\n---------- REGISTERED USERS ----------\n");

    if (count == 0)
    {
        printf("No users registered.\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, users[i].username);
    }
}

int main()
{
    struct User users[MAX_USERS];
    int count = 0;
    int choice;

    do
    {
        printf("\n====================================\n");
        printf("          LOGIN SYSTEM\n");
        printf("====================================\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Display Users\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                registerUser(users, &count);
                break;

            case 2:
                loginUser(users, count);
                break;

            case 3:
                displayUsers(users, count);
                break;

            case 4:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}