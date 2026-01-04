#include<stdio.h>
int main()
{
    int a,b,c,d,e,rev;
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=((b*10)+c);
    e=a*100;
    rev=e+d;
    printf("%d",rev);
}