#include <stdio.h>
#define N 100
void matmul(int a[N][N], int b[N][N], int r1, int c1, int c2);
int main()
{
    int r1, c1, r2, c2, i, j;
    int a[N][N], b[N][N];
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 == r2)
    {
        printf("Matrix can be multiplied.\n");
        printf("Enter elements of first matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter element a%d%d: ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of second matrix:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("Enter element b%d%d: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }
        matmul(a, b, r1, c1, c2);
    }
    else
    {
        printf("Error: Matrices cannot be multiplied with given dimensions.\n");
    }
    return 0;
}

void matmul(int a[N][N], int b[N][N], int r1, int c1, int c2)
{
    int i, j, k;
    int c[N][N];
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
