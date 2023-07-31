#include <stdio.h>
int main ()
{
int s;
float n1,n2,ans;

printf("Menu\n");
printf("1 - (+)\n");
printf("2 - (-)\n");
printf("3 - (/)\n");
printf("4 - (*)\n");
printf("Select the desired operator : ");
scanf("%d",&s);

switch (s)
{
case 1:
    printf("Enter your first number :");
    scanf("%f",&n1);
    printf("Enter your second number :");
    scanf("%f",&n2);
    ans=n1+n2;
    printf("Outcome is %f\n",ans);
    break;

case 2:
    printf("Enter your first number :");
    scanf("%f",&n1);
    printf("Enter your second number :");
    scanf("%f",&n2);
    ans=n1-n2;
    printf("Outcome is %f",ans);
    break;

case 3:
    printf("Enter your first number :");
    scanf("%f",&n1);
    printf("Enter your second number :");
    scanf("%f",&n2);
    if(n2!=0)
        {
        ans=n1/n2;
        printf("Outcome is %f",ans);
        }
    else
        printf("Error\n");
    break;

case 4:
    printf("Enter your first number :");
    scanf("%f",&n1);
    printf("Enter your second number :");
    scanf("%f",&n2);
    ans=n1*n2;
    printf("Outcome is %f",ans);
    break;
}
}
