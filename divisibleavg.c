#include <stdio.h>
int main()
{
    int n, i, x, y, sum = 0, count = 0, avg;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements of the divisor:");
    scanf("%d%d", &x, &y);
    if (n % x == 0 && n % y != 0)
    {
        for (i = 0; i <= n; i++)
        {
            sum = sum + i;
            count++;
        }
    }
    if (count > 0)
    {
        avg = sum / count;
        printf("The sum of the numbers divisible by %d and not ndivisible by %d is: %d\n", x, y, sum);
        printf("The average of numbers divisible by %d and %d is: %d\n", x, y, avg);
    }
    else
    {
        printf("The number of elements is not divisible by %d and %d\n", x, y);
    }
}