#include <stdio.h>
int main()
{
    int arr[10],i;
//Input the values
    for(i=1;i<=10;i++)
        {
            printf("Enter the %d value - ",i);
            scanf("%d",&arr[i]);
        }
//minimum value
    int min=arr[1];
    for(i=1;i<=10;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Minimum value is %d\n",min);

//maximum value
    int max=arr[1];
    for(i=1;i<=10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("Maximum value is %d\n",max);

//average value
    int tot=0,avg;
    for(i=1;i<=10;i++)
    {
        tot=tot+arr[i];
    }
    avg=tot/10;
    printf("Average is %d\n",avg);

//reverse order of values
    for(i=10;i>=1;i--)
    {
        printf("Element %d contains - %d\n",i,arr[i]);
    }
}
