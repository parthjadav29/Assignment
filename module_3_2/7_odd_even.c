#include<stdio.h>
void main()
{
    int i,a;
    int count_even=0;
    int count_odd=0;
    int sum_even=0;
    int sum_odd=0;

    printf("enter value");
    scanf("%d",&a);

    for(i = 1; i <= a; i++)
    {
        if(i % 2 == 0)
        {
            // count_even = count_even + 1;
            count_even++;

            sum_even=sum_even+i;
        }
        else
        {
            // count_odd = count_odd+1;
            count_odd++;

            sum_odd=sum_odd+i;
        }
    }
    
    printf("count even number:%d",count_even);
    printf("\ncount odd number:%d",count_odd);
    printf("\n sum even number:%d",sum_even);
    printf("\n sum odd number:%d",sum_odd);
    printf("\n");


}