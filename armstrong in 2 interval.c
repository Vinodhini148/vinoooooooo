#include <stdio.h>
void main()
{
  int a, b, i, t, n, c,r;
  scanf("%d %d", &a, &b);
  for(i=a+1; i<b; ++i)
  {
      t=i;
      n=0;
      while(t!=0)
      {
          r=(t%10);
c=r*r*r;
          n=n+c;
          t/=10;
      }
      if(i==n)
      {
          printf("%d ",i);
      }
  }
} 
