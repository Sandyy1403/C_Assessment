#include<stdio.h>
int main()
{
    int a,b,c,e,f,g,i,x,d;
    scanf("%d",&a);
    b=a;
    c=a%10;
    e=a/10;
    d=e%10;
    f=e/10;
    g=f%10;
    x= b-(((c%2)*(g%2))*5);
    printf("%d",x);
    

}