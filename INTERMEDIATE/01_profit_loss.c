#include <stdio.h>

int main()
{
    int quantity;
    float costPrice, sellingPrice;
    float totalCost, totalSelling;
    float profit, loss;
    float percentage;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter cost price of one item: ");
    scanf("%f", &costPrice);

    printf("Enter selling price of one item: ");
    scanf("%f", &sellingPrice);

    totalCost = quantity * costPrice;
    totalSelling = quantity * sellingPrice;

    printf("\n----- BUSINESS REPORT -----\n");

    printf("Total Cost Price = %.2f\n", totalCost);
    printf("Total Selling Price = %.2f\n", totalSelling);

    if (totalSelling > totalCost)
    {
        profit = totalSelling - totalCost;
        percentage = (profit / totalCost) * 100;

        printf("\nResult: PROFIT\n");
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (totalCost > totalSelling)
    {
        loss = totalCost - totalSelling;
        percentage = (loss / totalCost) * 100;

        printf("\nResult: LOSS\n");
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else
    {
        printf("\nResult: NO PROFIT, NO LOSS\n");
    }

    return 0;
}