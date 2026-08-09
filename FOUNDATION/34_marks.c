#include <stdio.h>

int main()
{
    int marks[4][3];
    int total[4];
    float percentage[4];
    int i, j;

    printf("====================================\n");
    printf("       STUDENT MARKSHEET\n");
    printf("====================================\n");

    for(i = 0; i < 4; i++)
    {
        total[i] = 0;

        printf("\nEnter marks for Student %d:\n", i + 1);

        for(j = 0; j < 3; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);

            total[i] = total[i] + marks[i][j];
        }

        percentage[i] = total[i] / 3.0;
    }

    printf("\n\n____________________________________\n");
    printf("              RESULT\n");
    printf("____________________________________\n");

    for(i = 0; i < 4; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Subject 1 = %d\n", marks[i][0]);
        printf("Subject 2 = %d\n", marks[i][1]);
        printf("Subject 3 = %d\n", marks[i][2]);

        printf("Total = %d / 300\n", total[i]);
        printf("Percentage = %.2f%%\n", percentage[i]);

        if(percentage[i] >= 75)
            printf("Class = Distinction\n");
        else if(percentage[i] >= 60)
            printf("Class = First Class\n");
        else if(percentage[i] >= 50)
            printf("Class = Second Class\n");
        else if(percentage[i] >= 40)
            printf("Class = Pass Class\n");
        else
            printf("Class = Fail\n");
    }

    printf("\n____________________________________\n");
    printf("       MARKSHEET COMPLETED\n");
    printf("____________________________________\n");

    return 0;
}