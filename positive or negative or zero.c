#include<stdio.h>
void main()
{
    int i;
    scanf("%d",&i);
    if(i<=0)
    {
        if(i==0)
            printf("zero");
        else
            printf("negative");
    }
    else
        printf("positive");
}
