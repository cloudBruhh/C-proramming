// fibonacci series using iteration
#include <stdio.h>
int main()
{
    int n, i;
    long long a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}