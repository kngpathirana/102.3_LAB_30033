#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number :\n");
    scanf("%d",&no);

    switch(no%2)
    {
        case 0: printf("%d is a even number",no); break;
        case 1: printf("%d is a odd number",no); break;
        case -1: printf("%d is a odd number",no); break;
    }
}
