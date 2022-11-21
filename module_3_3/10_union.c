#include<stdio.h>
#define n 3
union employer
{
    int empno;
    char b;
}e;

void main()
{
    
    e.empno=65;
    printf("\n emp.no : %d",e.empno);
    printf("\n Age : %c",e.b);

    printf("\n Address of all variable :");
    printf("\n emp.no : %d",&e.empno);
    printf("\n Age : %c",&e.b);
}