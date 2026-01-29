#include <stdio.h>
int main()
{
    int n, i = 1, j = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Pattern:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}