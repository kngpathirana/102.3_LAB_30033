#include <stdio.h>
int main()
{
    int n1,n2,x;
    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);

        x=n1%n2;
    if(x==0)
        printf("%d is a multiple of the %d\n",n1,n2);
    else
        printf("%d is a not multiple of the %d\n",n1,n2);
}
