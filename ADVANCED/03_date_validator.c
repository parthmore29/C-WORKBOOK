#include <stdio.h>

// Function to check whether a year is a leap year 
int isLeapYear(int year)
{
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    return 0;
}

// Function to return the number of days in a month 
int daysInMonth(int month, int year)
{
    switch (month)
    {
        case 1:
            return 31;

        case 2:
            if (isLeapYear(year))
                return 29;
            else
                return 28;

        case 3:
            return 31;

        case 4:
            return 30;

        case 5:
            return 31;

        case 6:
            return 30;

        case 7:
            return 31;

        case 8:
            return 31;

        case 9:
            return 30;

        case 10:
            return 31;

        case 11:
            return 30;

        case 12:
            return 31;

        default:
            return 0;
    }
}

// Function to print the month name
void printMonthName(int month)
{
    char *months[] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    printf("%s", months[month - 1]);
}

int main()
{
    int day, month, year;
    int maxDays;

    printf("===== DATE VALIDATOR =====\n\n");

    while (1)
    {
        printf("Enter day   : ");
        scanf("%d", &day);

        printf("Enter month : ");
        scanf("%d", &month);

        printf("Enter year  : ");
        scanf("%d", &year);

        // Check whether month is valid 
        if (month < 1 || month > 12)
        {
            printf("\nInvalid month!\n");
            printf("Please enter the date again.\n\n");
            continue;
        }

        // Find maximum days for the given month
        maxDays = daysInMonth(month, year);

        /* Check whether day is valid */
        if (day < 1 || day > maxDays)
        {
            printf("\nInvalid day for the given month/year!\n");
            printf("Please enter the date again.\n\n");
            continue;
        }

        // If we reach here, the complete date is valid
        break;
    }

    printf("\nValid Date!\n");
    printf("Date: ");

    // Print day in two-digit format
    printf("%02d-", day);

    // Print month name 
    printMonthName(month);

    printf("-%04d\n", year);

    return 0;
}

