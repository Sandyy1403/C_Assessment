#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    e=a/10;
    c=((e/10)*100);
    d=c+b;
    printf("%d",d);
}