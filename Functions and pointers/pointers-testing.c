#include<stdio.h>

int main(){

    int n = 5;
    int* x = &n;
    *x = 10;  //i didn't know we can directly modify the value from the pointer
    printf("%d\n",*x);
    printf("%p",x);


    return 0;
}