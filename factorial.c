#include <stdio.h>
void main()
{
    int c,n,fact=1;
    printf("enter the value for n");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    fact=fact*c;
    printf("%d is factorial",fact);
}

