#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x;
    scanf("%d",&a);
    b=(a%10)*100;
    c=a/10;
    d=b+((c%10)*10);
    e=c/10;
    f=e%10;
    x=d+f;
    printf("%d",x);

}