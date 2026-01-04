#include<stdio.h>
int main()
{
    int x,sum=0;
    scanf("%d",&x);
    for(x;x!=0;x=x/10){
        sum=(sum)+x%10;
        sum=sum*(10);
    }
    printf("%d",sum/10);
    return 0;
}