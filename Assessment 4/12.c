#include<stdio.h>
int main()
{
    int a,b,rev=0,d;
    scanf("%d",&a);
    x:
     b=a%10;
     rev=((rev*10)+(b));
     a=a/10;
    if(a>0)
    {
        goto x;
    }
    else
    {
        printf("%d",rev);
    }
}