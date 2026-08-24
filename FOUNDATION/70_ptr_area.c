#include <stdio.h>

void calculate(float *length, float *breadth)
{
    float area, perimeter;

    area = (*length) * (*breadth);
    perimeter = 2 * (*length + *breadth);

    printf("\nArea = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
}

int main()
{
    float length, breadth;

    printf("Enter length(in feet): ");
    scanf("%f", &length);

    printf("\n-------------------------");

    printf("\nEnter breadth(in feet): ");
    scanf("%f", &breadth);

    printf("\n-------------------------");

    calculate(&length, &breadth);

    return 0;
}