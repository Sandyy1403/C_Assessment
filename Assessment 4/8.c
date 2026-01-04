#include <stdio.h>
int main()
{
    int a=10,b,c,d;

x:
    if (a%2==0)
    {
        b=a%10;       
        c=a/10;      
        d=b+c;

        if (d==6)
        {
            printf("%d\n",a);
        }
    }
    a++;
    if (a<100)
        goto x;

    return 0;
}
