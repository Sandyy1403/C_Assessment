#include<stdio.h.>
int main()
{
    int a,b=2,flag=1;
    scanf("%d",&a);
    x:
    if(a%b==0)
    {
        flag=0;
        printf("not prime");
        return 0;
    }b++;
    if(b<a)
    {  
        goto x;
    }
   
    if(flag==1)
    {
        printf("prime");
    }
}