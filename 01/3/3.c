#include <stdio.h>
int main()
{
int n1,n2;
float f1,f2;
double d1,d2;
char c1[45],c2[34];

printf("Enter the two values I: ");
scanf("%d %d",&n1,&n2);

printf("Enter the two values F: ");
scanf("%f %f",&f1,&f2);

printf("Enter the two values D: ");
scanf("%lf %lf",&d1,&d2);

printf("Enter the two values C: ");
scanf("%s %s",&c1,&c2);

printf("%d\n",n1);
printf("%d\n",n2);
printf("%f\n",f1);
printf("%f\n",f2);
printf("%f\n",d1);
printf("%f\n",d2);
printf("%s\n",c1);
printf("%s\n",c2);

}
