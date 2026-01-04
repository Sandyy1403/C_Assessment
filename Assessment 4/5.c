#include<stdio.h>
int main()
{
    int a=1;
    x:
     if(a%2!=0)
     {
        printf("%d\n",a);
     }
     a++;
     if(a<=9)
     {
        goto x;
     }
      
}