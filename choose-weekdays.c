#include <stdio.h>
int main()
{
    char choice;
    printf("Choose a day of the week (a/m/t/w/h/f/s): ");
    scanf("%s", &choice);
    switch (choice)
    {
    case 'a':
        printf("Sunday\n");
        break;
    case 'm':
        printf("Monday\n");
        break;
    case 't':
        printf("Tuesday\n");
        break;
    case 'w':
        printf("Wednesday\n");
        break;
    case 'h':
        printf("Thursday\n");
        break;
    case 'f':
        printf("Friday\n");
        break;
    case 's':
        printf("Saturday\n");
        break;
    default:
        printf("Invalid input\n");
    }
    return 0;
}