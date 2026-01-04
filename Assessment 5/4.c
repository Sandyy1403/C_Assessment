#include<stdio.h>
int main()
{
    int a=6,sum=0;
    for(int i=a;i>=1;i--)
    {
         sum=i+sum;
    }
    printf("%d",sum);
}