#include <stdio.h>
int main ()
{
    int b,ex,ans;

    printf("Enter the base value : ");
    scanf("%d",&b);

    printf("Enter the exponent : ");
    scanf("%d",&ex);

    while(ex!=0)
    {
        ans=b*b;
        --ex;
    }
    printf("Answer is a %d",ans);
}
