#include <stdio.h>
#include <string.h>
void main()
{

    char str[20];
    int i;

    printf("\nEnter string :");
    gets(str);
    for (i = 0; str[i] != '\0'; i++);

    printf("\nString length :%d", i);
}