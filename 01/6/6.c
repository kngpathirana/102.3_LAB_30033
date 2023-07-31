#include <stdio.h>
int main()
{
char name[15];
int byear,age;

printf("Enter Your Name : ");
scanf("%s",&name);

printf("Enter Your Birth Year : ");
scanf("%d",&byear);

age=2023-byear;

printf("Your Name is %s\n",name);
printf("Your Age is %d",age);
}
