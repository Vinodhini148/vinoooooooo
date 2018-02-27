#include<stdio.h>

void main()
{
    int a,b,count,i,j;
    scanf("%d%d",&a,&b);
    for(j=a;j<=b;j++)
    {
        count=0;
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
            count++;
        }
        if(count==2)
        printf("%d\t",j);
    }
}
