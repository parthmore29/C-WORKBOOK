#include <stdio.h>

int main()
{
    float km, meters, centimeters, inches;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    centimeters = km * 100000;
    inches = km * 39370.0787;

    printf("\nDistance in meters      : %.2f m\n", meters);
    printf("Distance in centimeters : %.2f cm\n", centimeters);
    printf("Distance in inches      : %.2f inches\n", inches);

    return 0;
}