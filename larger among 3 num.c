#include<stdio.h>
int main()
{
    double a,b,c;
    printf("enter the numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>=b && a>=c)
    printf("%d is the largest number:",a);
    if(b>=a && b>=c)
    printf("%d is the largest number:",b);
    if(c>=a && c>=b)
    printf("%d is the largest number:",c);
    return 0;
}
