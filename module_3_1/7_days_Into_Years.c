#include<stdio.h>
void main()
{
    int days;
    int years;
    int cnt_years,cnt_days;
    
    printf("enter number of days:");
    scanf("%d", &days);
    cnt_years=days/365;
    printf("years:%d",cnt_years);
    
    printf("\nenter number of years:");
    scanf("%d",&years);
    cnt_days=years*365;
    printf("day:%d",cnt_days);

    printf("\n");
}