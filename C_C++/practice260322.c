#include<stdio.h>

int main(){
    int x= 7893, r=1, n=10, temp=0;
    while(r>0){
        r=x%n;
        x=x/n;
        printf("%d + ",r);
        temp=temp+r;
        
    }

    return 0;
}