#include <stdio.h>

int main()
{
    char name[50], address[100], qualification[50];
    int age;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your address: ");
    scanf(" %[^\n]", address);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your qualification: ");
    scanf(" %[^\n]", qualification);

    printf("\n--- Personal Details ---\n");
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("Age: %d\n", age);
    printf("Qualification: %s\n", qualification);

    return 0;
}