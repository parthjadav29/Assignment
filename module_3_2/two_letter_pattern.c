#include<stdio.h>
void main()
{
    char ch='A';
    int total;
   
    for(int i=1;i<=5;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            total=ch+j-1;
            printf("%c",total);
        } printf("\n");  
            
    }

}
