#include <stdio.h>
int main()
{
int n1,n2,t;

printf("Enter Your First Number ");
scanf("%d",&n1);

printf("Enter Your Second Number ");
scanf("%d",&n2);

printf("Before Swap\n");
printf("First Number is %d\n",n1);
printf("Second Number is %d\n",n2);

t=n1;
n1=n2;
n2=t;

printf("After Swap\n");
printf("First Number is %d\n",n1);
printf("Second Number is %d\n",n2);

}
