#include <stdio.h>
#define N 100
int main()
{
    int r1, c1, r2, c2, i, j;
    int a[N][N], b[N][N], c[N][N];
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != c2 || r1 != r2)
    {
        printf("Error: Matrices dimensions do not match for addition!\n");
        return 1;
    }
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}