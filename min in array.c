#include <stdio.h>
void main()
{
  int a[3],i;
  printf("enter the array");
  for(i=1;i<=3;i++)
  {
      scanf("%d",&a[i]);
  }
 int max=a[1];
  for(i=1;i<=3;i++)
  {
      if(a[i+1]<max)
      {
          max=a[i];
      }
  }
  printf("%d",max);
} 
