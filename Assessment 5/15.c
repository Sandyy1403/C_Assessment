#include<stdio.h>
int main(){
    int x,middle ,msb=0,result;
    middle =0;
    scanf("%d",&x);
    for(x;x!=0;x=x/10){
        middle+=x%10;
        middle*=10;msb=x;
    }
    middle/=100;
    if(msb%2!=0)
    {
        msb--;
    }
    result=msb;
    for(middle;middle!=0;middle=middle/10)
    {
        result*=10;
        result+=middle%10;
   }
    printf("%d",result);
    return 0;
}