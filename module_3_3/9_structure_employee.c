#include <stdio.h>
#define n 2
struct employer
{
    int empno, age;
    char empname[100], address[100];
} e[n];

void main()
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter employer number :");
        scanf("%d", &e[i].empno);
        printf("\nEnter employer name :");
        scanf("%s", &e[i].empname);
        printf("\nEnter employer address :");
        scanf("%s", &e[i].address);
        printf("\nEnter employer age :");
        scanf("%d", &e[i].age);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployer number : %d", e[i].empno);
        printf("\nEmployer name : %s", e[i].empname);
        printf("\nEmployer address : %s", e[i].address);
        printf("\nEmployer number : %d", e[i].age);
        printf("\n__________________________________________");
    }
}