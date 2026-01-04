#include<stdio.h>
int main()
{    
    int a,sum=0;
    for(int i=10;i<=99;i++)
    {
       if(i%2!=0)
       {
         a=i/10;
         if(a==7)
         {
            sum=sum+i;
         }
       }
    }
    printf("%d",sum);
}