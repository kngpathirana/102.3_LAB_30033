#include <stdio.h>
int main()
{
    float r,d,c,a;

    printf("Enter a radius : ");
    scanf("%f",&r);

    d=r*2;
    c=2*3.14159*r;
    a=3.14159*r*r;

    printf("Diameter is %f \n",d);
    printf("Circumference is %f \n",c);
    printf("Area is %f \n",a);
}
