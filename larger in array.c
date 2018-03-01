#include <stdio.h>
void main()
{
  int a[3],i,max=0;
  printf("enter the array");
  for(i=1;i<=3;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=1;i<=3;i++)
  {
      if(a[i]>max)
      {
          max=a[i];
      }
  }
  printf("%d",max);
} 
