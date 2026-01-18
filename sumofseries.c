// Sum of series of 1 by n (1 + 1/2 + 1/3 + ... + 1/n) aka harmonic series.
#include <stdio.h>
int main()
{
    int n;
    float i, sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The series is: ");
    for (i = 1; i <= n; i++)
    {
        sum += 1 / i;
        printf("1/%.2f", i);
        if (i < n)
            printf(" + ");
    }
    printf("\n");
    printf("Sum of the series is: %.2f\n", sum);

    return 0;
}