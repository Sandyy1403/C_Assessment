#include<stdio.h>
int main()
{    
    int a,b,i=10;
     while(i<=99)
    {
       if(i%2==0)
       {
          b=i%10;
          a=i/10;
          if((b+a)==6)
          {
            printf("%d\n",i);
          }
        i++;
       }
    }
    
}