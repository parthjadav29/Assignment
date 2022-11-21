#include<stdio.h>
void main()
{
    int a,b,c,choice;

    printf("enter value a");
    scanf("%d",&a);
    printf("enter value b");
    scanf("%d",&b);

    printf("\nmenu driven");
    printf("\nenter 1 addision:");
    printf("\nenter 2 substraction");
    printf("\nenter 3 multiplication");
    printf("\nenter 4 divison");
    printf("\nenter you want");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: c=a+b;
        printf("\nadditoin is  %d",c);
        break;

        case 2: c=a-b;
        printf("\nsubtraction is %d",c);
        break;

        case 3: c=a*b;
        printf("\nmultiplication is %d",c);
        break;

        case 4: c=a/b;
        printf("\ndivision is %d",c);
        break;

        default:
        printf("\ninvalid choice");

    }
    printf("\n");
}
