#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int factorial_r(int r)
{
    if (r == 0 || r == 1)
        return 1;
    else
        return r * factorial_r(r - 1);
}
int binom(int n, int r)
{
    if (r > n)
    {
        // Binomial coefficient is undefined for r > n
        return 0;
    }
    else
    {
        // Calculate binomial coefficient C(n, r) or nCr
        int bin;
        bin = factorial(n) / (factorial_r(r) * factorial_r(n - r));
        return bin;
    }
}
int main()
{
    int r, n, result;
    printf("Enter the value of n and r: ");
    scanf("%d%d", &n, &r);
    result = binom(n, r);
    printf("The binomial coefficient C(%d, %d) is: %d\n", n, r, result);
    return 0;
}