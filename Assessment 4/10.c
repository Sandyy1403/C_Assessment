#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    x:
    a=a/10;
    c++;
    if(a>0)
    {
        goto x;
    }
    else
    {
        printf("%d",c);
    }
}