#include <stdio.h>
void main()
{
    int n,a,r,sum;
    scanf("%d",&n);
    sum=0;
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==a)
    
        printf("armstrong");
    
    else
    
        printf("not armstrong");
    
}
