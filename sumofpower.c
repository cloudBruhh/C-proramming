// This program prints sum of a series of real numbers with power to the 4th
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += pow(i, 4);
    }
    printf("Sum of the series is: %d\n", sum);
    return 0;
}