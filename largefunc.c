#include <stdio.h>
int large(int, int);
int main()
{
    int n1, n2, thulo;
    printf("Enter the first number:");
    scanf("%d", &n1);
    printf("Enter the second number:");
    scanf("%d", &n2);
    thulo = large(n1, n2);
    printf("The largest number is: %d\n", thulo);
    return 0;
}
int large(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}