#include<stdio.h>
int main()
{    
    int a,b;
    for(int i=10;i<=99;i++)
    {
       if(i%2==0)
       {
          b=i%10;
          a=i/10;
          if((b+a)==6)
          {
            printf("%d\n",i);
          }

       }
    }
    
}