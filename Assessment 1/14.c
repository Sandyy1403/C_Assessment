#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,x;
    scanf("%d",&a);
    b=(a%10)*1000;
    c=a/10;
    d=b+((c%10)*100);
    e=c/10;
    f=d+((e%10)*10);
    g=e/10;
    h=g%10;
    x=f+h;
    printf("%d",x);

}