#include <stdio.h>

int main()
{
    int x, y, rev = 0, n, rem, temp;
    printf("This program checks if a number is a palindrome when x is greater than y,\n");
    printf("and checks if a number is even or odd when x is not greater than y\n");
    printf("Enter x and y:");
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        printf("Enter the number:");
        scanf("%d", &n);
        temp = n;
        while (n != 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        if (temp == rev)
            printf("The number %d is a palindrome and x is greater than y\n", temp);
        else
            printf("The number %d is not a palindrome and x is greater than y\n", temp);
    }
    else
    {
        printf("Enter the number:");
        scanf("%d", &n);
        if (n % 2 == 0)
            printf("The number %d is even and x is not greater than y\n", n);
        else
            printf("The number %d is odd and x is not greater than y\n", n);
    }
    return 0;
}