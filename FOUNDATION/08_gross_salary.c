#include<stdio.h>
int main()
{
    float basic_salary, gross_salary, hra, da;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

  
        hra = 0.40 * basic_salary;
        da = 0.20 * basic_salary;
   
        gross_salary = basic_salary + hra + da;

        printf("\nBasic Salary : %.2f\n", basic_salary);
        printf("DA : (20%%) : %.2f\n", da);
        printf("HRA : (40%%) : %.2f\n", hra);
        printf("Gross Salary : %.2f\n", gross_salary);

        return 0;
}