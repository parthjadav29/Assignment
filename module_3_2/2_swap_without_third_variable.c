#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter valur of b :");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("after swaping  value a=%d,\n after value b=%d",a,b);
    printf("\n");
}