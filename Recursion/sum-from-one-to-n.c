#include<stdio.h>

int sum(int n){
    if (n==1) return 1;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    int l = sum(n);
    printf("ans is %d",l);

    return 0;
}