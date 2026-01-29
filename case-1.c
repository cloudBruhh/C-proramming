#include <stdio.h>
int main()
{
    int choice;
    printf("Enter a choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("You selected option 1\n");
        int n, i;
        printf("Enter a number: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            printf(" 8 x %d = %d\n", i, 8 * i);
        }
        break;
    }
    case 2:
    {
        printf("You selected option 2\n");
        int m, n, x, i, sum = 0, count = 0;
        float avg;
        printf("Enter the value of m and n: ");
        scanf("%d%d", &m, &n);
        printf("Enter the value of x: ");
        scanf("%d", &x);
        for (i = m; i <= n; i++)
        {
            if (i % x == 0)
            {
                sum += i;
                count++;
            }
        }
        avg = (float)sum / count;
        printf("Sum = %d, Average = %.2f\n", sum, avg);
    }
    break;

    case 3:
    {
        printf("You selected option 3\n");
        int num, count = 0;
        float sum = 0.0, avg;
        printf("Enter numbers (enter 0 to stop):\n");
        while (1)
        {
            scanf("%d", &num);
            if (num == 0)
                break;
            sum += num;
            count++;
        }
        if (count > 0)
        {
            avg = sum / count;
            printf("Sum = %.2f, ", sum);
            printf("Average = %.2f\n", avg);
        }
        break;
    }
    default:
        printf("Invalid choice!\n");
    }
}
