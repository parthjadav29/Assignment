#include<stdio.h>
void main()
{
    int a;
    printf("enter year:");
    scanf("%d",&a);
    if(a%4 == 0 && a%100==0)
    {
        printf("A Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}