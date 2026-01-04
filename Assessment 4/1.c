#include<stdio.h>
int main()
{
    int a=1;
    x:
    printf("%d\n",a);
    a++;
    if(a<=5)
    {
        goto x;
    }

}