#include <stdio.h>

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

int main()
{
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("a.dat", "wb");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter name: ");
        scanf(" %[^\n]", s.name);

        printf("Enter marks of 3 subjects: ");
        scanf("%f %f %f", &s.marks1, &s.marks2, &s.marks3);

        printf("\n-----------------------------------------");

        s.total = s.marks1 + s.marks2 + s.marks3;
        s.percentage = s.total / 3;

        fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);

    fp = fopen("a.dat", "rb");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\n------ MARKSHEETS ------\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("\nRoll Number: %d", s.roll);
        printf("\nName: %s", s.name);
        printf("\nMarks: %.2f %.2f %.2f",
               s.marks1, s.marks2, s.marks3);
        printf("\nTotal: %.2f", s.total);
        printf("\nPercentage: %.2f%%\n", s.percentage);
        printf("\n--------------------------------------------");
    }

    fclose(fp);

    return 0;
}