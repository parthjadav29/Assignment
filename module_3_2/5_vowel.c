#include<stdio.h>
void main()
{
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\ncharacter is vowel");
        break;
        default:
        printf("\ncharacter is consonant");
        
    }
    printf("\n");
}