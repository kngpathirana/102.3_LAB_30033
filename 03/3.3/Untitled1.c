#include <stdio.h>
int main()
{
    char name[100];
    int bs,ns,in;

    printf("Enter employee name : ");
    scanf("%s",&name);
    printf("Enter basic salary : ");
    scanf("%d",&bs);

    if(bs<5000)
        in=(bs*5)/100;
    else if (bs<=10000)
        in=(bs*10)/100;
    else
        in=(bs*15)/100;

    ns=bs+in;
    printf("Employee name is %s \n",name);
    printf("Basic salary is %d \n",bs);
    printf("New salary is %d \n",ns);
}
