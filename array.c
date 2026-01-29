#include <stdio.h>
#define N 100
int main()
{
    int n, i;
    int arr[N];
    printf("Enter the terms:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter elements of array %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}