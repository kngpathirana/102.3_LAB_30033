#include <stdio.h>
int main()
{
    int no,d,x=0;
    printf("Enter a number : ");
    scanf("%d",&no);

    do
    {
        d=no%10;
        x=(x*10)+d;
        no=no/10;
    }while(no!=0);

    printf("Reversed number is %d",x);
}
