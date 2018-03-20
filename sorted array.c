#include<stdio.h>
void main()
{
int a,rev=0;
scanf("%d",&a);
while(a!=0)
{
rev=rev*10;
rev=rev+a%10;
a=a/10;
}
printf("%d",rev);
}
