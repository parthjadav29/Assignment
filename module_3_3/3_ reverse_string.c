#include<stdio.h>
int reversesentence()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        reversesentence();
        printf("%c",c);
    }
}
void main()
{
    printf("\nenter any string: ");
    reversesentence();
    printf("\n");
}