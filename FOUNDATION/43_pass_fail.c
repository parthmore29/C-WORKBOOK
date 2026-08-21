#include <stdio.h>

int main()
{
    float subject1, subject2, total, percentage;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("\nStudent %d\n", i);

        printf("Enter marks in Subject 1: ");
        scanf("%f", &subject1);

        printf("Enter marks in Subject 2: ");
        scanf("%f", &subject2);

        total = subject1 + subject2;
        percentage = total / 2;

        printf("Percentage = %.2f%%\n", percentage);

        if (subject1 >= 35 && subject2 >= 35)
            printf("Result = PASS\n");
        else
            printf("Result = FAIL\n");
    }

    return 0;
}