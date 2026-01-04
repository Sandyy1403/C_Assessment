#include<stdio.h>
int main()
{
    int a=1,sum=0;
    x:
     sum=sum+a;
     a++;
     if(a<=5)
     {
        goto x;
     }
     else
     {
        printf("%d",sum);
     }
}