#include<stdio.h>
void main()
{
    int i=0;
    int j=1;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2!=0);
        }printf("\n");
    }
    
}