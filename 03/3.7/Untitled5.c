#include <stdio.h>
int main()
{
    int bs,wy,bsa,wca,ms,msr,mst,tot;
    char wc;

    printf("Enter Monthly Basic Salary\n");
    scanf("%d",&bs);

    printf("How long is the service ?\n");
    scanf("%d",&wy);
    if(wy>5)
        bsa=(bs*10)/100;
    else
        bsa=0;

    printf("What city do work in ? (C for Colombo)\n");
    scanf("%ch",&wc);
    if(wc=='C')
        wca=2500;
    else
        wca=0;

    printf("Monthly Sales ?\n");
    scanf("%d",&ms);
    if(ms<25000)
        msr=10;
    else if(ms<50000)
        msr=12;
    else
        msr=15;
    mst=(ms*msr)/100;

    tot=bs+bsa+wca+mst;

}
