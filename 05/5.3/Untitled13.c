#include <stdio.h>
int main ()
{
    int i=1,no,fact=1;
    printf("Enter a number : ");
    scanf("%d",&no);

    if(no>0)
    {
        while(i<=no)
        {
            fact=fact*i;
            i++;
        }
    }
    else
    {
    printf("Error");
    }
    printf("factorial of %d is",fact);
}
