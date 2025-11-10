#include<stdio.h>

void fun(int* x, int* y, int* z){
    *x = 10;
    *y = 5;
    *z = 69;
}

int main(){
    int a,b,c;
    a = 1;
    b = 1;
    c = 1;
    fun(&a,&b,&c);
    printf("%d %d %d",a,b,c);

    return 0;
}