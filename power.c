#include <stdio.h>
void main()
{
    int a,b,c=1;
    printf("enter the number a,b\n");
    scanf("%d%d",&a,&b);
    for( int i=1;i<b;i++)
    {
    c=c*a;
    }
    
printf("power of given numbers %d",c);
}
