#include<stdio.h>
int main()
{
    int a=6,sum=0;
    x:
     sum=sum+a;
     a--;
     if(a>=1)
     {
        goto x;
     }
     else
     {
        printf("%d",sum);
     }
}