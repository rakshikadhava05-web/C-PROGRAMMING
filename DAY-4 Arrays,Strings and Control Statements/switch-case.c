#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Sunday");
            break;

        case 2:
            printf("Monday");
            break;

        case 3:
            printf("Tuesday");
            break;

        default:
            printf("Invalid Input");
    }
}