#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d\n", n, fact);
    return 0;
}