#include<stdio.h>
void main()
{
    int a[100], b[100],temp;
    
    printf("enter value for assending: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("assending order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }

    printf("\nenter value for desending: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(b[i] < b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    
    }
    printf("desending order: ");
    for(int i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }printf("\n");

}