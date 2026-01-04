#include<stdio.h>
int main()
{
    int a,b,e,x;
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    e=a%10;
    x=b+e;
    printf("%d",x);
}