#include<stdio.h>
int main()
{
    char a;
    printf("enter for character",a);
    scanf("%c",&a);
    if('A'<=a&& a>='z')
    printf("%c is an alphabet",a);
    else
    printf("%c is not an alphabet",a);
    
}
