#include <stdio.h>

int main()
{
    int i;
    float mark1, mark2, mark3, total, percentage;

    for (i = 1; i <= 4; i++)
    {
        printf("\n--- Student %d ---\n", i);

        printf("Enter marks of Subject 1: ");
        scanf("%f", &mark1);

        printf("Enter marks of Subject 2: ");
        scanf("%f", &mark2);

        printf("Enter marks of Subject 3: ");
        scanf("%f", &mark3);

        total = mark1 + mark2 + mark3;
        percentage = total / 3;

        printf("\nMarks: %.0f, %.0f, %.0f\n",
               mark1, mark2, mark3);
        printf("Total Marks: %.0f/300\n", total);
        printf("Percentage: %.2f%%\n", percentage);

        if (percentage >= 75)
            printf("Class: Distinction\n");
        else if (percentage >= 60)
            printf("Class: First Class\n");
        else if (percentage >= 50)
            printf("Class: Second Class\n");
        else if (percentage >= 35)
            printf("Class: Pass Class\n");
        else
            printf("Class: Fail\n");
    }

    return 0;
}