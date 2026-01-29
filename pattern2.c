#include <stdio.h>
int main()
{
    int n = 10, i, j;
    printf("Pattern:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d \t", n);
            n = n + 10;
        }
        printf("\n");
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d \t", n);
            n = n + 10;
        }
        printf("\n");
    }
    return 0;
}