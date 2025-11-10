#include<stdio.h>

void printer(int n){

    printf("%d\n",n);
    if(n==1) return;  
    printer(n-1);
}

int main(){
    printer(10);
    return 0;
}