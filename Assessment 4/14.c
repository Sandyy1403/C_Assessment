#include<stdio.h>
int main()
{
    int a,s1,b,s=1;
    scanf("%d",&a);
    s1=a;
    b=a%10;
    if(b%2==0)
    {
        printf("%d",a);
    }
    else
    {
     int c=0;
     x:
     a=a/10;
     c++;
    if(a>0)
    {
        goto x;
    }
    x1:
     s=s*10;
     c--;
     if(1<c)
     {
        goto x1;
     }
      int g=s1%(s);
      int v=s1/s;
      int a1=v-1;
      int  result=(a1*s)+g;
      printf("%d",result);

    }
    
}