#include <stdio.h>
int main()
{
    int n, i = 1, j = 1, sum_sq = 0, sum_cube = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum_sq += i * i;
        sum_cube += i * i * i;
    }
    printf("Sum of squares of first %d natural numbers is: %d\n", n, sum_sq);
    printf("Sum of cubes of first %d natural numbers is: %d\n", n, sum_cube);
    return 0;
}