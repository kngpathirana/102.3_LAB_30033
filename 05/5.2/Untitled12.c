#include <stdio.h>
int main ()
{
    int x=1,m,tot=0;
    float avg;
    while(x<=10)
        {
            printf("Enter marks : ");
            scanf("%d",&m);
            x++;
            tot=tot+m;
        }
    printf("Total Marks is %d \n",tot);

    avg=tot/10;
    if(avg<50)
        printf("Fail!");
    else
        printf("Pass!");
}
