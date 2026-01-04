#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=(a%10)*10;
    c=a/10;
    d=c%10;
    e=d+b;
    printf("%d",e);
}