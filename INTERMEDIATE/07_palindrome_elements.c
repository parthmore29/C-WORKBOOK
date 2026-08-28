#include <stdio.h>

int isPalindrome(int n)
{
    int original, reverse = 0, digit;

    original = n;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return reverse == (original < 0 ? -original : original);
}

int main()
{
    int a[100], n, i, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nPalindrome elements are:\n");

    for (i = 0; i < n; i++)
    {
        if (isPalindrome(a[i]))
        {
            printf("%d ", a[i]);
            count++;
        }
    }

    printf("\n\nNumber of palindrome elements = %d\n", count);

    return 0;
}