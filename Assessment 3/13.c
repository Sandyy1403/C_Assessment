#include<stdio.h>
int main()
{
    int a,b,c,d,e,g,f;
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=((c*10)+b);
    e=a%10;
    a=a/10;
    f=a%10;
    g=((f*10)+e);
    if(d==g)
    {
        printf("Success");
    }
    else
    {
       printf("Failure");
    }
}