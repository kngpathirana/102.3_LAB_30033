#include <stdio.h>
int main()
{
    int n1,n2,n3,max,min;
    printf("Enter three integer numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2)
        if(n1>n3)
            max=n1;
        else
            max=n3;
    else if(n2>n3)
        max=n2;
    else
        max=n3;
    printf("Largest Number is %d \n",max);

    if(n1<n2)
        if(n1<n3)
            min=n1;
        else
            min=n3;
    else if(n2<n3)
        min=n2;
    else
        min=n3;
    printf("Smallest Value is %d",min);
}
