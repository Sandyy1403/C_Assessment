#include<stdio.h>
int main(){
    int x=1;int s=0;
    while (x<6){
       s+=x;
       x++;
    }
     printf("%d\n",s);
    return 0;
}