#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student
{
    int roll;
    char name[50];
    float marks1;
    float marks2;
    float marks3;
    float total;
    float percentage;
};

struct Student students[MAX];
int count = 0;

//function decleration//
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void calculateResult();
void displayTopper();
void sortByName();
void sortByPercentage();

void calculateStudentResult(int i)
{
    students[i].total =
        students[i].marks1 +
        students[i].marks2 +
        students[i].marks3;

    students[i].percentage =
        students[i].total / 3.0;
}

void addStudent()
{
    if (count >= MAX)
    {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[count].roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter marks in Subject 1: ");
    scanf("%f", &students[count].marks1);

    printf("Enter marks in Subject 2: ");
    scanf("%f", &students[count].marks2);

    printf("Enter marks in Subject 3: ");
    scanf("%f", &students[count].marks3);

    calculateStudentResult(count);

    count++;

    printf("\nStudent added successfully!\n");
}

void displayStudents()
{
    int i;

    if (count == 0)
    {
        printf("\nNo students available.\n");
        return;
    }
    printf("\n================= WHOLE CLASS ===================\n");
    printf("\n================ STUDENT RECORDS ================\n");

    for (i = 0; i < count; i++)
    {
        printf("\nRoll Number : %d", students[i].roll);
        printf("\nName        : %s", students[i].name);
        printf("\nSubject 1   : %.2f", students[i].marks1);
        printf("\nSubject 2   : %.2f", students[i].marks2);
        printf("\nSubject 3   : %.2f", students[i].marks3);
        printf("\nTotal       : %.2f", students[i].total);
        printf("\nPercentage  : %.2f%%", students[i].percentage);
        printf("\n--------------------------------------------------");
    }
}

void searchStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", students[i].roll);
            printf("Name        : %s\n", students[i].name);
            printf("Total       : %.2f\n", students[i].total);
            printf("Percentage  : %.2f%%\n", students[i].percentage);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }
}

void updateStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to update: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("\nEnter new name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Enter new marks in Subject 1: ");
            scanf("%f", &students[i].marks1);

            printf("Enter new marks in Subject 2: ");
            scanf("%f", &students[i].marks2);

            printf("Enter new marks in Subject 3: ");
            scanf("%f", &students[i].marks3);

            calculateStudentResult(i);

            printf("\nStudent details updated successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }
}

void deleteStudent()
{
    int roll, i, j, found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            for (j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            count--;

            printf("\nStudent deleted successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }
}

void calculateResult()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("\n========== RESULT ==========\n");
            printf("Name       : %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].roll);
            printf("Total      : %.2f / 300\n", students[i].total);
            printf("Percentage : %.2f%%\n", students[i].percentage);

            if (students[i].percentage >= 75)
                printf("Grade      : Distinction\n");
            else if (students[i].percentage >= 60)
                printf("Grade      : First Class\n");
            else if (students[i].percentage >= 50)
                printf("Grade      : Second Class\n");
            else if (students[i].percentage >= 35)
                printf("Grade      : Pass\n");
            else
                printf("Grade      : Fail\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }
}

void displayTopper()
{
    int i, topper;

    if (count == 0)
    {
        printf("\nNo students available.\n");
        return;
    }

    topper = 0;

    for (i = 1; i < count; i++)
    {
        if (students[i].percentage > students[topper].percentage)
        {
            topper = i;
        }
    }

    printf("\n=============== TOPPER ===============\n");
    printf("Roll Number : %d\n", students[topper].roll);
    printf("Name        : %s\n", students[topper].name);
    printf("Total       : %.2f / 300\n", students[topper].total);
    printf("Percentage  : %.2f%%\n", students[topper].percentage);
}

void sortByName()
{
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (strcmp(students[i].name, students[j].name) > 0)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents sorted alphabetically by name.\n");
}

void sortByPercentage()
{
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (students[i].percentage < students[j].percentage)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by percentage (highest first).\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n\n==============================================");
        printf("\n        STUDENT MANAGEMENT SYSTEM");
        printf("\n==============================================");

        printf("\n1. Add Student");
        printf("\n2. Display All Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Calculate Result");
        printf("\n7. Display Topper");
        printf("\n8. Sort by Name");
        printf("\n9. Sort by Percentage");
        printf("\n10. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                calculateResult();
                break;

            case 7:
                displayTopper();
                break;

            case 8:
                sortByName();
                break;

            case 9:
                sortByPercentage();
                break;

            case 10:
                printf("\nExiting Student Management System...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 10);

    return 0;
}
