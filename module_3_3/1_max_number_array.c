#include<stdio.h>
int max(int a,int b);
void main(){
    int a,b,c;
    printf("Enter 1 number :");
    scanf("%d",&a);

    printf("Enter 2 number :");
    scanf("%d",&b);

    c = max(a, b);
    printf("max (%d, %d)= %d",a,b,c);

}
int max(int a,int b){
    if (a>b)
    {
        return a;
    }
    else
        return b;
    
}