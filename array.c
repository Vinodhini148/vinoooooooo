#include <stdio.h>
void main()
{
    int n,k,a[100],i,j=0;
    printf("enter the value of n,k");
    scanf("%d%d",&n,&k);
    printf("enter the arrays");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
      j+=a[i];  
    }
printf("sum of given numbers %d",j);
}
