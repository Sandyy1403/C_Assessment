#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    x:
     b=a%10;
     c=c+b;
     a=a/10;
    if(a>0)
    {
        goto x;
    }
    else
    {
        printf("%d",c);
    }
}