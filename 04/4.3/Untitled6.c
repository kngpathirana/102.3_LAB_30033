#include <stdio.h>
int main ()
{
int c;
float r,ans;

printf("Menu\n");
printf("1 - circumference of a circle\n");
printf("2 - area of a circle\n");
printf("3 - volume of a sphere\n");

printf("Enter your choice: ");
scanf("%d",&c);

switch (c)
{
case 1:
    printf("Enter radius :");
    scanf("%f",&r);
    ans=2*3.141592653589793238*r;
    printf("Outcome is %f\n",ans);
    break;

case 2:
    printf("Enter radius :");
    scanf("%f",&r);
    ans=3.141592653589793238*r*r;
    printf("Outcome is %f\n",ans);
    break;

case 3:
    printf("Enter radius :");
    scanf("%f",&r);
    ans=(4*3.141592653589793238*r*r*r)/3;
    printf("Outcome is %f\n",ans);
    break;
}
}
