//nCr using recursion
#include<stdio.h>
int nCr(float n,float r);
int main(){

    int n,r;
    n = 5;
    r = 2;
    printf("%d",nCr(n,r));

    return 0;
}
int nCr(float n, float r){
    if (r==0) return 1;
    return (n/r)*nCr(n-1,r-1);
}
