#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, avg;
    printf("Enter the marks in 4 subjects:");
    scanf("%f%f%f%f", &m1, &m2, &m3, &m4);
    avg = (m1 + m2 + m3 + m4) / 4;
    printf("Average marks is %f \n", avg);
    if (avg >= 90 && avg <= 80)
    {
        printf("Distinction");
    }
    else if (avg >= 80)
    {
        printf("first division");
    }
    else if (avg <= 70)
    {
        printf("second division");
    }
    else if (avg <= 60)
    {
        printf("third division");
    }
    else
    {
        printf("fail");
    }
    return 0;
}