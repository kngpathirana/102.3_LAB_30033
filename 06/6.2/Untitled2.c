#include <stdio.h>
int main()
{
    int e1,e2;
    printf("Enter size of first array ??\n");
    scanf("%d",&e1);
    printf("Enter size of second array ??\n");
    scanf("%d",&e2);

    int i,arr1[e1],sum1=0;
    for(i=1;i<=e1;i++)
    {
        printf("Enter %d value - ",i);
        scanf("%d",&arr1[i]);
        sum1=sum1+arr1[i];
    }
    printf("Scalar sum of first array %d\n",sum1);


    int j,arr2[e2],sum2=0;
    for(j=1;j<=e2;j++)
    {
        printf("Enter %d value - ",j);
        scanf("%d",&arr2[j]);
        sum2=sum2+arr2[j];
    }
    printf("Scalar sum of second array %d\n",sum2);

    //vector sum
     int e3 = e1 > e2 ? e1 : e2;
     printf("vector size = %d",e3);

    for(i=0;i<e3;i++)
    {
        arr3[]
        printf("")
    }


}
