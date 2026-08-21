#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    float angle[5], sine[5], cosine[5];
    int i;

    printf("Enter 5 angles in degrees:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%f", &angle[i]);

        sine[i] = sin(angle[i] * PI / 180);
        cosine[i] = cos(angle[i] * PI / 180);
    }

    printf("\nAngle\tSine\tCosine\n");

    for (i = 0; i < 5; i++)
    {
        printf("%.2f\t%.2f\t%.2f\n",
               angle[i], sine[i], cosine[i]);
    }

    return 0;
}