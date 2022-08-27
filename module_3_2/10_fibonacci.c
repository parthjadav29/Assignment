#include<stdio.h>
void main()
{
    int fibo;
    int i=1;
    int x=0;
    int y=1;

    printf("%d %d",x,y);
    
    for(int i=1;i<=5;i++)
    {
        fibo = x+y;
               x=y;
               y=fibo;
               printf("\t %d", fibo);
              
    }
    printf("\n");
}