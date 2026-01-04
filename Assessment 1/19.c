#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a;
    c=a/10; 
    d=b-((c%2)*5);
    printf("%d",d);
}