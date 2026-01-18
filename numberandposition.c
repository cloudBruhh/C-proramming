#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int largest, smallest;
    int largePos, smallPos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];
    largePos = smallPos = 1;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largePos = i + 1;
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallPos = i + 1;
        }
    }

    printf("Largest number = %d at position %d\n", largest, largePos);
    printf("Smallest number = %d at position %d\n", smallest, smallPos);

    return 0;
}