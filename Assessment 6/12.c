 
#include<stdio.h>
int main(){
    int x,sum;
    sum =0;
    scanf("%d",&x);
    while(x!=0){
        sum+=x%10;
        x=x/10;
    }printf("%d",sum);
    return 0;
}