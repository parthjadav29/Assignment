#include<stdio.h>
int multiplynumber(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return(n*multiplynumber(n-1));
}
void main()
{
    int no;
    printf("enter number: ");
    scanf("%d",&no);
    printf("multiplynumber: %d",multiplynumber(no));
    printf("\n");

}