#include <stdio.h>
int main()
{
    int no,d,sum=0;

    printf("Enter a number : ");
    scanf("%d",&no);

    while(no>0)
    {
        d=no%10;
        sum=sum+d;
        no=no/10;
    }
    printf("%d is sum of all digit",sum);
}
