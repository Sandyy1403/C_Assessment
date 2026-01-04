#include<stdio.h>
int main()
{
    int a,b,c,d,e,s,x;
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    s=c/10;
    e=s%10;
    x=b+d+e;
    printf("%d",x);
     
    return 0;
}