#include <stdio.h>
#define N 100
int main()
{
    int i = 0, j, temp, a;
    int arr[N];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        printf("Enter elements of array %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Sorting the array in ascending order using Bubble Sort
    for (i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}