#include <stdio.h>

int main ()

{
    int mn;

    printf("Enter month number : ");
    scanf("%d",&mn);

    switch(mn)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d has 31 days",mn);
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d has 30 days",mn);
        break;

    case 2:
        printf("%d has 28 days",mn);
        break;

    default:
        printf("Invalid month number");
        break;
    }
}
