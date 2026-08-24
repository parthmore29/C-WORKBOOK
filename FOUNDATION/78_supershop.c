#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    float price;
    int quantity;
};

void insertItem()
{
    FILE *fp;
    struct Item item;

    fp = fopen("shop.dat", "ab");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter item ID: ");
    scanf("%d", &item.id);

    printf("Enter item name: ");
    scanf(" %[^\n]", item.name);

    printf("Enter price: ");
    scanf("%f", &item.price);

    printf("Enter quantity: ");
    scanf("%d", &item.quantity);

    fwrite(&item, sizeof(item), 1, fp);

    fclose(fp);

    printf("Item added successfully!\n");
}

void showList()
{
    FILE *fp;
    struct Item item;

    fp = fopen("shop.dat", "rb");

    if (fp == NULL)
    {
        printf("No items found.\n");
        return;
    }

    printf("\n%-5s %-20s %-10s %-10s\n",
           "ID", "Name", "Price", "Quantity");

    while (fread(&item, sizeof(item), 1, fp) == 1)
    {
        printf("%-5d %-20s %-10.2f %-10d\n",
               item.id,
               item.name,
               item.price,
               item.quantity);
    }

    fclose(fp);
}

void updateItem()
{
    FILE *fp, *temp;
    struct Item item;
    int id, found = 0;

    fp = fopen("shop.dat", "rb");

    if (fp == NULL)
    {
        printf("No items found.\n");
        return;
    }

    temp = fopen("temp.dat", "wb");

    printf("Enter item ID to update: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp) == 1)
    {
        if (item.id == id)
        {
            found = 1;

            printf("Enter new name: ");
            scanf(" %[^\n]", item.name);

            printf("Enter new price: ");
            scanf("%f", &item.price);

            printf("Enter new quantity: ");
            scanf("%d", &item.quantity);
        }

        fwrite(&item, sizeof(item), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("shop.dat");
    rename("temp.dat", "shop.dat");

    if (found)
        printf("Item updated successfully!\n");
    else
        printf("Item not found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n------ SUPER SHOP ------\n");
        printf("1. Insert Item\n");
        printf("2. Update Item\n");
        printf("3. Show List\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertItem();
                break;

            case 2:
                updateItem();
                break;

            case 3:
                showList();
                break;

            case 4:
                printf("Exiting Super Shop...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}