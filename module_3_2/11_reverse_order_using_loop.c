#include<stdio.h>
void main()
{
    int x=64728, rev;
    while (x!=0)
    {
        rev=x%10;
        x=x/10;
        printf("%d",rev);
        
    }printf("\n");
}