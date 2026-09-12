#include <stdio.h>

struct Item
{
    char name[50];
    int quantity;
    float price;
    float total;
};

int main()
{
    struct Item items[20];
    int n, i;
    float subtotal = 0;
    float tax, grandTotal;

    printf("==============================================\n");
    printf("              INVOICE GENERATOR\n");
    printf("==============================================\n");

    printf("\nEnter number of items: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20)
    {
        printf("Invalid number of items.\n");
        return 0;
    }

    /* Input item details */
    for (i = 0; i < n; i++)
    {
        printf("\nItem %d\n", i + 1);

        printf("Enter item name: ");
        scanf(" %49[^\n]", items[i].name);

        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Enter price per item: ");
        scanf("%f", &items[i].price);

        items[i].total = items[i].quantity * items[i].price;
        subtotal += items[i].total;
    }

    /* Calculate tax */
    tax = subtotal * 0.18f;
    grandTotal = subtotal + tax;

    /* Display invoice */
    printf("\n\n==============================================\n");
    printf("                    INVOICE\n");
    printf("==============================================\n");

    printf("%-20s %-8s %-10s %-10s\n",
           "Item", "Qty", "Price", "Total");

    printf("----------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-20s %-8d %-10.2f %-10.2f\n",
               items[i].name,
               items[i].quantity,
               items[i].price,
               items[i].total);
    }

    printf("----------------------------------------------\n");
    printf("%-30s %.2f\n", "Subtotal:", subtotal);
    printf("%-30s %.2f\n", "GST (18%):", tax);
    printf("%-30s %.2f\n", "Grand Total:", grandTotal);

    printf("==============================================\n");
    printf("             Thank you for shopping!\n");
    printf("==============================================\n");

    return 0;
}