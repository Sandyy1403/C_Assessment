#include<stdio.h>
int main()
{
    int a,b,c,e,f,x,d;
    scanf("%d",&a);
    b=a;
    c=a%10;
    d=a/10;
    e=d%10;
    f=c+e; 
    x=b-((f%2)*5);
    printf("%d",x);
}