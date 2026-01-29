#include <stdio.h>
int main()
{
    int n, i, rev = 0, rem, temp;
    printf("Enter the number:");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == temp)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
}