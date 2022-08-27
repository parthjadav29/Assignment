#include<stdio.h>
void main()
{
    int a,b,c,d,sum,sumFl;
    printf("enter four value");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    sum=a+b+c+d;
    printf("total summation:%d",sum);
    sumFl = a+d;
    printf("\n summation first & last digit:%d",sumFl);
    printf("\n");
}