#include<stdio.h>
void main()
{
    int fact=1;
    for(int i=1;i<=5;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial number is :%d",fact);
    printf("\n");
}