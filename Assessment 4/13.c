#include<stdio.h>
int main()
{
    int a,b,c=0,k,d,s=1,result;
    scanf("%d",&a);
    k=a/10;
    b=a;
    d=a%10;
    x:
     a=a/10;
     c++;
    if(a>0)
    {
        goto x;
    }
    x1:
     s=s*10;
     c--;
     if(1<c)
     {
        goto x1;
     }
     int g=b%(s);
     g=g/10;
     b=b/s;
     result=(d*s)+(g*10)+b;
     printf("%d",result);
     
}