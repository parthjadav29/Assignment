#include<stdio.h>
void main()
{
    int p;
    float r=7.40;
    int t=5;

    printf("enter principal amount");
    scanf("%d",&p);
    printf("\nyour interest is :%.2f",(p*t*r)/100);
    printf("\nyour maturity amount is:%.2f",(p*t*r)/100+p);
    printf("\n");

}