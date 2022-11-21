#include<stdio.h>
void main(){
    int a,b,c,choice;

    printf("Enter value of a :");
    scanf("%d",&a);

    printf("Enter value of b :");
    scanf("%d",&b);

    printf("\nMenu driven");
    printf("\nEnter a 1 : Addition");
    printf("\nEnter a 2 : Subtraction");
    printf("\nEnter a 3 : Multiplication");
    printf("\nEnter a 4 : Division");
    printf("\nEnter you want : ");
    scanf("%d",&choice);
    printf("your entered number is :%d",choice);

    switch (choice)
    {
    case 1: c=a+b;
        printf("\nResult of addition : %d",c);
        break;

    case 2: c=a-b;
        printf("\nResult of subtraction : %d",c);
        break;

    case 3: c=a*b;
        printf("\nResult of multiplication : %d",c);
        break;

    case 4: c=a/b;
        printf("nResult of division : %d",c);
        break;
    
    default:
        printf("\nInvaliad choice");
        
    }
}