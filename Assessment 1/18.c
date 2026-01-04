#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    a=a-(5*(a%2));
    printf("%d",a);
}