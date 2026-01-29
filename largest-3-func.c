#include <stdio.h>
int large(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int main()
{
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    result = large(a, b, c);
    printf("The largest number is: %d\n", result);
    return 0;
}
