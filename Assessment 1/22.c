#include<stdio.h>
int main()
{
    int a,b,c,d,sum=0;
    scanf("%d",&a);
    x:
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    sum=b+c+d;
    if(sum>=10)
    {
        a=sum;
        goto x;
    }
   else
   {
    printf("%d",sum);
   }
}