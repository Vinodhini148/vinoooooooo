#include <stdio.h>
void main()
{
    int n,i,c=0;
    printf("enter the value n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           c++;
       }
    }
    if(c==2)
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is not prime number",n);
    }
}
