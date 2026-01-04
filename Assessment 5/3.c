#include<stdio.h>
int main()
{
    int a=1,sum=0;
    for(int i=a;i<=5;i++)
    {
         sum=i+sum;
    }
    printf("%d",sum);
}