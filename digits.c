#include <stdio.h>
void main()
{
    int a,i;
    printf("enter the number");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
    a/=10;
    }
    
printf("digts of given numbers %d",i);
}


